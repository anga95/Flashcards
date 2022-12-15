#ifndef FLASHCARD_DETAILS_H
#define FLASHCARD_DETAILS_H

#include <QList>
#include "QtCore/qstring.h"
class Flashcard_details{

    public:
    explicit Flashcard_details();
private:
    QString describing_text;
    QString correct_answer;
    QStringList wrong_answers;
};

#endif // FLASHCARD_DETAILS_H
