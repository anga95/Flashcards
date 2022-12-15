#include "flashcards.h"
#include "./ui_flashcards.h"

Flashcards::Flashcards(QWidget *parent) : QMainWindow(parent) , ui(new Ui::Flashcards){
    ui->setupUi(this);
}

Flashcards::~Flashcards(){ delete ui; }

void Flashcards::on_save_button_clicked() {
    Flashcard_details card = Flashcard_details(ui->text_question->toPlainText(),
                                             ui->text_answer->text());
    insertCard(card);
    ui->textBrowser->clear();
    ui->textBrowser->append(card.getQuestion());
}

void Flashcards::insertCard(Flashcard_details &card) {
    questions.emplace_back(card);
}





