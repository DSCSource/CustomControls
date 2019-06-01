/********************************************************************************
** Form generated from reading UI file 'CCtrlDisplayDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CCTRLDISPLAYDIALOG_H
#define UI_CCTRLDISPLAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CCtrlDisplayDialog
{
public:
    QGridLayout *gridLayout;
    QWidget *content;
    QSlider *sld_Value;

    void setupUi(QDialog *CCtrlDisplayDialog)
    {
        if (CCtrlDisplayDialog->objectName().isEmpty())
            CCtrlDisplayDialog->setObjectName(QStringLiteral("CCtrlDisplayDialog"));
        CCtrlDisplayDialog->resize(422, 355);
        gridLayout = new QGridLayout(CCtrlDisplayDialog);
        gridLayout->setSpacing(4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(8, 8, 8, 8);
        content = new QWidget(CCtrlDisplayDialog);
        content->setObjectName(QStringLiteral("content"));

        gridLayout->addWidget(content, 0, 0, 1, 1);

        sld_Value = new QSlider(CCtrlDisplayDialog);
        sld_Value->setObjectName(QStringLiteral("sld_Value"));
        sld_Value->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sld_Value, 1, 0, 1, 1);


        retranslateUi(CCtrlDisplayDialog);

        QMetaObject::connectSlotsByName(CCtrlDisplayDialog);
    } // setupUi

    void retranslateUi(QDialog *CCtrlDisplayDialog)
    {
        CCtrlDisplayDialog->setWindowTitle(QApplication::translate("CCtrlDisplayDialog", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CCtrlDisplayDialog: public Ui_CCtrlDisplayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CCTRLDISPLAYDIALOG_H
