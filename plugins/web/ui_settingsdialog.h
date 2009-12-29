/********************************************************************************
** Form generated from reading ui file 'settingsdialog.ui'
**
** Created: Tue Dec 29 16:45:27 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *dictsList;
    QHBoxLayout *hboxLayout;
    QToolButton *editDictButton;
    QToolButton *addDictButton;
    QToolButton *removeDictButton;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(460, 260);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        dictsList = new QListWidget(SettingsDialog);
        dictsList->setObjectName(QString::fromUtf8("dictsList"));

        verticalLayout->addWidget(dictsList);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        editDictButton = new QToolButton(SettingsDialog);
        editDictButton->setObjectName(QString::fromUtf8("editDictButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(editDictButton->sizePolicy().hasHeightForWidth());
        editDictButton->setSizePolicy(sizePolicy);
        editDictButton->setMinimumSize(QSize(112, 70));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        editDictButton->setIcon(icon);
        editDictButton->setIconSize(QSize(112, 70));

        hboxLayout->addWidget(editDictButton);

        addDictButton = new QToolButton(SettingsDialog);
        addDictButton->setObjectName(QString::fromUtf8("addDictButton"));
        sizePolicy.setHeightForWidth(addDictButton->sizePolicy().hasHeightForWidth());
        addDictButton->setSizePolicy(sizePolicy);
        addDictButton->setMinimumSize(QSize(112, 70));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addDictButton->setIcon(icon1);
        addDictButton->setIconSize(QSize(112, 70));

        hboxLayout->addWidget(addDictButton);

        removeDictButton = new QToolButton(SettingsDialog);
        removeDictButton->setObjectName(QString::fromUtf8("removeDictButton"));
        sizePolicy.setHeightForWidth(removeDictButton->sizePolicy().hasHeightForWidth());
        removeDictButton->setSizePolicy(sizePolicy);
        removeDictButton->setMinimumSize(QSize(112, 70));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeDictButton->setIcon(icon2);
        removeDictButton->setIconSize(QSize(112, 70));

        hboxLayout->addWidget(removeDictButton);

        spacerItem = new QSpacerItem(342, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "Web plugin settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        editDictButton->setToolTip(QApplication::translate("SettingsDialog", "Edit dictionary", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        editDictButton->setText(QApplication::translate("SettingsDialog", "Edit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addDictButton->setToolTip(QApplication::translate("SettingsDialog", "Add dictionary", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addDictButton->setText(QApplication::translate("SettingsDialog", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        removeDictButton->setToolTip(QApplication::translate("SettingsDialog", "Remove dictionary", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        removeDictButton->setText(QApplication::translate("SettingsDialog", "Remove", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SettingsDialog);
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
