//
// Created by AnGa on 2023-01-11.
//

#include "Quiz.h"
#include "file_handling.h"

void Quiz::insert_card(Quiz_card &card) {
    questions.emplace_back(card);
}

Quiz::Quiz(){
    parse_file(questions);
}

bool Quiz::empty() {
    return questions.empty();
}

int Quiz::get_question_index() const {
    return question_index;
}

const int Quiz::get_size() const{
    return questions.size();
}

void Quiz::reset_question_index(){
    question_index = 0;
}

Quiz_card Quiz::get_current_card() {
    return questions[get_question_index()];
}

void Quiz::increase_question_index() {
    question_index++;
}

Quiz_card Quiz::get_specific_card(int i) const{
    return questions[i];
}

void Quiz::delete_card(int index) {
    questions.erase(questions.begin() + index);
}



//const QVector<Quiz_card> &Quiz::getQuestions() const {
//    return questions;
//}
//
//void Quiz::setQuestions(const QVector<Quiz_card> &questions) {
//    Quiz::questions = questions;
//}
