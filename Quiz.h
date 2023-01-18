//
// Created by AnGa on 2023-01-11.
//

#ifndef FLASHCARDS_QUIZ_H
#define FLASHCARDS_QUIZ_H


#include "Quiz_card.h"

class Quiz {
private:
    QVector<Quiz_card> questions;
    int question_index = 0;
public:
    void reset_question_index();
    void increase_question_index();
    [[nodiscard]] int get_question_index() const;

    void insert_card(Quiz_card &card);
    explicit Quiz();
    bool empty();
    [[nodiscard]] const int get_size() const;

    Quiz_card get_current_card();
    [[nodiscard]] Quiz_card get_specific_card(int i) const;

    void delete_card(int index);
};

    //const QVector<Quiz_card> &getQuestions() const;
    // void setQuestions(const QVector<Quiz_card> &questions);

#endif //FLASHCARDS_QUIZ_H
