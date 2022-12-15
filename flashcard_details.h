#ifndef FLASHCARD_DETAILS_H
#define FLASHCARD_DETAILS_H

#include <QMainWindow>
#include <QList>
#include <QObject>
#include <QString>
class Flashcard_details : public QMainWindow{


private:
    QString question;
    QString correct_answer;
public:
    Flashcard_details(const Flashcard_details &details);
    Flashcard_details() = default;

    explicit Flashcard_details(const QString &question,
                               const QString &correctAnswer);


    const QString &getQuestion() const;

    const QString &getCorrectAnswer() const;


};

#endif // FLASHCARD_DETAILS_H
