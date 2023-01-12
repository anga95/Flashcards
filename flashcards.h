#ifndef FLASHCARDS_H
#define FLASHCARDS_H

#include <QMainWindow>
#include "QtWidgets/qpushbutton.h"
#include "Quiz.h"
//#include "Quiz_card.h"
//#include "Quiz.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Flashcards; }
QT_END_NAMESPACE

class Flashcards : public QMainWindow {
    Q_OBJECT

public:
    explicit Flashcards(QWidget *parent = nullptr);
    ~Flashcards();

private slots:
    void on_save_button_clicked();
    void on_answer_button_1_clicked();
    void on_answer_button_2_clicked();
    void on_answer_button_3_clicked();
    void on_answer_button_4_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_delete_button_clicked();

private:
    Quiz quiz;
    Ui::Flashcards *ui;
};
#endif // FLASHCARDS_H
