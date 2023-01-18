#include "Quiz_card.h"
#include <QMessageBox>
#include <QTimer>
#include "flashcards.h"
#include "./ui_flashcards.h"
#include "uiSetup.h"
#include <iostream>

Flashcards::Flashcards(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Flashcards){
    ui->setupUi(this);
    ui->tabWidget->setCurrentIndex(0);
    set_progress_bar(ui, quiz);
    display_new_question(ui,quiz);
    fill_delete_list(ui, quiz);
    set_delete_page_fields(ui, quiz.get_specific_card(0));
}

Flashcards::~Flashcards(){ delete ui; }

void Flashcards::on_save_button_clicked() {
    save_card_to_quiz(ui, quiz);
}

void Flashcards::on_answer_button_1_clicked(){
    if(!quiz.empty()){
        QPushButton* button = ui->answer_button_1;
        check_answer(button, ui, quiz);
    }
}

void Flashcards::on_answer_button_2_clicked(){
    if (!quiz.empty()){
        QPushButton* button = ui->answer_button_2;
        check_answer(button, ui, quiz);
    }
}

void Flashcards::on_answer_button_3_clicked(){
    if (!quiz.empty()){
        QPushButton* button = ui->answer_button_3;
        check_answer(button, ui, quiz);
    }
}

void Flashcards::on_answer_button_4_clicked(){
    if (!quiz.empty()){
        QPushButton* button = ui->answer_button_4;
        check_answer(button, ui, quiz);
    }
}

void Flashcards::on_comboBox_currentIndexChanged(int index){
    Quiz_card card = quiz.get_specific_card(index);
    set_delete_page_fields(ui, card);
}

void Flashcards::on_delete_button_clicked() {
    delete_card_from_quiz(ui, quiz);
}

