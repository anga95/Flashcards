#include <fstream>
#include <QFile>
#include <QMessageBox>
#include <QTimer>
#include "flashcards.h"
#include "./ui_flashcards.h"
#include"file_handling.h"
#include <iostream>

Flashcards::Flashcards(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Flashcards){
    parse_file(questions);
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
    display_new_question();
}

Flashcards& Flashcards::operator=( Flashcards &&rhs)  {
    std::swap(questions, rhs.questions);
    return *this;
}


Flashcards::~Flashcards(){ delete ui; }

void Flashcards::on_save_button_clicked() {
    QString correct_answer = ui->text_correct_answer->text();
    QString wrong_answer_1 = ui->text_wrong_answer_1->text();
    QString wrong_answer_2 = ui->text_wrong_answer_2->text();
    QString wrong_answer_3 = ui->text_wrong_answer_3->text();
    if ( correct_answer.trimmed().isEmpty() || wrong_answer_1.trimmed().isEmpty() || wrong_answer_2.trimmed().isEmpty() || wrong_answer_3.trimmed().isEmpty()){
        QMessageBox::warning(nullptr, "error", "please fill in all fields!" );
        return;
    }

    QVector<QString> wrong_answers = { wrong_answer_1, wrong_answer_2, wrong_answer_3 };


    Flashcard_details card = Flashcard_details(ui->text_question->text(),
                                             ui->text_correct_answer->text(),
                                             wrong_answers);
    questions.push_back(card);
    save_to_file(card);
}

void Flashcards::insertCard(Flashcard_details &card) {
    questions.emplace_back(card);
}

void Flashcards::display_new_question() {
    if (questions.empty()){
        QMessageBox::warning(nullptr, "empty!", "The quiz is empty, add some questions! ");
        return;
    }
    if (current_index_of_questions < questions.size()){
        int index = getCurrentIndexOfQuestions();
        ui->textBrowser->clear();

        ui->textBrowser->setText(questions[index].get_question());
        ui->answer_button_1->setText(questions[index].get_correct_answer());
        ui->answer_button_2->setText(questions[index].get_wrong_answer(0));
        ui->answer_button_3->setText(questions[index].get_wrong_answer(1));
        ui->answer_button_4->setText(questions[index].get_wrong_answer(2));
    }

    if (current_index_of_questions == questions.size()){
        QMessageBox::warning(nullptr, "Finished!", "The quiz is finished, starting over from beginning ");
        current_index_of_questions = 0;
        display_new_question();
    }
}

void Flashcards::on_answer_button_1_clicked(){
    QPushButton* button = ui->answer_button_1;
    check_answer(button);
}

void Flashcards::on_answer_button_2_clicked(){
    QPushButton* button = ui->answer_button_2;
    check_answer(button);
}

void Flashcards::on_answer_button_3_clicked(){
    QPushButton* button = ui->answer_button_3;
    check_answer(button);
}

void Flashcards::on_answer_button_4_clicked(){
    QPushButton* button = ui->answer_button_4;
    check_answer(button);
}

int Flashcards::getCurrentIndexOfQuestions() const { return current_index_of_questions; }

void Flashcards::check_answer(QPushButton* &button) {
    if (button->text() == questions[current_index_of_questions].get_correct_answer()){
        button->setStyleSheet("QPushButton:pressed { background-color: green;}");
        current_index_of_questions++;
        display_new_question();
    }else{
        button->setStyleSheet("QPushButton:pressed { background-color: red;}");
    }
}

//
//        QTimer::singleShot(500, [this] {
//            ui->answer_button_1->setStyleSheet("QPushButton:pressed { background-color: white;}");
//            display_new_question(++current_index_of_questions);
//        });
