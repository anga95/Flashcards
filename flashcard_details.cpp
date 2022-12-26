#include "flashcard_details.h"


const QString &Flashcard_details::get_question() const { return question; }

const QString &Flashcard_details::get_correct_answer() const { return correct_answer; }

void Flashcard_details::set_question(const QString &newQuestion) { question = newQuestion;}

void Flashcard_details::set_correct_answer(const QString &newCorrect_answer){ correct_answer = newCorrect_answer; }

Flashcard_details::Flashcard_details(const Flashcard_details& details) {
    question = details.question;
    correct_answer = details.correct_answer;
    wrong_answers = details.wrong_answers;
}


Flashcard_details::Flashcard_details(const QString &question,
                                     const QString &correctAnswer,
                                     const QVector<QString> &wrongAnswers)
     : question(question), correct_answer(correctAnswer), wrong_answers(wrongAnswers) {}

const QString &Flashcard_details::get_wrong_answer(int index) const {
    return wrong_answers[index];
}

void Flashcard_details::set_wrong_answer(const QString& wrong_answer) {
    wrong_answers.push_back(wrong_answer);
}

