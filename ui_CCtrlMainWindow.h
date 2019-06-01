/********************************************************************************
** Form generated from reading UI file 'CCtrlMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCTRLMAINWINDOW_H
#define UI_CCTRLMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "CCtrlProgress/CCtrlDateEdit.h"

QT_BEGIN_NAMESPACE

class Ui_CCtrlMainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_ProgLoad;
    QPushButton *btn_DashBoard;
    QPushButton *btn_DashBoard1;
    QPushButton *btn_ProgWater;
    CCtrlDateEdit *dateEdit;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CCtrlMainWindow)
    {
        if (CCtrlMainWindow->objectName().isEmpty())
            CCtrlMainWindow->setObjectName(QStringLiteral("CCtrlMainWindow"));
        CCtrlMainWindow->resize(662, 479);
        centralWidget = new QWidget(CCtrlMainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 641, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_ProgLoad = new QPushButton(layoutWidget);
        btn_ProgLoad->setObjectName(QStringLiteral("btn_ProgLoad"));

        horizontalLayout->addWidget(btn_ProgLoad);

        btn_DashBoard = new QPushButton(layoutWidget);
        btn_DashBoard->setObjectName(QStringLiteral("btn_DashBoard"));

        horizontalLayout->addWidget(btn_DashBoard);

        btn_DashBoard1 = new QPushButton(layoutWidget);
        btn_DashBoard1->setObjectName(QStringLiteral("btn_DashBoard1"));

        horizontalLayout->addWidget(btn_DashBoard1);

        btn_ProgWater = new QPushButton(layoutWidget);
        btn_ProgWater->setObjectName(QStringLiteral("btn_ProgWater"));

        horizontalLayout->addWidget(btn_ProgWater);

        dateEdit = new CCtrlDateEdit(centralWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(10, 50, 110, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 95, 95));
        CCtrlMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CCtrlMainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 662, 26));
        CCtrlMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CCtrlMainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CCtrlMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CCtrlMainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CCtrlMainWindow->setStatusBar(statusBar);

        retranslateUi(CCtrlMainWindow);

        QMetaObject::connectSlotsByName(CCtrlMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CCtrlMainWindow)
    {
        CCtrlMainWindow->setWindowTitle(QApplication::translate("CCtrlMainWindow", "CCtrlMainWindow", 0));
        btn_ProgLoad->setText(QApplication::translate("CCtrlMainWindow", "\350\275\254\345\234\210\345\212\240\350\275\275\344\270\255", 0));
        btn_DashBoard->setText(QApplication::translate("CCtrlMainWindow", "\344\273\252\350\241\250\347\233\2301", 0));
        btn_DashBoard1->setText(QApplication::translate("CCtrlMainWindow", "\344\273\252\350\241\250\347\233\2302", 0));
        btn_ProgWater->setText(QApplication::translate("CCtrlMainWindow", "\346\260\264\346\263\242\347\272\271\350\277\233\345\272\246", 0));
        label->setText(QApplication::translate("CCtrlMainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class CCtrlMainWindow: public Ui_CCtrlMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCTRLMAINWINDOW_H
