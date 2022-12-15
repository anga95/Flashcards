#include "flashcards.h"
#include "./ui_flashcards.h"

Flashcards::Flashcards(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Flashcards){
    ui->setupUi(this);
}

Flashcards::~Flashcards(){ delete ui; }


void Flashcards::on_save_button_clicked() {
    QString answer = ui->text_answer->text();
    QString question = ui->text_question->placeholderText();


    ui->textBrowser->append(answer);
}





