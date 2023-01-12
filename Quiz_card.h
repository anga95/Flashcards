#ifndef FLASHCARD_QUIZ_DETAILS_H
#define FLASHCARD_QUIZ_DETAILS_H

#include <QMainWindow>
#include <QList>
#include <QObject>
#include <QString>
#include <ostream>

class Quiz_card{

private:
    QString question;
    QString correct_answer;
    QVector<QString> wrong_answers;
public:
    explicit Quiz_card(QVector<QString> inputs);
    Quiz_card() = default;

    const QString &get_wrong_answer(int index) const;
    const QVector<QString> &get_all_wrong_answers() const;
    const QString &get_question() const;
    const QString &get_correct_answer() const;

    void set_question(const QString &newQuestion);
    void set_correct_answer(const QString &newCorrect_answer);
    void set_wrong_answer(const QString& wrong_answer);


};

#endif // FLASHCARD_DETAILS_H
