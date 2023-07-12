/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label_image;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *lineEdit_username;
    QLabel *label_4;
    QLineEdit *lineEdit_passwd;
    QLabel *label_5;
    QLineEdit *lineEdit_surepasswd;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *btn_return;

    void setupUi(QWidget *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName(QStringLiteral("Signup"));
        Signup->resize(745, 486);
        Signup->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_image = new QLabel(Signup);
        label_image->setObjectName(QStringLiteral("label_image"));
        label_image->setGeometry(QRect(50, 0, 261, 481));
        label = new QLabel(Signup);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 40, 161, 31));
        label->setStyleSheet(QStringLiteral("font: 87 20pt \"Arial Black\";"));
        label_2 = new QLabel(Signup);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(370, 70, 301, 51));
        label_2->setStyleSheet(QStringLiteral("font: 87 20pt \"Arial Black\";"));
        layoutWidget = new QWidget(Signup);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(370, 140, 291, 309));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("font: 10pt \"Arial\";"));

        verticalLayout->addWidget(label_3);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(lineEdit_username);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("font: 10pt \"Arial\";"));

        verticalLayout->addWidget(label_4);

        lineEdit_passwd = new QLineEdit(layoutWidget);
        lineEdit_passwd->setObjectName(QStringLiteral("lineEdit_passwd"));
        lineEdit_passwd->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(lineEdit_passwd);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("font: 10pt \"Arial\";"));

        verticalLayout->addWidget(label_5);

        lineEdit_surepasswd = new QLineEdit(layoutWidget);
        lineEdit_surepasswd->setObjectName(QStringLiteral("lineEdit_surepasswd"));
        lineEdit_surepasswd->setMinimumSize(QSize(0, 40));

        verticalLayout->addWidget(lineEdit_surepasswd);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 40));
        pushButton_2->setStyleSheet(QLatin1String("background-color: rgb(29, 123, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";"));

        verticalLayout_2->addWidget(pushButton_2);

        btn_return = new QPushButton(layoutWidget);
        btn_return->setObjectName(QStringLiteral("btn_return"));
        btn_return->setMinimumSize(QSize(0, 40));
        btn_return->setStyleSheet(QLatin1String("background-color: rgb(29, 123, 255);\n"
"color: rgb(255, 255, 255);\n"
"font: 25 9pt \"Bahnschrift Light\";"));

        verticalLayout_2->addWidget(btn_return);


        verticalLayout->addLayout(verticalLayout_2);


        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QWidget *Signup)
    {
        Signup->setWindowTitle(QApplication::translate("Signup", "Form", 0));
        label_image->setText(QApplication::translate("Signup", "TextLabel", 0));
        label->setText(QApplication::translate("Signup", "Hello", 0));
        label_2->setText(QApplication::translate("Signup", "Welcome!", 0));
        label_3->setText(QApplication::translate("Signup", "Username", 0));
        label_4->setText(QApplication::translate("Signup", "Password", 0));
        label_5->setText(QApplication::translate("Signup", "Ensure your password\357\274\232", 0));
        pushButton_2->setText(QApplication::translate("Signup", "OK", 0));
        btn_return->setText(QApplication::translate("Signup", "Return login", 0));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
