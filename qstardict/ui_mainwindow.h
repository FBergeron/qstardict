/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Dec 29 16:44:21 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "dictwidget.h"

namespace QStarDict {

class Ui_MainWindow
{
public:
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionAboutQt;
    QAction *actionSettings;
    QAction *actionScan;
    QAction *actionHelp;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QToolButton *searchClearButton;
    QLineEdit *searchBox;
    QToolButton *queryButton;
    DictWidget *translationView;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuHelp;
    QMenu *menu_Options;
    QDockWidget *wordsListDock;
    QWidget *dockWidgetContents;
    QGridLayout *gridLayout1;
    QListWidget *wordsList;

    void setupUi(QMainWindow *QStarDict__MainWindow)
    {
        if (QStarDict__MainWindow->objectName().isEmpty())
            QStarDict__MainWindow->setObjectName(QString::fromUtf8("QStarDict__MainWindow"));
        QStarDict__MainWindow->resize(742, 511);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/qstardict.png"), QSize(), QIcon::Normal, QIcon::Off);
        QStarDict__MainWindow->setWindowIcon(icon);
        actionQuit = new QAction(QStarDict__MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/application-exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon1);
        QFont font;
        font.setPointSize(16);
        actionQuit->setFont(font);
        actionAbout = new QAction(QStarDict__MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setFont(font);
        actionAboutQt = new QAction(QStarDict__MainWindow);
        actionAboutQt->setObjectName(QString::fromUtf8("actionAboutQt"));
        actionAboutQt->setFont(font);
        actionSettings = new QAction(QStarDict__MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/configure.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSettings->setIcon(icon2);
        actionSettings->setFont(font);
        actionScan = new QAction(QStarDict__MainWindow);
        actionScan->setObjectName(QString::fromUtf8("actionScan"));
        actionScan->setCheckable(true);
        actionScan->setFont(font);
        actionHelp = new QAction(QStarDict__MainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/help-contents.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionHelp->setIcon(icon3);
        actionHelp->setFont(font);
        centralwidget = new QWidget(QStarDict__MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setMargin(9);
#endif
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setMargin(0);
#endif
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        searchClearButton = new QToolButton(centralwidget);
        searchClearButton->setObjectName(QString::fromUtf8("searchClearButton"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(searchClearButton->sizePolicy().hasHeightForWidth());
        searchClearButton->setSizePolicy(sizePolicy);
        searchClearButton->setMinimumSize(QSize(70, 60));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/clear-right.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchClearButton->setIcon(icon4);
        searchClearButton->setIconSize(QSize(70, 60));
        searchClearButton->setToolButtonStyle(Qt::ToolButtonIconOnly);

        hboxLayout->addWidget(searchClearButton);

        searchBox = new QLineEdit(centralwidget);
        searchBox->setObjectName(QString::fromUtf8("searchBox"));
        searchBox->setMinimumSize(QSize(0, 55));
        QFont font1;
        font1.setPointSize(14);
        searchBox->setFont(font1);

        hboxLayout->addWidget(searchBox);

        queryButton = new QToolButton(centralwidget);
        queryButton->setObjectName(QString::fromUtf8("queryButton"));
        sizePolicy.setHeightForWidth(queryButton->sizePolicy().hasHeightForWidth());
        queryButton->setSizePolicy(sizePolicy);
        queryButton->setMinimumSize(QSize(80, 60));
        queryButton->setFont(font1);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/search-filter.png"), QSize(), QIcon::Normal, QIcon::Off);
        queryButton->setIcon(icon5);
        queryButton->setIconSize(QSize(80, 60));
        queryButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        hboxLayout->addWidget(queryButton);


        gridLayout->addLayout(hboxLayout, 0, 0, 1, 1);

        translationView = new DictWidget(centralwidget);
        translationView->setObjectName(QString::fromUtf8("translationView"));

        gridLayout->addWidget(translationView, 1, 0, 1, 1);

        QStarDict__MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(QStarDict__MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 742, 36));
        menubar->setFont(font);
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menu_Options = new QMenu(menubar);
        menu_Options->setObjectName(QString::fromUtf8("menu_Options"));
        QStarDict__MainWindow->setMenuBar(menubar);
        wordsListDock = new QDockWidget(QStarDict__MainWindow);
        wordsListDock->setObjectName(QString::fromUtf8("wordsListDock"));
        wordsListDock->setFeatures(QDockWidget::NoDockWidgetFeatures);
        wordsListDock->setAllowedAreas(Qt::NoDockWidgetArea);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        gridLayout1 = new QGridLayout(dockWidgetContents);
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setMargin(9);
#endif
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        wordsList = new QListWidget(dockWidgetContents);
        wordsList->setObjectName(QString::fromUtf8("wordsList"));
        QFont font2;
        font2.setPointSize(12);
        wordsList->setFont(font2);

        gridLayout1->addWidget(wordsList, 0, 0, 1, 1);

        wordsListDock->setWidget(dockWidgetContents);
        QStarDict__MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), wordsListDock);
        QWidget::setTabOrder(searchBox, queryButton);
        QWidget::setTabOrder(queryButton, wordsList);
        QWidget::setTabOrder(wordsList, searchClearButton);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Options->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu_File->addAction(actionQuit);
        menuHelp->addAction(actionHelp);
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(actionAboutQt);
        menu_Options->addAction(actionScan);
        menu_Options->addAction(actionSettings);

        retranslateUi(QStarDict__MainWindow);
        QObject::connect(searchClearButton, SIGNAL(clicked()), searchBox, SLOT(clear()));
        QObject::connect(searchClearButton, SIGNAL(clicked()), searchBox, SLOT(setFocus()));
        QObject::connect(searchBox, SIGNAL(returnPressed()), queryButton, SLOT(click()));

        QMetaObject::connectSlotsByName(QStarDict__MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *QStarDict__MainWindow)
    {
        QStarDict__MainWindow->setWindowTitle(QApplication::translate("QStarDict::MainWindow", "QStarDict", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("QStarDict::MainWindow", "&Quit", 0, QApplication::UnicodeUTF8));
        actionQuit->setShortcut(QApplication::translate("QStarDict::MainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("QStarDict::MainWindow", "About", 0, QApplication::UnicodeUTF8));
        actionAboutQt->setText(QApplication::translate("QStarDict::MainWindow", "About &Qt", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("QStarDict::MainWindow", "&Configure", 0, QApplication::UnicodeUTF8));
        actionScan->setText(QApplication::translate("QStarDict::MainWindow", "&Scan", 0, QApplication::UnicodeUTF8));
        actionHelp->setText(QApplication::translate("QStarDict::MainWindow", "Help", 0, QApplication::UnicodeUTF8));
        actionHelp->setShortcut(QApplication::translate("QStarDict::MainWindow", "F1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        searchClearButton->setToolTip(QApplication::translate("QStarDict::MainWindow", "Clear the search box", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        searchClearButton->setText(QApplication::translate("QStarDict::MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        queryButton->setToolTip(QApplication::translate("QStarDict::MainWindow", "Fuzzy query", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        queryButton->setText(QApplication::translate("QStarDict::MainWindow", "Search", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("QStarDict::MainWindow", "&File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("QStarDict::MainWindow", "&Help", 0, QApplication::UnicodeUTF8));
        menu_Options->setTitle(QApplication::translate("QStarDict::MainWindow", "&Settings", 0, QApplication::UnicodeUTF8));
        wordsListDock->setWindowTitle(QApplication::translate("QStarDict::MainWindow", "Words list", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace QStarDict

namespace QStarDict {
namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui
} // namespace QStarDict

#endif // UI_MAINWINDOW_H
