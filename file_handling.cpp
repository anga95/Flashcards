//
// Created by AnGa on 2022-12-24.
//
#include <QFile>
#include <QMessageBox>

#include "file_handling.h"

/* Varför fungerar inte:     QVector<Flashcard_details>& parse_file() ???
 * felkod:                   Reference to stack memory associated with local variable 'questions' returned
 */
void parse_file(QVector<Flashcard_details> &questions){
    QFile file(FILE_PATH);
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    if (in.atEnd()){
        QMessageBox::warning(nullptr,"error", "the quiz-file is empty!");
        return;
    }
    while ( !in.atEnd() ){
        Flashcard_details card;

        card.set_question(in.readLine());
        card.set_correct_answer(in.readLine());

        for (int wrong_answer = 0; wrong_answer < 3; wrong_answer++) {
            card.set_wrong_answer(in.readLine());
        }
        questions.emplace_back(card);
    }
}
 void save_to_file(const Flashcard_details& card){
    QFile file(FILE_PATH);
    file.open(QIODevice::WriteOnly | QIODevice::Append);
    QTextStream out(&file);
    out.setFieldWidth(100);
    out << card.get_question() << "\n" << card.get_correct_answer() << "\n";
    for (int index = 0; index < 3; index++) {
        out << card.get_wrong_answer(index) << "\n";
    }
    file.close();
}
