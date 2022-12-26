/********************************************************************************
** Form generated from reading UI file 'flashcards.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLASHCARDS_H
#define UI_FLASHCARDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Flashcards
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *answer_button_1;
    QPushButton *answer_button_2;
    QPushButton *answer_button_3;
    QPushButton *answer_button_4;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QWidget *tab_2;
    QWidget *layoutWidget2;
    QVBoxLayout *add_question_widget;
    QLabel *label;
    QTextEdit *text_question;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *text_correct_answer;
    QSpacerItem *verticalSpacer_2;
    QLabel *wrong_answers;
    QLineEdit *text_wrong_answer_1;
    QLineEdit *text_wrong_answer_2;
    QLineEdit *text_wrong_answer_3;
    QPushButton *save_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Flashcards)
    {
        if (Flashcards->objectName().isEmpty())
            Flashcards->setObjectName("Flashcards");
        Flashcards->resize(800, 600);
        centralwidget = new QWidget(Flashcards);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(120, 10, 521, 511));
        tab = new QWidget();
        tab->setObjectName("tab");
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 300, 361, 134));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        answer_button_1 = new QPushButton(layoutWidget);
        answer_button_1->setObjectName("answer_button_1");

        verticalLayout->addWidget(answer_button_1);

        answer_button_2 = new QPushButton(layoutWidget);
        answer_button_2->setObjectName("answer_button_2");

        verticalLayout->addWidget(answer_button_2);

        answer_button_3 = new QPushButton(layoutWidget);
        answer_button_3->setObjectName("answer_button_3");

        verticalLayout->addWidget(answer_button_3);

        answer_button_4 = new QPushButton(layoutWidget);
        answer_button_4->setObjectName("answer_button_4");

        verticalLayout->addWidget(answer_button_4);

        layoutWidget1 = new QWidget(tab);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(60, 10, 258, 218));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName("label_3");

        verticalLayout_2->addWidget(label_3);

        textBrowser = new QTextBrowser(layoutWidget1);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_2->addWidget(textBrowser);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(90, 30, 361, 431));
        add_question_widget = new QVBoxLayout(layoutWidget2);
        add_question_widget->setObjectName("add_question_widget");
        add_question_widget->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget2);
        label->setObjectName("label");

        add_question_widget->addWidget(label);

        text_question = new QTextEdit(layoutWidget2);
        text_question->setObjectName("text_question");

        add_question_widget->addWidget(text_question);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        add_question_widget->addItem(verticalSpacer);

        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName("label_2");

        add_question_widget->addWidget(label_2);

        text_correct_answer = new QLineEdit(layoutWidget2);
        text_correct_answer->setObjectName("text_correct_answer");

        add_question_widget->addWidget(text_correct_answer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        add_question_widget->addItem(verticalSpacer_2);

        wrong_answers = new QLabel(layoutWidget2);
        wrong_answers->setObjectName("wrong_answers");

        add_question_widget->addWidget(wrong_answers);

        text_wrong_answer_1 = new QLineEdit(layoutWidget2);
        text_wrong_answer_1->setObjectName("text_wrong_answer_1");

        add_question_widget->addWidget(text_wrong_answer_1);

        text_wrong_answer_2 = new QLineEdit(layoutWidget2);
        text_wrong_answer_2->setObjectName("text_wrong_answer_2");

        add_question_widget->addWidget(text_wrong_answer_2);

        text_wrong_answer_3 = new QLineEdit(layoutWidget2);
        text_wrong_answer_3->setObjectName("text_wrong_answer_3");

        add_question_widget->addWidget(text_wrong_answer_3);

        save_button = new QPushButton(layoutWidget2);
        save_button->setObjectName("save_button");

        add_question_widget->addWidget(save_button);

        tabWidget->addTab(tab_2, QString());
        Flashcards->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Flashcards);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        Flashcards->setMenuBar(menubar);
        statusbar = new QStatusBar(Flashcards);
        statusbar->setObjectName("statusbar");
        Flashcards->setStatusBar(statusbar);

        retranslateUi(Flashcards);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Flashcards);
    } // setupUi

    void retranslateUi(QMainWindow *Flashcards)
    {
        Flashcards->setWindowTitle(QCoreApplication::translate("Flashcards", "Flashcards", nullptr));
        answer_button_1->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        answer_button_2->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        answer_button_3->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        answer_button_4->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        label_3->setText(QCoreApplication::translate("Flashcards", "Question", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Flashcards", "Solve Quiz", nullptr));
        label->setText(QCoreApplication::translate("Flashcards", "Question", nullptr));
        text_question->setHtml(QCoreApplication::translate("Flashcards", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        text_correct_answer->setText(QString());
        wrong_answers->setText(QCoreApplication::translate("Flashcards", "Wrong answers", nullptr));
        save_button->setText(QCoreApplication::translate("Flashcards", "save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Flashcards", "Add question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Flashcards: public Ui_Flashcards {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLASHCARDS_H
