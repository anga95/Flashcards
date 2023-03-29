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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
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
    QTextBrowser *textBrowser;
    QProgressBar *progressBar;
    QPushButton *answer_button_1;
    QPushButton *answer_button_2;
    QPushButton *answer_button_3;
    QPushButton *answer_button_4;
    QWidget *tab_2;
    QWidget *layoutWidget1;
    QVBoxLayout *add_question_widget;
    QSpacerItem *verticalSpacer_3;
    QLabel *label;
    QLineEdit *text_question;
    QSpacerItem *verticalSpacer;
    QLabel *label_2;
    QLineEdit *text_correct_answer;
    QSpacerItem *verticalSpacer_2;
    QLabel *wrong_answers;
    QLineEdit *text_wrong_answer_1;
    QLineEdit *text_wrong_answer_2;
    QLineEdit *text_wrong_answer_3;
    QPushButton *save_button;
    QWidget *tab_5;
    QComboBox *comboBox;
    QTextBrowser *delete_text_browser;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *delete_label_1;
    QLabel *delete_label_2;
    QLabel *delete_label_3;
    QLabel *delete_label_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *delete_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Flashcards)
    {
        if (Flashcards->objectName().isEmpty())
            Flashcards->setObjectName("Flashcards");
        Flashcards->resize(898, 750);
        centralwidget = new QWidget(Flashcards);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(120, 10, 521, 511));
        tab = new QWidget();
        tab->setObjectName("tab");
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 70, 461, 351));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(layoutWidget);
        textBrowser->setObjectName("textBrowser");

        verticalLayout->addWidget(textBrowser);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName("progressBar");
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        answer_button_1 = new QPushButton(layoutWidget);
        answer_button_1->setObjectName("answer_button_1");
        answer_button_1->setStyleSheet(QString::fromUtf8(""));
        answer_button_1->setCheckable(false);
        answer_button_1->setAutoRepeatInterval(121);

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

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(40, 60, 451, 365));
        add_question_widget = new QVBoxLayout(layoutWidget1);
        add_question_widget->setObjectName("add_question_widget");
        add_question_widget->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        add_question_widget->addItem(verticalSpacer_3);

        label = new QLabel(layoutWidget1);
        label->setObjectName("label");

        add_question_widget->addWidget(label);

        text_question = new QLineEdit(layoutWidget1);
        text_question->setObjectName("text_question");

        add_question_widget->addWidget(text_question);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        add_question_widget->addItem(verticalSpacer);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");

        add_question_widget->addWidget(label_2);

        text_correct_answer = new QLineEdit(layoutWidget1);
        text_correct_answer->setObjectName("text_correct_answer");

        add_question_widget->addWidget(text_correct_answer);

        verticalSpacer_2 = new QSpacerItem(356, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        add_question_widget->addItem(verticalSpacer_2);

        wrong_answers = new QLabel(layoutWidget1);
        wrong_answers->setObjectName("wrong_answers");

        add_question_widget->addWidget(wrong_answers);

        text_wrong_answer_1 = new QLineEdit(layoutWidget1);
        text_wrong_answer_1->setObjectName("text_wrong_answer_1");

        add_question_widget->addWidget(text_wrong_answer_1);

        text_wrong_answer_2 = new QLineEdit(layoutWidget1);
        text_wrong_answer_2->setObjectName("text_wrong_answer_2");

        add_question_widget->addWidget(text_wrong_answer_2);

        text_wrong_answer_3 = new QLineEdit(layoutWidget1);
        text_wrong_answer_3->setObjectName("text_wrong_answer_3");

        add_question_widget->addWidget(text_wrong_answer_3);

        save_button = new QPushButton(layoutWidget1);
        save_button->setObjectName("save_button");

        add_question_widget->addWidget(save_button);

        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        comboBox = new QComboBox(tab_5);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(20, 30, 451, 31));
        delete_text_browser = new QTextBrowser(tab_5);
        delete_text_browser->setObjectName("delete_text_browser");
        delete_text_browser->setGeometry(QRect(70, 80, 256, 192));
        verticalLayoutWidget = new QWidget(tab_5);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(160, 280, 351, 151));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        delete_label_1 = new QLabel(verticalLayoutWidget);
        delete_label_1->setObjectName("delete_label_1");

        verticalLayout_3->addWidget(delete_label_1);

        delete_label_2 = new QLabel(verticalLayoutWidget);
        delete_label_2->setObjectName("delete_label_2");

        verticalLayout_3->addWidget(delete_label_2);

        delete_label_3 = new QLabel(verticalLayoutWidget);
        delete_label_3->setObjectName("delete_label_3");

        verticalLayout_3->addWidget(delete_label_3);

        delete_label_4 = new QLabel(verticalLayoutWidget);
        delete_label_4->setObjectName("delete_label_4");

        verticalLayout_3->addWidget(delete_label_4);

        verticalLayoutWidget_2 = new QWidget(tab_5);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(50, 280, 101, 151));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");

        verticalLayout_4->addWidget(label_4);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName("label_5");

        verticalLayout_4->addWidget(label_5);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName("label_6");

        verticalLayout_4->addWidget(label_6);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName("label_7");

        verticalLayout_4->addWidget(label_7);

        delete_button = new QPushButton(tab_5);
        delete_button->setObjectName("delete_button");
        delete_button->setGeometry(QRect(340, 160, 141, 41));
        tabWidget->addTab(tab_5, QString());
        Flashcards->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Flashcards);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 898, 37));
        Flashcards->setMenuBar(menubar);
        statusbar = new QStatusBar(Flashcards);
        statusbar->setObjectName("statusbar");
        Flashcards->setStatusBar(statusbar);

        retranslateUi(Flashcards);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Flashcards);
    } // setupUi

    void retranslateUi(QMainWindow *Flashcards)
    {
        Flashcards->setWindowTitle(QCoreApplication::translate("Flashcards", "Flashcards", nullptr));
        answer_button_1->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        answer_button_2->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        answer_button_3->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        answer_button_4->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Flashcards", "Solve Quiz", nullptr));
        label->setText(QCoreApplication::translate("Flashcards", "Question", nullptr));
        label_2->setText(QCoreApplication::translate("Flashcards", "Answer", nullptr));
        text_correct_answer->setText(QString());
        wrong_answers->setText(QCoreApplication::translate("Flashcards", "Wrong answers", nullptr));
        save_button->setText(QCoreApplication::translate("Flashcards", "save", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Flashcards", "Add question", nullptr));
        delete_label_1->setText(QCoreApplication::translate("Flashcards", "TextLabel", nullptr));
        delete_label_2->setText(QCoreApplication::translate("Flashcards", "TextLabel", nullptr));
        delete_label_3->setText(QCoreApplication::translate("Flashcards", "TextLabel", nullptr));
        delete_label_4->setText(QCoreApplication::translate("Flashcards", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Flashcards", "Correct answer:", nullptr));
        label_5->setText(QCoreApplication::translate("Flashcards", "wrong answer:", nullptr));
        label_6->setText(QCoreApplication::translate("Flashcards", "wrong answer:", nullptr));
        label_7->setText(QCoreApplication::translate("Flashcards", "wrong answer:", nullptr));
        delete_button->setText(QCoreApplication::translate("Flashcards", "DELETE", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Flashcards", "Delete Question", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Flashcards: public Ui_Flashcards {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLASHCARDS_H
