#include "flashcard_details.h"

 Flashcard_details::Flashcard_details(const QString &question, const QString &correctAnswer)
    : question(question), correct_answer(correctAnswer) {}


const QString &Flashcard_details::getQuestion() const {
    return question;
}

const QString &Flashcard_details::getCorrectAnswer() const {
    return correct_answer;
}

Flashcard_details::Flashcard_details(const Flashcard_details& details) {
    question = details.question;
    correct_answer = details.correct_answer;
}

