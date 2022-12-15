#ifndef FLASHCARDS_H
#define FLASHCARDS_H

#include <QMainWindow>
#include "Flashcard_details.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Flashcards; }
QT_END_NAMESPACE

class Flashcards : public QMainWindow {
    Q_OBJECT

public:
    Flashcards(QWidget *parent = nullptr);
    ~Flashcards();
    void insertCard(Flashcard_details &card);

private slots:
    void on_save_button_clicked();

private:
    std::vector<Flashcard_details> questions;
    Ui::Flashcards *ui;
};
#endif // FLASHCARDS_H
