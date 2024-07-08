/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_19;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *startButton;
    QPushButton *aboutButton;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QGridLayout *gridLayout;
    QPushButton *button_1;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_8;
    QPushButton *button_0;
    QPushButton *button_6;
    QPushButton *button_2;
    QPushButton *button_7;
    QPushButton *button_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *tileButtonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 835);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_19 = new QVBoxLayout(centralwidget);
        verticalLayout_19->setObjectName("verticalLayout_19");
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName("textBrowser");

        verticalLayout_19->addWidget(textBrowser);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        startButton = new QPushButton(centralwidget);
        startButton->setObjectName("startButton");

        horizontalLayout_3->addWidget(startButton);

        aboutButton = new QPushButton(centralwidget);
        aboutButton->setObjectName("aboutButton");

        horizontalLayout_3->addWidget(aboutButton);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setChecked(true);

        horizontalLayout_5->addWidget(radioButton_2);

        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName("radioButton");

        horizontalLayout_5->addWidget(radioButton);

        horizontalLayout_5->setStretch(0, 4);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);

        horizontalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);

        verticalLayout_19->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        button_1 = new QPushButton(centralwidget);
        tileButtonGroup = new QButtonGroup(MainWindow);
        tileButtonGroup->setObjectName("tileButtonGroup");
        tileButtonGroup->addButton(button_1);
        button_1->setObjectName("button_1");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(72);
        button_1->setFont(font);

        gridLayout->addWidget(button_1, 3, 3, 1, 1);

        button_3 = new QPushButton(centralwidget);
        tileButtonGroup->addButton(button_3);
        button_3->setObjectName("button_3");
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);
        button_3->setFont(font);

        gridLayout->addWidget(button_3, 4, 2, 1, 1);

        button_4 = new QPushButton(centralwidget);
        tileButtonGroup->addButton(button_4);
        button_4->setObjectName("button_4");
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);
        button_4->setFont(font);

        gridLayout->addWidget(button_4, 4, 3, 1, 1);

        button_8 = new QPushButton(centralwidget);
        tileButtonGroup->addButton(button_8);
        button_8->setObjectName("button_8");
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setFont(font);

        gridLayout->addWidget(button_8, 5, 4, 1, 1);

        button_0 = new QPushButton(centralwidget);
        tileButtonGroup->addButton(button_0);
        button_0->setObjectName("button_0");
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);
        button_0->setFont(font);

        gridLayout->addWidget(button_0, 3, 2, 1, 1);

        button_6 = new QPushButton(centralwidget);
        tileButtonGroup->addButton(button_6);
        button_6->setObjectName("button_6");
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setFont(font);

        gridLayout->addWidget(button_6, 5, 2, 1, 1);

        button_2 = new QPushButton(centralwidget);
        tileButtonGroup->addButton(button_2);
        button_2->setObjectName("button_2");
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setFont(font);

        gridLayout->addWidget(button_2, 3, 4, 1, 1);

        button_7 = new QPushButton(centralwidget);
        tileButtonGroup->addButton(button_7);
        button_7->setObjectName("button_7");
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);
        button_7->setFont(font);

        gridLayout->addWidget(button_7, 5, 3, 1, 1);

        button_5 = new QPushButton(centralwidget);
        tileButtonGroup->addButton(button_5);
        button_5->setObjectName("button_5");
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);
        button_5->setFont(font);

        gridLayout->addWidget(button_5, 4, 4, 1, 1);


        verticalLayout_19->addLayout(gridLayout);

        verticalLayout_19->setStretch(0, 1);
        verticalLayout_19->setStretch(1, 1);
        verticalLayout_19->setStretch(2, 4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">Tic Tac Toe</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">By: Joshua Bernal</span></p></body></html>", nullptr));
        startButton->setText(QCoreApplication::translate("MainWindow", "Start/Reset", nullptr));
        aboutButton->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "O", nullptr));
        button_1->setText(QString());
        button_3->setText(QString());
        button_4->setText(QString());
        button_8->setText(QString());
        button_0->setText(QString());
        button_6->setText(QString());
        button_2->setText(QString());
        button_7->setText(QString());
        button_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
