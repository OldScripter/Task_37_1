/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *value_1;
    QLineEdit *value_2;
    QLCDNumber *lcd_result;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btn_add;
    QPushButton *btn_subtract;
    QPushButton *btn_multiply;
    QPushButton *btn_divide;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(832, 545);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        value_1 = new QLineEdit(centralwidget);
        value_1->setObjectName(QString::fromUtf8("value_1"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(value_1->sizePolicy().hasHeightForWidth());
        value_1->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(16);
        value_1->setFont(font);

        horizontalLayout->addWidget(value_1);

        value_2 = new QLineEdit(centralwidget);
        value_2->setObjectName(QString::fromUtf8("value_2"));
        sizePolicy.setHeightForWidth(value_2->sizePolicy().hasHeightForWidth());
        value_2->setSizePolicy(sizePolicy);
        value_2->setFont(font);
        value_2->setDragEnabled(false);

        horizontalLayout->addWidget(value_2);


        verticalLayout->addLayout(horizontalLayout);

        lcd_result = new QLCDNumber(centralwidget);
        lcd_result->setObjectName(QString::fromUtf8("lcd_result"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lcd_result->sizePolicy().hasHeightForWidth());
        lcd_result->setSizePolicy(sizePolicy1);
        lcd_result->setDigitCount(15);

        verticalLayout->addWidget(lcd_result);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        btn_add = new QPushButton(centralwidget);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));
        sizePolicy1.setHeightForWidth(btn_add->sizePolicy().hasHeightForWidth());
        btn_add->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(36);
        btn_add->setFont(font1);

        horizontalLayout_2->addWidget(btn_add);

        btn_subtract = new QPushButton(centralwidget);
        btn_subtract->setObjectName(QString::fromUtf8("btn_subtract"));
        sizePolicy1.setHeightForWidth(btn_subtract->sizePolicy().hasHeightForWidth());
        btn_subtract->setSizePolicy(sizePolicy1);
        btn_subtract->setFont(font1);

        horizontalLayout_2->addWidget(btn_subtract);

        btn_multiply = new QPushButton(centralwidget);
        btn_multiply->setObjectName(QString::fromUtf8("btn_multiply"));
        sizePolicy1.setHeightForWidth(btn_multiply->sizePolicy().hasHeightForWidth());
        btn_multiply->setSizePolicy(sizePolicy1);
        btn_multiply->setFont(font1);

        horizontalLayout_2->addWidget(btn_multiply);

        btn_divide = new QPushButton(centralwidget);
        btn_divide->setObjectName(QString::fromUtf8("btn_divide"));
        sizePolicy1.setHeightForWidth(btn_divide->sizePolicy().hasHeightForWidth());
        btn_divide->setSizePolicy(sizePolicy1);
        btn_divide->setFont(font1);

        horizontalLayout_2->addWidget(btn_divide);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 832, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btn_add, SIGNAL(clicked()), MainWindow, SLOT(add()));
        QObject::connect(btn_subtract, SIGNAL(clicked()), MainWindow, SLOT(subtract()));
        QObject::connect(btn_multiply, SIGNAL(clicked()), MainWindow, SLOT(multiply()));
        QObject::connect(btn_divide, SIGNAL(clicked()), MainWindow, SLOT(divide()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        value_1->setPlaceholderText(QCoreApplication::translate("MainWindow", "Please enter the value...", nullptr));
        value_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "Please enter the value...", "Value 2"));
        btn_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btn_subtract->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btn_multiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        btn_divide->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
