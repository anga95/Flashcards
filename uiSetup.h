//
// Created by AnGa on 2023-01-11.
//

#ifndef FLASHCARDS_UISETUP_H
#define FLASHCARDS_UISETUP_H

#include "Quiz_card.h"
#include "ui_flashcards.h"
#include "Quiz.h"


void clear_input_fields(Ui::Flashcards *ui);
void set_output_fields(Ui::Flashcards *ui, const Quiz_card &card);
void set_answer_button_format(Ui::Flashcards *ui);
void set_delete_page_fields(Ui::Flashcards *ui, const Quiz_card &card);
void delete_card_from_quiz(Ui::Flashcards *ui, Quiz &quiz);
void fill_delete_list(Ui::Flashcards *ui, Quiz &quiz);
void set_progress_bar(Ui::Flashcards *ui, Quiz &quiz);
void display_new_question(Ui::Flashcards *ui, Quiz &quiz);
void check_answer(QPushButton* &button, Ui::Flashcards *ui, Quiz &quiz);
void save_card_to_quiz(Ui::Flashcards *ui, Quiz &quiz);


#endif //FLASHCARDS_UISETUP_H
