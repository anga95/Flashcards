//
// Created by AnGa on 2022-12-25.
//

#ifndef FLASHCARDS_FILE_HANDLING_H
#define FLASHCARDS_FILE_HANDLING_H
#include "Quiz_card.h"
#include "Quiz.h"
#include <QString>
const QString FILE_PATH = "/Users/andreas/Documents/MIUN/programmeringsmetodik/qt/Flashcards/data.txt";
void parse_file(QVector<Quiz_card> &questions, QString input_file = FILE_PATH);
void save_card_to_file(const Quiz_card& card);
void save_quiz_to_file(const Quiz& quiz);
void write_card_to_stream(const Quiz_card& card, QTextStream& out);

#endif //FLASHCARDS_FILE_HANDLING_H
