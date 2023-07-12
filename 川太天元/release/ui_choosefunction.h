/********************************************************************************
** Form generated from reading UI file 'choosefunction.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEFUNCTION_H
#define UI_CHOOSEFUNCTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChooseFunction
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_ComposedCalculator;
    QPushButton *pushButton_SimplexMethods;
    QPushButton *pushButton_LinearEquations;
    QPushButton *pushButton_LeastSquare;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ChooseFunction)
    {
        if (ChooseFunction->objectName().isEmpty())
            ChooseFunction->setObjectName(QStringLiteral("ChooseFunction"));
        ChooseFunction->resize(820, 560);
        centralwidget = new QWidget(ChooseFunction);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_ComposedCalculator = new QPushButton(centralwidget);
        pushButton_ComposedCalculator->setObjectName(QStringLiteral("pushButton_ComposedCalculator"));
        pushButton_ComposedCalculator->setGeometry(QRect(10, 0, 391, 251));
        QFont font;
        font.setPointSize(15);
        pushButton_ComposedCalculator->setFont(font);
        pushButton_SimplexMethods = new QPushButton(centralwidget);
        pushButton_SimplexMethods->setObjectName(QStringLiteral("pushButton_SimplexMethods"));
        pushButton_SimplexMethods->setGeometry(QRect(410, 260, 391, 251));
        pushButton_SimplexMethods->setFont(font);
        pushButton_LinearEquations = new QPushButton(centralwidget);
        pushButton_LinearEquations->setObjectName(QStringLiteral("pushButton_LinearEquations"));
        pushButton_LinearEquations->setGeometry(QRect(10, 260, 391, 251));
        pushButton_LinearEquations->setFont(font);
        pushButton_LeastSquare = new QPushButton(centralwidget);
        pushButton_LeastSquare->setObjectName(QStringLiteral("pushButton_LeastSquare"));
        pushButton_LeastSquare->setGeometry(QRect(410, 0, 391, 251));
        pushButton_LeastSquare->setFont(font);
        ChooseFunction->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ChooseFunction);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 820, 18));
        ChooseFunction->setMenuBar(menubar);
        statusbar = new QStatusBar(ChooseFunction);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ChooseFunction->setStatusBar(statusbar);

        retranslateUi(ChooseFunction);

        QMetaObject::connectSlotsByName(ChooseFunction);
    } // setupUi

    void retranslateUi(QMainWindow *ChooseFunction)
    {
        ChooseFunction->setWindowTitle(QApplication::translate("ChooseFunction", "MainWindow", 0));
        pushButton_ComposedCalculator->setText(QApplication::translate("ChooseFunction", "ComposedCalculator", 0));
        pushButton_SimplexMethods->setText(QApplication::translate("ChooseFunction", "SimplexMethods", 0));
        pushButton_LinearEquations->setText(QApplication::translate("ChooseFunction", "LinearEquations", 0));
        pushButton_LeastSquare->setText(QApplication::translate("ChooseFunction", "LeastSquare", 0));
    } // retranslateUi

};

namespace Ui {
    class ChooseFunction: public Ui_ChooseFunction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEFUNCTION_H
