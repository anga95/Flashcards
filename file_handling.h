//
// Created by AnGa on 2022-12-25.
//

#ifndef FLASHCARDS_FILE_HANDLING_H
#define FLASHCARDS_FILE_HANDLING_H
#include "flashcard_details.h"
#include <QString>
// some handling of files
const QString FILE_PATH = "/Users/andreas/Documents/MIUN/programmeringsmetodik/qt/Flashcards/test.txt";
void parse_file(QVector<Flashcard_details> &questions );
void save_to_file(const Flashcard_details& card);
#endif //FLASHCARDS_FILE_HANDLING_H
