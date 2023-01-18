//
// Created by AnGa on 2023-01-11.
//

#include "uiSetup.h"
#include "ui_flashcards.h"
#include "file_handling.h"
#include <random>
#include <QMessageBox>

void clear_input_fields(Ui::Flashcards *ui) {
    ui->text_question->clear();
    ui->text_correct_answer->clear();
    ui->text_wrong_answer_1->clear();
    ui->text_wrong_answer_2->clear();
    ui->text_wrong_answer_3->clear();
}

void set_output_fields(Ui::Flashcards *ui, const Quiz_card &card) {
    ui->textBrowser->setText(card.get_question());

    QVector<QString> answers {  card.get_correct_answer()};
    for (auto& wrong_answer: card.get_all_wrong_answers()) {
        answers.emplace_back(wrong_answer);
    }
    auto rd = std::random_device{};
    auto rng = std::default_random_engine {rd()};

    std::shuffle(answers.begin(), answers.end(), rng);
    ui->answer_button_1->setText(answers[0]);
    ui->answer_button_2->setText(answers[1]);
    ui->answer_button_3->setText(answers[2]);
    ui->answer_button_4->setText(answers[3]);
}

void set_answer_button_format(Ui::Flashcards *ui){
    ui->answer_button_1->setStyleSheet(QString("QPushButton{ background-color: grey;}"));
    ui->answer_button_2->setStyleSheet(QString("QPushButton{ background-color: grey;}"));
    ui->answer_button_3->setStyleSheet(QString("QPushButton{ background-color: grey;}"));
    ui->answer_button_4->setStyleSheet(QString("QPushButton{ background-color: grey;}"));
}

void set_delete_page_fields(Ui::Flashcards *ui, const Quiz_card &card) {
    ui->delete_button->setStyleSheet(QString("QPushButton{ background-color: grey; color: black;}"));
    if (card.get_question().isEmpty()){
        ui->delete_text_browser->setText("");
        ui->delete_label_1->setText("");
        ui->delete_label_2->setText("");
        ui->delete_label_3->setText("");
        ui->delete_label_4->setText("");
    }
    else{
        ui->delete_text_browser->setText(card.get_question());
        ui->delete_label_1->setText(card.get_correct_answer());
        ui->delete_label_2->setText(card.get_wrong_answer(0));
        ui->delete_label_3->setText(card.get_wrong_answer(1));
        ui->delete_label_4->setText(card.get_wrong_answer(2));
    }
}

void delete_card_from_quiz(Ui::Flashcards *ui, Quiz &quiz) {
    int index = ui->comboBox->currentIndex();
    int combo_box_count = ui->comboBox->count();
    if(index == -1){ return; }
    if (combo_box_count == 1 ){
        if (!quiz.empty()) {
            quiz.delete_card(index);
            save_quiz_to_file(quiz);
        }
        set_progress_bar(ui, quiz);
        display_new_question(ui, quiz);
        ui->comboBox->setItemText(0, "");
        set_delete_page_fields(ui, Quiz_card());
    }else{
        ui->comboBox->removeItem(index);
        quiz.delete_card(index);
        set_progress_bar(ui, quiz);
        save_quiz_to_file(quiz);
        display_new_question(ui, quiz);
    }

}
void fill_delete_list(Ui::Flashcards *ui, Quiz &quiz) {
    for (int i = 0; i < quiz.get_size(); ++i) {
        ui->comboBox->addItem(quiz.get_specific_card(i).get_question());
    }
}

void set_progress_bar(Ui::Flashcards *ui, Quiz &quiz) {
    ui->progressBar->setFormat("%v/%m");
    ui->progressBar->setRange(0, quiz.get_size());
    ui->progressBar->setValue(quiz.get_question_index());
    ui->progressBar->setVisible(true);
}
void display_new_question(Ui::Flashcards *ui, Quiz &quiz) {
    set_answer_button_format(ui);
    if (quiz.empty()){
        ui->textBrowser->setText("Quiz is empty");
        ui->answer_button_1->setText("No cards in quiz");
        ui->answer_button_2->setText("No cards in quiz");
        ui->answer_button_3->setText("No cards in quiz");
        ui->answer_button_4->setText("No cards in quiz");
        return;
    }
    if (quiz.get_question_index() == quiz.get_size()){
        QMessageBox::warning(nullptr, "Finished!", "The quiz is finished, starting over from beginning ");
        quiz.reset_question_index();
    }
    ui->textBrowser->clear();
    ui->progressBar->setValue(quiz.get_question_index());

    Quiz_card card = quiz.get_current_card();
    set_output_fields(ui, card);
}

void save_card_to_quiz(Ui::Flashcards *ui, Quiz &quiz) {
    QVector<QString> inputs {ui->text_question->text(), ui->text_correct_answer->text(),
                             ui->text_wrong_answer_1->text(), ui->text_wrong_answer_2->text(),
                             ui->text_wrong_answer_3->text()
    };
    try {
        Quiz_card card = Quiz_card(inputs);
        quiz.insert_card(card);
        ui->progressBar->setMaximum(quiz.get_size());
        save_card_to_file(card);
        clear_input_fields(ui);
        ui->comboBox->addItem(card.get_question());
        if (ui->comboBox->itemText(0).isEmpty()){
            ui->comboBox->removeItem(0);
        }
        set_delete_page_fields(ui, quiz.get_specific_card(0));
        display_new_question(ui, quiz);
    }catch(const std::runtime_error& e){
        QMessageBox::warning(nullptr, "error", e.what());
    }
}

void check_answer(QPushButton* &button, Ui::Flashcards *ui, Quiz &quiz) {
    Quiz_card currentCard = quiz.get_current_card();
    if (button->text() == currentCard.get_correct_answer()){
        quiz.increase_question_index();
        display_new_question(ui, quiz);
    }else{
        button->setStyleSheet(QString("QPushButton{ background-color: red;}"));
    }
}
