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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Flashcards
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *text_answer;
    QTextEdit *text_question;
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
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(460, 110, 256, 192));
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(60, 80, 258, 266));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        text_answer = new QLineEdit(widget);
        text_answer->setObjectName("text_answer");

        verticalLayout->addWidget(text_answer);

        text_question = new QTextEdit(widget);
        text_question->setObjectName("text_question");

        verticalLayout->addWidget(text_question);

        save_button = new QPushButton(widget);
        save_button->setObjectName("save_button");

        verticalLayout->addWidget(save_button);

        Flashcards->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Flashcards);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        Flashcards->setMenuBar(menubar);
        statusbar = new QStatusBar(Flashcards);
        statusbar->setObjectName("statusbar");
        Flashcards->setStatusBar(statusbar);

        retranslateUi(Flashcards);

        QMetaObject::connectSlotsByName(Flashcards);
    } // setupUi

    void retranslateUi(QMainWindow *Flashcards)
    {
        Flashcards->setWindowTitle(QCoreApplication::translate("Flashcards", "Flashcards", nullptr));
        text_answer->setText(QCoreApplication::translate("Flashcards", "answer", nullptr));
        text_question->setHtml(QCoreApplication::translate("Flashcards", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">question</p></body></html>", nullptr));
        save_button->setText(QCoreApplication::translate("Flashcards", "save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Flashcards: public Ui_Flashcards {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLASHCARDS_H
