/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *ChangeSign;
    QPushButton *Multiply;
    QPushButton *MemAdd;
    QPushButton *Button2;
    QPushButton *Subtract;
    QPushButton *Button5;
    QLineEdit *Display;
    QPushButton *Button0;
    QPushButton *Button7;
    QPushButton *Plus;
    QPushButton *Divide;
    QPushButton *Button4;
    QPushButton *Equals;
    QPushButton *Button3;
    QPushButton *MemGet;
    QPushButton *Clear;
    QPushButton *Button6;
    QPushButton *Button8;
    QPushButton *MemClear;
    QPushButton *Button1;
    QPushButton *Button9;
    QPushButton *Leave;
    QPushButton *Contact_us;
    QPushButton *Info;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(492, 341);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ChangeSign = new QPushButton(centralwidget);
        ChangeSign->setObjectName(QString::fromUtf8("ChangeSign"));
        ChangeSign->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(ChangeSign, 5, 2, 1, 1);

        Multiply = new QPushButton(centralwidget);
        Multiply->setObjectName(QString::fromUtf8("Multiply"));
        Multiply->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Multiply, 3, 3, 1, 1);

        MemAdd = new QPushButton(centralwidget);
        MemAdd->setObjectName(QString::fromUtf8("MemAdd"));
        MemAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(MemAdd, 2, 4, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        Button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button2, 4, 1, 1, 1);

        Subtract = new QPushButton(centralwidget);
        Subtract->setObjectName(QString::fromUtf8("Subtract"));
        Subtract->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Subtract, 5, 3, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        Button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button5, 3, 1, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QlineEdit{\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color:rgb(255, 255, 255);\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 1, 0, 1, 5);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        Button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button0, 5, 1, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        Button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button7, 2, 0, 1, 1);

        Plus = new QPushButton(centralwidget);
        Plus->setObjectName(QString::fromUtf8("Plus"));
        Plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Plus, 4, 3, 1, 1);

        Divide = new QPushButton(centralwidget);
        Divide->setObjectName(QString::fromUtf8("Divide"));
        Divide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Divide, 2, 3, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        Button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button4, 3, 0, 1, 1);

        Equals = new QPushButton(centralwidget);
        Equals->setObjectName(QString::fromUtf8("Equals"));
        Equals->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Equals, 5, 4, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        Button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button3, 4, 2, 1, 1);

        MemGet = new QPushButton(centralwidget);
        MemGet->setObjectName(QString::fromUtf8("MemGet"));
        MemGet->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(MemGet, 4, 4, 1, 1);

        Clear = new QPushButton(centralwidget);
        Clear->setObjectName(QString::fromUtf8("Clear"));
        Clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Clear, 5, 0, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        Button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button6, 3, 2, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        Button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button8, 2, 1, 1, 1);

        MemClear = new QPushButton(centralwidget);
        MemClear->setObjectName(QString::fromUtf8("MemClear"));
        MemClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 105, 85);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(MemClear, 3, 4, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        Button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button1, 4, 0, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        Button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Button9, 2, 2, 1, 1);

        Leave = new QPushButton(centralwidget);
        Leave->setObjectName(QString::fromUtf8("Leave"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        Leave->setFont(font1);
        Leave->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(85, 86, 87);\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #rgb(46, 47, 48);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Leave, 0, 0, 1, 1);

        Contact_us = new QPushButton(centralwidget);
        Contact_us->setObjectName(QString::fromUtf8("Contact_us"));
        Contact_us->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(85, 86, 87);\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #rgb(46, 47, 48);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Contact_us, 0, 1, 1, 1);

        Info = new QPushButton(centralwidget);
        Info->setObjectName(QString::fromUtf8("Info"));
        Info->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(85, 86, 87);\n"
"	border: 1px solid;\n"
"	padding: 5px;\n"
"	color: white;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #rgb(46, 47, 48);\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"	color: black;\n"
"}"));

        gridLayout->addWidget(Info, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 492, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        ChangeSign->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        MemAdd->setText(QCoreApplication::translate("MainWindow", "M+", nullptr));
        Button2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Button5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        Display->setText(QCoreApplication::translate("MainWindow", "0.0", nullptr));
        Button0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        Button7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        Button4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Button3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        MemGet->setText(QCoreApplication::translate("MainWindow", "M", nullptr));
        Clear->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        Button6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        Button8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        MemClear->setText(QCoreApplication::translate("MainWindow", "M-", nullptr));
        Button1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Button9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        Leave->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Contact_us->setText(QCoreApplication::translate("MainWindow", "Contact us", nullptr));
        Info->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
