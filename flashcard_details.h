#ifndef FLASHCARD_DETAILS_H
#define FLASHCARD_DETAILS_H

#include <QMainWindow>
#include <QList>
#include <QObject>
#include <QString>
#include <ostream>

class Flashcard_details{

private:
    QString question;
    QString correct_answer;
    QVector<QString> wrong_answers;
public:
    const QString &get_wrong_answer(int index) const;


    Flashcard_details() = default;
    Flashcard_details(const QString &question, const QString &correctAnswer, const QVector<QString> &wrongAnswers);

    Flashcard_details(const Flashcard_details &details);

    const QString &get_question() const;

    const QString &get_correct_answer() const;

    void set_question(const QString &newQuestion);
    void set_correct_answer(const QString &newCorrect_answer);

//    Flashcard_details& operator=(Flashcard_details&& other);
//    Flashcard_details& operator=(const Flashcard_details& other);
    void set_wrong_answer(const QString& wrong_answer);

    friend std::ostream &operator<<(std::ostream &os, const Flashcard_details &details);

};

#endif // FLASHCARD_DETAILS_H
