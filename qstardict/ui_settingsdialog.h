/********************************************************************************
** Form generated from reading ui file 'settingsdialog.ui'
**
** Created: Tue Dec 29 16:44:21 2009
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
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "cssedit.h"

namespace QStarDict {

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tabGlobalSettings;
    QVBoxLayout *vboxLayout;
    QCheckBox *instantSearchBox;
    QHBoxLayout *hboxLayout;
    QLabel *label_7;
    QLineEdit *speechCmdEdit;
    QSpacerItem *spacerItem;
    QWidget *tabDictionaries;
    QVBoxLayout *verticalLayout_2;
    QTableView *dictsTableView;
    QHBoxLayout *hboxLayout1;
    QToolButton *dictsMoveUpButton;
    QToolButton *dictsMoveDownButton;
    QToolButton *dictsShowInfoButton;
    QSpacerItem *spacerItem1;
    QWidget *tabPlugins;
    QVBoxLayout *verticalLayout;
    QTableView *pluginsTableView;
    QHBoxLayout *_3;
    QToolButton *pluginsShowInfoButton;
    QToolButton *pluginsConfigureButton;
    QSpacerItem *spacerItem2;
    QWidget *tabPopupWindowApperance;
    QGridLayout *gridLayout1;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout2;
    QHBoxLayout *hboxLayout2;
    QLabel *label_3;
    QSpinBox *popupOpacitySpin;
    QHBoxLayout *hboxLayout3;
    QLabel *label_5;
    QSpinBox *popupDefaultWidthSpin;
    QHBoxLayout *hboxLayout4;
    QLabel *label_6;
    QSpinBox *popupDefaultHeightSpin;
    QSpacerItem *spacerItem3;
    QWidget *tabPopupWindowBehavior;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *useScanBox;
    QCheckBox *showIfNotFoundBox;
    QHBoxLayout *_7;
    QCheckBox *useScanModifierBox;
    QComboBox *modifierKeyBox;
    QHBoxLayout *_6;
    QLabel *label_4;
    QDoubleSpinBox *timeoutBeforeHideSpin;
    QVBoxLayout *_5;
    QCheckBox *pronounceWordBox;
    QSpacerItem *spacer;
    QWidget *tab;
    QGridLayout *gridLayout3;
    QStarDict::CSSEdit *apperanceCSSEdit;

    void setupUi(QDialog *QStarDict__SettingsDialog)
    {
        if (QStarDict__SettingsDialog->objectName().isEmpty())
            QStarDict__SettingsDialog->setObjectName(QString::fromUtf8("QStarDict__SettingsDialog"));
        QStarDict__SettingsDialog->resize(464, 380);
        gridLayout = new QGridLayout(QStarDict__SettingsDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setMargin(9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(QStarDict__SettingsDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setIconSize(QSize(32, 32));
        tabGlobalSettings = new QWidget();
        tabGlobalSettings->setObjectName(QString::fromUtf8("tabGlobalSettings"));
        vboxLayout = new QVBoxLayout(tabGlobalSettings);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        instantSearchBox = new QCheckBox(tabGlobalSettings);
        instantSearchBox->setObjectName(QString::fromUtf8("instantSearchBox"));

        vboxLayout->addWidget(instantSearchBox);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setMargin(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        label_7 = new QLabel(tabGlobalSettings);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        hboxLayout->addWidget(label_7);

        speechCmdEdit = new QLineEdit(tabGlobalSettings);
        speechCmdEdit->setObjectName(QString::fromUtf8("speechCmdEdit"));

        hboxLayout->addWidget(speechCmdEdit);


        vboxLayout->addLayout(hboxLayout);

        spacerItem = new QSpacerItem(369, 171, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        tabWidget->addTab(tabGlobalSettings, QString());
        tabDictionaries = new QWidget();
        tabDictionaries->setObjectName(QString::fromUtf8("tabDictionaries"));
        verticalLayout_2 = new QVBoxLayout(tabDictionaries);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        dictsTableView = new QTableView(tabDictionaries);
        dictsTableView->setObjectName(QString::fromUtf8("dictsTableView"));
        dictsTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        dictsTableView->setDragEnabled(false);
        dictsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        dictsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        dictsTableView->setShowGrid(false);
        dictsTableView->horizontalHeader()->setDefaultSectionSize(112);
        dictsTableView->horizontalHeader()->setMinimumSectionSize(60);
        dictsTableView->verticalHeader()->setCascadingSectionResizes(true);
        dictsTableView->verticalHeader()->setDefaultSectionSize(32);
        dictsTableView->verticalHeader()->setMinimumSectionSize(24);

        verticalLayout_2->addWidget(dictsTableView);

        hboxLayout1 = new QHBoxLayout();
        hboxLayout1->setObjectName(QString::fromUtf8("hboxLayout1"));
        dictsMoveUpButton = new QToolButton(tabDictionaries);
        dictsMoveUpButton->setObjectName(QString::fromUtf8("dictsMoveUpButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(dictsMoveUpButton->sizePolicy().hasHeightForWidth());
        dictsMoveUpButton->setSizePolicy(sizePolicy);
        dictsMoveUpButton->setMinimumSize(QSize(112, 70));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/arrow-up.png"), QSize(), QIcon::Normal, QIcon::Off);
        dictsMoveUpButton->setIcon(icon);
        dictsMoveUpButton->setIconSize(QSize(112, 70));

        hboxLayout1->addWidget(dictsMoveUpButton);

        dictsMoveDownButton = new QToolButton(tabDictionaries);
        dictsMoveDownButton->setObjectName(QString::fromUtf8("dictsMoveDownButton"));
        sizePolicy.setHeightForWidth(dictsMoveDownButton->sizePolicy().hasHeightForWidth());
        dictsMoveDownButton->setSizePolicy(sizePolicy);
        dictsMoveDownButton->setMinimumSize(QSize(112, 70));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/arrow-down.png"), QSize(), QIcon::Normal, QIcon::Off);
        dictsMoveDownButton->setIcon(icon1);
        dictsMoveDownButton->setIconSize(QSize(112, 70));

        hboxLayout1->addWidget(dictsMoveDownButton);

        dictsShowInfoButton = new QToolButton(tabDictionaries);
        dictsShowInfoButton->setObjectName(QString::fromUtf8("dictsShowInfoButton"));
        sizePolicy.setHeightForWidth(dictsShowInfoButton->sizePolicy().hasHeightForWidth());
        dictsShowInfoButton->setSizePolicy(sizePolicy);
        dictsShowInfoButton->setMinimumSize(QSize(112, 70));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/dialog-information.png"), QSize(), QIcon::Normal, QIcon::Off);
        dictsShowInfoButton->setIcon(icon2);
        dictsShowInfoButton->setIconSize(QSize(112, 70));

        hboxLayout1->addWidget(dictsShowInfoButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout1->addItem(spacerItem1);


        verticalLayout_2->addLayout(hboxLayout1);

        tabWidget->addTab(tabDictionaries, QString());
        tabPlugins = new QWidget();
        tabPlugins->setObjectName(QString::fromUtf8("tabPlugins"));
        verticalLayout = new QVBoxLayout(tabPlugins);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pluginsTableView = new QTableView(tabPlugins);
        pluginsTableView->setObjectName(QString::fromUtf8("pluginsTableView"));
        pluginsTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        pluginsTableView->setSelectionMode(QAbstractItemView::SingleSelection);
        pluginsTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        pluginsTableView->setShowGrid(false);
        pluginsTableView->horizontalHeader()->setDefaultSectionSize(112);
        pluginsTableView->horizontalHeader()->setMinimumSectionSize(60);
        pluginsTableView->verticalHeader()->setCascadingSectionResizes(true);
        pluginsTableView->verticalHeader()->setDefaultSectionSize(32);
        pluginsTableView->verticalHeader()->setMinimumSectionSize(24);

        verticalLayout->addWidget(pluginsTableView);

        _3 = new QHBoxLayout();
        _3->setObjectName(QString::fromUtf8("_3"));
        pluginsShowInfoButton = new QToolButton(tabPlugins);
        pluginsShowInfoButton->setObjectName(QString::fromUtf8("pluginsShowInfoButton"));
        sizePolicy.setHeightForWidth(pluginsShowInfoButton->sizePolicy().hasHeightForWidth());
        pluginsShowInfoButton->setSizePolicy(sizePolicy);
        pluginsShowInfoButton->setMinimumSize(QSize(112, 70));
        pluginsShowInfoButton->setIcon(icon2);
        pluginsShowInfoButton->setIconSize(QSize(112, 70));

        _3->addWidget(pluginsShowInfoButton);

        pluginsConfigureButton = new QToolButton(tabPlugins);
        pluginsConfigureButton->setObjectName(QString::fromUtf8("pluginsConfigureButton"));
        sizePolicy.setHeightForWidth(pluginsConfigureButton->sizePolicy().hasHeightForWidth());
        pluginsConfigureButton->setSizePolicy(sizePolicy);
        pluginsConfigureButton->setMinimumSize(QSize(112, 70));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        pluginsConfigureButton->setIcon(icon3);
        pluginsConfigureButton->setIconSize(QSize(112, 70));

        _3->addWidget(pluginsConfigureButton);

        spacerItem2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        _3->addItem(spacerItem2);


        verticalLayout->addLayout(_3);

        tabWidget->addTab(tabPlugins, QString());
        tabPopupWindowApperance = new QWidget();
        tabPopupWindowApperance->setObjectName(QString::fromUtf8("tabPopupWindowApperance"));
        gridLayout1 = new QGridLayout(tabPopupWindowApperance);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setMargin(9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        groupBox_2 = new QGroupBox(tabPopupWindowApperance);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout2 = new QGridLayout(groupBox_2);
#ifndef Q_OS_MAC
        gridLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout2->setMargin(9);
#endif
        gridLayout2->setObjectName(QString::fromUtf8("gridLayout2"));
        hboxLayout2 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout2->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout2->setMargin(0);
#endif
        hboxLayout2->setObjectName(QString::fromUtf8("hboxLayout2"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        hboxLayout2->addWidget(label_3);

        popupOpacitySpin = new QSpinBox(groupBox_2);
        popupOpacitySpin->setObjectName(QString::fromUtf8("popupOpacitySpin"));
        popupOpacitySpin->setMinimum(1);
        popupOpacitySpin->setMaximum(100);
        popupOpacitySpin->setValue(100);

        hboxLayout2->addWidget(popupOpacitySpin);


        gridLayout2->addLayout(hboxLayout2, 2, 0, 1, 1);

        hboxLayout3 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout3->setSpacing(6);
#endif
        hboxLayout3->setMargin(0);
        hboxLayout3->setObjectName(QString::fromUtf8("hboxLayout3"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout3->addWidget(label_5);

        popupDefaultWidthSpin = new QSpinBox(groupBox_2);
        popupDefaultWidthSpin->setObjectName(QString::fromUtf8("popupDefaultWidthSpin"));
        popupDefaultWidthSpin->setMinimum(96);
        popupDefaultWidthSpin->setMaximum(9999);
        popupDefaultWidthSpin->setValue(320);

        hboxLayout3->addWidget(popupDefaultWidthSpin);


        gridLayout2->addLayout(hboxLayout3, 0, 0, 1, 1);

        hboxLayout4 = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout4->setSpacing(6);
#endif
        hboxLayout4->setMargin(0);
        hboxLayout4->setObjectName(QString::fromUtf8("hboxLayout4"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout4->addWidget(label_6);

        popupDefaultHeightSpin = new QSpinBox(groupBox_2);
        popupDefaultHeightSpin->setObjectName(QString::fromUtf8("popupDefaultHeightSpin"));
        popupDefaultHeightSpin->setMinimum(96);
        popupDefaultHeightSpin->setMaximum(9999);
        popupDefaultHeightSpin->setValue(240);

        hboxLayout4->addWidget(popupDefaultHeightSpin);


        gridLayout2->addLayout(hboxLayout4, 1, 0, 1, 1);


        gridLayout1->addWidget(groupBox_2, 0, 0, 1, 1);

        spacerItem3 = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(spacerItem3, 1, 0, 1, 1);

        tabWidget->addTab(tabPopupWindowApperance, QString());
        tabPopupWindowBehavior = new QWidget();
        tabPopupWindowBehavior->setObjectName(QString::fromUtf8("tabPopupWindowBehavior"));
        verticalLayout_3 = new QVBoxLayout(tabPopupWindowBehavior);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        useScanBox = new QCheckBox(tabPopupWindowBehavior);
        useScanBox->setObjectName(QString::fromUtf8("useScanBox"));
        useScanBox->setChecked(true);

        verticalLayout_3->addWidget(useScanBox);

        showIfNotFoundBox = new QCheckBox(tabPopupWindowBehavior);
        showIfNotFoundBox->setObjectName(QString::fromUtf8("showIfNotFoundBox"));

        verticalLayout_3->addWidget(showIfNotFoundBox);

        _7 = new QHBoxLayout();
#ifndef Q_OS_MAC
        _7->setSpacing(6);
#endif
        _7->setMargin(0);
        _7->setObjectName(QString::fromUtf8("_7"));
        useScanModifierBox = new QCheckBox(tabPopupWindowBehavior);
        useScanModifierBox->setObjectName(QString::fromUtf8("useScanModifierBox"));
        useScanModifierBox->setEnabled(true);

        _7->addWidget(useScanModifierBox);

        modifierKeyBox = new QComboBox(tabPopupWindowBehavior);
        modifierKeyBox->setObjectName(QString::fromUtf8("modifierKeyBox"));
        modifierKeyBox->setEnabled(false);

        _7->addWidget(modifierKeyBox);


        verticalLayout_3->addLayout(_7);

        _6 = new QHBoxLayout();
#ifndef Q_OS_MAC
        _6->setSpacing(6);
#endif
        _6->setMargin(0);
        _6->setObjectName(QString::fromUtf8("_6"));
        label_4 = new QLabel(tabPopupWindowBehavior);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        _6->addWidget(label_4);

        timeoutBeforeHideSpin = new QDoubleSpinBox(tabPopupWindowBehavior);
        timeoutBeforeHideSpin->setObjectName(QString::fromUtf8("timeoutBeforeHideSpin"));
        timeoutBeforeHideSpin->setDecimals(1);
        timeoutBeforeHideSpin->setMinimum(0);
        timeoutBeforeHideSpin->setMaximum(10);
        timeoutBeforeHideSpin->setSingleStep(0.1);
        timeoutBeforeHideSpin->setValue(0.5);

        _6->addWidget(timeoutBeforeHideSpin);


        verticalLayout_3->addLayout(_6);

        _5 = new QVBoxLayout();
#ifndef Q_OS_MAC
        _5->setSpacing(6);
#endif
        _5->setMargin(0);
        _5->setObjectName(QString::fromUtf8("_5"));
        pronounceWordBox = new QCheckBox(tabPopupWindowBehavior);
        pronounceWordBox->setObjectName(QString::fromUtf8("pronounceWordBox"));

        _5->addWidget(pronounceWordBox);


        verticalLayout_3->addLayout(_5);

        spacer = new QSpacerItem(20, 123, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacer);

        tabWidget->addTab(tabPopupWindowBehavior, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout3 = new QGridLayout(tab);
        gridLayout3->setObjectName(QString::fromUtf8("gridLayout3"));
        apperanceCSSEdit = new QStarDict::CSSEdit(tab);
        apperanceCSSEdit->setObjectName(QString::fromUtf8("apperanceCSSEdit"));

        gridLayout3->addWidget(apperanceCSSEdit, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        QWidget::setTabOrder(instantSearchBox, speechCmdEdit);
        QWidget::setTabOrder(speechCmdEdit, dictsMoveUpButton);
        QWidget::setTabOrder(dictsMoveUpButton, dictsMoveDownButton);
        QWidget::setTabOrder(dictsMoveDownButton, dictsShowInfoButton);
        QWidget::setTabOrder(dictsShowInfoButton, popupDefaultWidthSpin);
        QWidget::setTabOrder(popupDefaultWidthSpin, popupDefaultHeightSpin);
        QWidget::setTabOrder(popupDefaultHeightSpin, popupOpacitySpin);

        retranslateUi(QStarDict__SettingsDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QStarDict__SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *QStarDict__SettingsDialog)
    {
        QStarDict__SettingsDialog->setWindowTitle(QApplication::translate("QStarDict::SettingsDialog", "QStarDict Settings", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        QStarDict__SettingsDialog->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        instantSearchBox->setText(QApplication::translate("QStarDict::SettingsDialog", "Instant search", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QStarDict::SettingsDialog", "Pronounce words using this command:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        speechCmdEdit->setToolTip(QApplication::translate("QStarDict::SettingsDialog", "Enter cmd for the speaching program.<br>If cmd contains \"%s\" it will be replaced to word, else word will be writen to stdin of speech process.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tabGlobalSettings), QApplication::translate("QStarDict::SettingsDialog", "Global", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dictsMoveUpButton->setToolTip(QApplication::translate("QStarDict::SettingsDialog", "Move up", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dictsMoveUpButton->setText(QApplication::translate("QStarDict::SettingsDialog", "Up", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dictsMoveDownButton->setToolTip(QApplication::translate("QStarDict::SettingsDialog", "Move down", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dictsMoveDownButton->setText(QApplication::translate("QStarDict::SettingsDialog", "Down", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dictsShowInfoButton->setToolTip(QApplication::translate("QStarDict::SettingsDialog", "Show information about dictionary", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        dictsShowInfoButton->setText(QApplication::translate("QStarDict::SettingsDialog", "Show info", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabDictionaries), QApplication::translate("QStarDict::SettingsDialog", "Dictionaries", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pluginsShowInfoButton->setToolTip(QApplication::translate("QStarDict::SettingsDialog", "Show information about plugin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pluginsShowInfoButton->setText(QApplication::translate("QStarDict::SettingsDialog", "Info", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pluginsConfigureButton->setToolTip(QApplication::translate("QStarDict::SettingsDialog", "Configure plugin", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pluginsConfigureButton->setText(QApplication::translate("QStarDict::SettingsDialog", "Configure", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPlugins), QApplication::translate("QStarDict::SettingsDialog", "Plugins", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QStarDict::SettingsDialog", "Popup window apperance", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QStarDict::SettingsDialog", "Opacity", 0, QApplication::UnicodeUTF8));
        popupOpacitySpin->setSuffix(QApplication::translate("QStarDict::SettingsDialog", "%", 0, QApplication::UnicodeUTF8));
        popupOpacitySpin->setPrefix(QString());
        label_5->setText(QApplication::translate("QStarDict::SettingsDialog", "Default width", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QStarDict::SettingsDialog", "Default height", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPopupWindowApperance), QApplication::translate("QStarDict::SettingsDialog", "Apperance", 0, QApplication::UnicodeUTF8));
        useScanBox->setText(QApplication::translate("QStarDict::SettingsDialog", "Scan selection", 0, QApplication::UnicodeUTF8));
        showIfNotFoundBox->setText(QApplication::translate("QStarDict::SettingsDialog", "Show if word not found", 0, QApplication::UnicodeUTF8));
        useScanModifierBox->setText(QApplication::translate("QStarDict::SettingsDialog", "Show only if modifier pressed", 0, QApplication::UnicodeUTF8));
        modifierKeyBox->clear();
        modifierKeyBox->insertItems(0, QStringList()
         << QApplication::translate("QStarDict::SettingsDialog", "Alt", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QStarDict::SettingsDialog", "Control", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QStarDict::SettingsDialog", "Shift", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("QStarDict::SettingsDialog", "Win", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("QStarDict::SettingsDialog", "Timeout before hide after mouse over", 0, QApplication::UnicodeUTF8));
        timeoutBeforeHideSpin->setSpecialValueText(QApplication::translate("QStarDict::SettingsDialog", "Don't hide", 0, QApplication::UnicodeUTF8));
        timeoutBeforeHideSpin->setSuffix(QApplication::translate("QStarDict::SettingsDialog", " sec", 0, QApplication::UnicodeUTF8));
        pronounceWordBox->setText(QApplication::translate("QStarDict::SettingsDialog", "Pronounce the word", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tabPopupWindowBehavior), QApplication::translate("QStarDict::SettingsDialog", "Popup", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QStarDict::SettingsDialog", "Fonts", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QStarDict__SettingsDialog);
    } // retranslateUi

};

} // namespace QStarDict

namespace QStarDict {
namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui
} // namespace QStarDict

#endif // UI_SETTINGSDIALOG_H
