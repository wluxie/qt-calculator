/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

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

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *button9;
    QPushButton *buttonDiv;
    QPushButton *button4;
    QPushButton *button1;
    QPushButton *button8;
    QPushButton *button7;
    QPushButton *buttonAC;
    QPushButton *button5;
    QPushButton *button3;
    QPushButton *button6;
    QPushButton *button2;
    QPushButton *button0;
    QPushButton *buttonEqual;
    QPushButton *buttonMul;
    QPushButton *buttonAdd;
    QPushButton *buttonSub;
    QLineEdit *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(567, 417);
        calculator->setStyleSheet(QString::fromUtf8("QWidget {\n"
"  background-color: black;\n"
"}"));
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        button9 = new QPushButton(centralwidget);
        button9->setObjectName("button9");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button9->sizePolicy().hasHeightForWidth());
        button9->setSizePolicy(sizePolicy);
        button9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button9, 1, 2, 1, 1);

        buttonDiv = new QPushButton(centralwidget);
        buttonDiv->setObjectName("buttonDiv");
        sizePolicy.setHeightForWidth(buttonDiv->sizePolicy().hasHeightForWidth());
        buttonDiv->setSizePolicy(sizePolicy);
        buttonDiv->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(buttonDiv, 1, 3, 1, 1);

        button4 = new QPushButton(centralwidget);
        button4->setObjectName("button4");
        sizePolicy.setHeightForWidth(button4->sizePolicy().hasHeightForWidth());
        button4->setSizePolicy(sizePolicy);
        button4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button4, 2, 0, 1, 1);

        button1 = new QPushButton(centralwidget);
        button1->setObjectName("button1");
        sizePolicy.setHeightForWidth(button1->sizePolicy().hasHeightForWidth());
        button1->setSizePolicy(sizePolicy);
        button1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button1, 3, 0, 1, 1);

        button8 = new QPushButton(centralwidget);
        button8->setObjectName("button8");
        sizePolicy.setHeightForWidth(button8->sizePolicy().hasHeightForWidth());
        button8->setSizePolicy(sizePolicy);
        button8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button8, 1, 1, 1, 1);

        button7 = new QPushButton(centralwidget);
        button7->setObjectName("button7");
        sizePolicy.setHeightForWidth(button7->sizePolicy().hasHeightForWidth());
        button7->setSizePolicy(sizePolicy);
        button7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button7, 1, 0, 1, 1);

        buttonAC = new QPushButton(centralwidget);
        buttonAC->setObjectName("buttonAC");
        sizePolicy.setHeightForWidth(buttonAC->sizePolicy().hasHeightForWidth());
        buttonAC->setSizePolicy(sizePolicy);
        buttonAC->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(buttonAC, 4, 0, 1, 1);

        button5 = new QPushButton(centralwidget);
        button5->setObjectName("button5");
        sizePolicy.setHeightForWidth(button5->sizePolicy().hasHeightForWidth());
        button5->setSizePolicy(sizePolicy);
        button5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button5, 2, 1, 1, 1);

        button3 = new QPushButton(centralwidget);
        button3->setObjectName("button3");
        sizePolicy.setHeightForWidth(button3->sizePolicy().hasHeightForWidth());
        button3->setSizePolicy(sizePolicy);
        button3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button3, 3, 2, 1, 1);

        button6 = new QPushButton(centralwidget);
        button6->setObjectName("button6");
        sizePolicy.setHeightForWidth(button6->sizePolicy().hasHeightForWidth());
        button6->setSizePolicy(sizePolicy);
        button6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button6, 2, 2, 1, 1);

        button2 = new QPushButton(centralwidget);
        button2->setObjectName("button2");
        sizePolicy.setHeightForWidth(button2->sizePolicy().hasHeightForWidth());
        button2->setSizePolicy(sizePolicy);
        button2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button2, 3, 1, 1, 1);

        button0 = new QPushButton(centralwidget);
        button0->setObjectName("button0");
        sizePolicy.setHeightForWidth(button0->sizePolicy().hasHeightForWidth());
        button0->setSizePolicy(sizePolicy);
        button0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(button0, 4, 1, 1, 1);

        buttonEqual = new QPushButton(centralwidget);
        buttonEqual->setObjectName("buttonEqual");
        sizePolicy.setHeightForWidth(buttonEqual->sizePolicy().hasHeightForWidth());
        buttonEqual->setSizePolicy(sizePolicy);
        buttonEqual->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(buttonEqual, 4, 2, 1, 1);

        buttonMul = new QPushButton(centralwidget);
        buttonMul->setObjectName("buttonMul");
        sizePolicy.setHeightForWidth(buttonMul->sizePolicy().hasHeightForWidth());
        buttonMul->setSizePolicy(sizePolicy);
        buttonMul->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(buttonMul, 2, 3, 1, 1);

        buttonAdd = new QPushButton(centralwidget);
        buttonAdd->setObjectName("buttonAdd");
        sizePolicy.setHeightForWidth(buttonAdd->sizePolicy().hasHeightForWidth());
        buttonAdd->setSizePolicy(sizePolicy);
        buttonAdd->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(buttonAdd, 3, 3, 1, 1);

        buttonSub = new QPushButton(centralwidget);
        buttonSub->setObjectName("buttonSub");
        sizePolicy.setHeightForWidth(buttonSub->sizePolicy().hasHeightForWidth());
        buttonSub->setSizePolicy(sizePolicy);
        buttonSub->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: #242526;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: #3A3B3C;\n"
"	color: white;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(buttonSub, 4, 3, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName("Display");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial Black")});
        font.setPointSize(36);
        font.setBold(true);
        font.setItalic(false);
        font.setKerning(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background-color: #242526;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 4);

        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 567, 25));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName("statusbar");
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        button9->setText(QCoreApplication::translate("calculator", "9", nullptr));
        buttonDiv->setText(QCoreApplication::translate("calculator", "/", nullptr));
        button4->setText(QCoreApplication::translate("calculator", "4", nullptr));
        button1->setText(QCoreApplication::translate("calculator", "1", nullptr));
        button8->setText(QCoreApplication::translate("calculator", "8", nullptr));
        button7->setText(QCoreApplication::translate("calculator", "7", nullptr));
        buttonAC->setText(QCoreApplication::translate("calculator", "AC", nullptr));
        button5->setText(QCoreApplication::translate("calculator", "5", nullptr));
        button3->setText(QCoreApplication::translate("calculator", "3", nullptr));
        button6->setText(QCoreApplication::translate("calculator", "6", nullptr));
        button2->setText(QCoreApplication::translate("calculator", "2", nullptr));
        button0->setText(QCoreApplication::translate("calculator", "0", nullptr));
        buttonEqual->setText(QCoreApplication::translate("calculator", "=", nullptr));
        buttonMul->setText(QCoreApplication::translate("calculator", "*", nullptr));
        buttonAdd->setText(QCoreApplication::translate("calculator", "+", nullptr));
        buttonSub->setText(QCoreApplication::translate("calculator", "-", nullptr));
        Display->setText(QCoreApplication::translate("calculator", "0.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
