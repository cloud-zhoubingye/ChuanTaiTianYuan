/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_image;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_signin;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_signup;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(780, 520);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label_image = new QLabel(centralwidget);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(390, 0, 391, 521));
        label_image->setStyleSheet(QStringLiteral("border-radius:7px;padding:0px 0px;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 151, 31));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label->setFont(font);
        label->setStyleSheet(QLatin1String("color: rgb(41, 155, 255);\n"
"font: 10pt \"Arial\";"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 120, 191, 51));
        label_2->setStyleSheet(QStringLiteral("font: 87 20pt \"Arial Black\";"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 340, 251, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_signin = new QPushButton(layoutWidget);
        btn_signin->setObjectName(QStringLiteral("btn_signin"));
        btn_signin->setMinimumSize(QSize(50, 40));
        btn_signin->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));

        horizontalLayout->addWidget(btn_signin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_signup = new QPushButton(layoutWidget);
        btn_signup->setObjectName(QStringLiteral("btn_signup"));
        btn_signup->setMinimumSize(QSize(50, 40));
        btn_signup->setStyleSheet(QLatin1String("background-color: qlineargradient(spread:pad, x1:0.52, y1:1, x2:0.54, y2:0, \n"
"stop:0.0112994 rgba(64, 145, 252, 255), \n"
"stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 255, 255);\n"
"\n"
"border:0px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 14pt \"Candara\";"));

        horizontalLayout->addWidget(btn_signup);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 200, 291, 111));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_username = new QLineEdit(layoutWidget1);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setMinimumSize(QSize(0, 45));
        lineEdit_username->setStyleSheet(QLatin1String("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));

        verticalLayout->addWidget(lineEdit_username);

        lineEdit_password = new QLineEdit(layoutWidget1);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setMinimumSize(QSize(0, 45));
        lineEdit_password->setStyleSheet(QLatin1String("background-color: rgb(247, 247, 247);\n"
"border:1px groove gray;border-radius:\n"
"7px;padding:2px 4px;\n"
"font: 10pt \"Candara\";"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_password);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_image->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\345\267\235\345\244\252\345\244\251\345\205\203", 0));
        label_2->setText(QApplication::translate("MainWindow", "Login", 0));
        btn_signin->setText(QApplication::translate("MainWindow", "Sign in", 0));
        btn_signup->setText(QApplication::translate("MainWindow", "Sign up", 0));
        lineEdit_username->setPlaceholderText(QApplication::translate("MainWindow", "Places input your Id", 0));
        lineEdit_password->setPlaceholderText(QApplication::translate("MainWindow", "Please input your password", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
