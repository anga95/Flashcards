#ifndef FLASHCARDS_H
#define FLASHCARDS_H

#include <QMainWindow>
#include "QtWidgets/qpushbutton.h"
#include "flashcard_details.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Flashcards; }
QT_END_NAMESPACE

class Flashcards : public QMainWindow {
    Q_OBJECT

public:
    Flashcards(QWidget *parent = nullptr);
    ~Flashcards();

    void insertCard(Flashcard_details &card);

    Flashcards& operator=( Flashcards &&rhs) ;

    void display_new_question();
    int getCurrentIndexOfQuestions() const;
    void check_answer(QPushButton* &button);

private slots:
    void on_save_button_clicked();
    void on_answer_button_1_clicked();
    void on_answer_button_2_clicked();
    void on_answer_button_3_clicked();
    void on_answer_button_4_clicked();

private:
    QVector<Flashcard_details> questions;
    int current_index_of_questions = 0;
    Ui::Flashcards *ui;

};
#endif // FLASHCARDS_H
