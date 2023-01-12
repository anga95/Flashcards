//
// Created by AnGa on 2022-12-24.
//
#include <QFile>
#include <QMessageBox>
#include "file_handling.h"

void parse_file(QVector<Quiz_card> &questions){
    QFile file(FILE_PATH);
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    if (in.atEnd()){
        QMessageBox::warning(nullptr,"error", "the quiz-file is empty!");
        return;
    }
    while ( !in.atEnd() ){
        Quiz_card card;

        card.set_question(in.readLine());
        card.set_correct_answer(in.readLine());

        for (int wrong_answer = 0; wrong_answer < 3; wrong_answer++) {
            card.set_wrong_answer(in.readLine());
        }
        questions.emplace_back(card);
    }
}
 void save_card_to_file(const Quiz_card& card){
    QFile file(FILE_PATH);
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream out(&file);
    write_card_to_stream(card, out);
    file.close();
}

void save_quiz_to_file(const Quiz &quiz) {
    QFile file(FILE_PATH);
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    for (int i = 0; i < quiz.get_size(); ++i) {
        Quiz_card card = quiz.get_specific_card(i);
        write_card_to_stream(card, out);
    }
    file.close();
}

void write_card_to_stream(const Quiz_card &card, QTextStream &out) {
    out << card.get_question() << '\n';
    out << card.get_correct_answer() << "\n";
    for (int index = 0; index < 3; index++) {
        out << card.get_wrong_answer(index) << "\n";
    }
}
