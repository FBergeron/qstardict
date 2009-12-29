/********************************************************************************
** Form generated from reading ui file 'settingsdialog.ui'
**
** Created: Tue Dec 29 16:45:15 2009
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
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QCheckBox *expandAbbreviationsBox;
    QCheckBox *reformatListsBox;
    QLabel *reformatTranslationsWarningLabel;
    QListWidget *dictDirsList;
    QHBoxLayout *hboxLayout;
    QToolButton *addDictDirButton;
    QToolButton *removeDictDirButton;
    QToolButton *moveUpDictDirButton;
    QToolButton *moveDownDictDirButton;
    QSpacerItem *spacerItem;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->setEnabled(true);
        SettingsDialog->resize(560, 320);
        verticalLayout = new QVBoxLayout(SettingsDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout->setMargin(0);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        expandAbbreviationsBox = new QCheckBox(SettingsDialog);
        expandAbbreviationsBox->setObjectName(QString::fromUtf8("expandAbbreviationsBox"));

        gridLayout->addWidget(expandAbbreviationsBox, 0, 0, 1, 1);

        reformatListsBox = new QCheckBox(SettingsDialog);
        reformatListsBox->setObjectName(QString::fromUtf8("reformatListsBox"));

        gridLayout->addWidget(reformatListsBox, 0, 2, 1, 1);

        reformatTranslationsWarningLabel = new QLabel(SettingsDialog);
        reformatTranslationsWarningLabel->setObjectName(QString::fromUtf8("reformatTranslationsWarningLabel"));
        reformatTranslationsWarningLabel->setEnabled(false);
        QFont font;
        font.setPointSize(9);
        reformatTranslationsWarningLabel->setFont(font);
        reformatTranslationsWarningLabel->setVisible(false);

        gridLayout->addWidget(reformatTranslationsWarningLabel, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        dictDirsList = new QListWidget(SettingsDialog);
        dictDirsList->setObjectName(QString::fromUtf8("dictDirsList"));

        verticalLayout->addWidget(dictDirsList);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        addDictDirButton = new QToolButton(SettingsDialog);
        addDictDirButton->setObjectName(QString::fromUtf8("addDictDirButton"));
        addDictDirButton->setMinimumSize(QSize(112, 70));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/list-add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addDictDirButton->setIcon(icon);
        addDictDirButton->setIconSize(QSize(112, 70));

        hboxLayout->addWidget(addDictDirButton);

        removeDictDirButton = new QToolButton(SettingsDialog);
        removeDictDirButton->setObjectName(QString::fromUtf8("removeDictDirButton"));
        removeDictDirButton->setMinimumSize(QSize(112, 70));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/list-remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeDictDirButton->setIcon(icon1);
        removeDictDirButton->setIconSize(QSize(112, 70));

        hboxLayout->addWidget(removeDictDirButton);

        moveUpDictDirButton = new QToolButton(SettingsDialog);
        moveUpDictDirButton->setObjectName(QString::fromUtf8("moveUpDictDirButton"));
        moveUpDictDirButton->setMinimumSize(QSize(112, 70));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/arrow-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveUpDictDirButton->setIcon(icon2);
        moveUpDictDirButton->setIconSize(QSize(112, 70));

        hboxLayout->addWidget(moveUpDictDirButton);

        moveDownDictDirButton = new QToolButton(SettingsDialog);
        moveDownDictDirButton->setObjectName(QString::fromUtf8("moveDownDictDirButton"));
        moveDownDictDirButton->setMinimumSize(QSize(112, 70));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/arrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        moveDownDictDirButton->setIcon(icon3);
        moveDownDictDirButton->setIconSize(QSize(112, 70));

        hboxLayout->addWidget(moveDownDictDirButton);

        spacerItem = new QSpacerItem(342, 26, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        verticalLayout->addLayout(hboxLayout);


        retranslateUi(SettingsDialog);

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QApplication::translate("SettingsDialog", "StarDict plugin settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        expandAbbreviationsBox->setToolTip(QApplication::translate("SettingsDialog", "Expand abbreviations if dictionary contains it (may be slow)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        expandAbbreviationsBox->setText(QApplication::translate("SettingsDialog", "Expand abbreviations", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        reformatListsBox->setToolTip(QApplication::translate("SettingsDialog", "If enabled all lists in translation wil be formated using HTML <li> tag (may be slow)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        reformatListsBox->setText(QApplication::translate("SettingsDialog", "Reformat lists", 0, QApplication::UnicodeUTF8));
        reformatTranslationsWarningLabel->setText(QApplication::translate("SettingsDialog", "<b><font color=\"red\">Warning!</font></b> Reformatted translations may display incorrectly.", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addDictDirButton->setToolTip(QApplication::translate("SettingsDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Add directory</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addDictDirButton->setText(QApplication::translate("SettingsDialog", "Add", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        removeDictDirButton->setToolTip(QApplication::translate("SettingsDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Remove directory</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        removeDictDirButton->setText(QApplication::translate("SettingsDialog", "Remove", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        moveUpDictDirButton->setToolTip(QApplication::translate("SettingsDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Move up</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        moveUpDictDirButton->setText(QApplication::translate("SettingsDialog", "Up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        moveDownDictDirButton->setToolTip(QApplication::translate("SettingsDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal; text-decoration:none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Move down</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        moveDownDictDirButton->setText(QApplication::translate("SettingsDialog", "Down", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(SettingsDialog);
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
