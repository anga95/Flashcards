#ifndef FLASHCARDS_H
#define FLASHCARDS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Flashcards; }
QT_END_NAMESPACE

class Flashcards : public QMainWindow {
    Q_OBJECT

public:
    Flashcards(QWidget *parent = nullptr);
    ~Flashcards();

private slots:
    void on_save_button_clicked();

private:
//    QVector<Question> questions;
    Ui::Flashcards *ui;
};
#endif // FLASHCARDS_H
