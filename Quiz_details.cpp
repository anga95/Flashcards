#include "Quiz_card.h"

Quiz_card::Quiz_card(QVector<QString> inputs) {
    const char*  error_message = "please fill in all fields!";
    for (auto & input : inputs) {
        if (input.trimmed().isEmpty()){
            throw std::runtime_error(error_message);
        }
    }
    question = inputs[0];
    correct_answer = inputs[1];
    wrong_answers = {inputs[2], inputs[3], inputs[4]};
}

const QString &Quiz_card::get_question() const { return question; }

const QString &Quiz_card::get_correct_answer() const { return correct_answer; }

void Quiz_card::set_question(const QString &newQuestion) { question = newQuestion;}

void Quiz_card::set_correct_answer(const QString &newCorrect_answer){ correct_answer = newCorrect_answer; }


const QString &Quiz_card::get_wrong_answer(int index) const {
    return wrong_answers[index];
}

void Quiz_card::set_wrong_answer(const QString& wrong_answer) {
    wrong_answers.push_back(wrong_answer);
}

const QVector<QString> &Quiz_card::get_all_wrong_answers() const {
    return wrong_answers;
}
