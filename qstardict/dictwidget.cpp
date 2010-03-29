/*****************************************************************************
 * dictwidget.cpp - QStarDict, a StarDict clone written with using Qt        *
 * Copyright (C) 2007 Alexander Rodin                                        *
 *                                                                           *
 * This program is free software; you can redistribute it and/or modify      *
 * it under the terms of the GNU General Public License as published by      *
 * the Free Software Foundation; either version 2 of the License, or         *
 * (at your option) any later version.                                       *
 *                                                                           *
 * This program is distributed in the hope that it will be useful,           *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of            *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the             *
 * GNU General Public License for more details.                              *
 *                                                                           *
 * You should have received a copy of the GNU General Public License along   *
 * with this program; if not, write to the Free Software Foundation, Inc.,   *
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.               *
 *****************************************************************************/

#include "dictwidget.h"

#include <QScrollBar>
#include <QVBoxLayout>
#include <QToolBar>
#include <QAction>
#include <QIcon>
#include <QFileDialog>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QMouseEvent>
#include <QTextDocument>
#ifndef MAEMO
#include <QPrinter>
#include <QPrintDialog>
#endif // MAEMO
#include "application.h"
#include "dictbrowser.h"
#include "speaker.h"

namespace
{
class DictWidgetToolbar: public QToolBar
{
    public:
        DictWidgetToolbar(QWidget *parent = 0)
            : QToolBar(parent)
        { }

    protected:
        virtual void mouseDoubleClickEvent(QMouseEvent *event)
        {
            if (! actionAt(event->pos()))
                QToolBar::mouseDoubleClickEvent(event);
        }
};
}

namespace QStarDict
{

DictWidget::DictWidget(QWidget *parent, Qt::WindowFlags f)
    : QFrame(parent, f)
{
    m_translationView = new DictBrowser(this);
    setFrameStyle(m_translationView->frameStyle());
    m_translationView->setFrameStyle(QFrame::NoFrame);
    m_translationView->verticalScrollBar()->setCursor(Qt::ArrowCursor);
    m_translationView->horizontalScrollBar()->setCursor(Qt::ArrowCursor);
    m_translationView->setOpenExternalLinks(true);
    connect(m_translationView, SIGNAL(sourceChanged(const QUrl&)), SLOT(on_translationView_sourceChanged(const QUrl&)));

    m_toolBar = new DictWidgetToolbar(this);
    m_toolBar->setMouseTracking(true);

    QAction *actionBackward = m_toolBar->addAction(QIcon(":/icons/go-previous.png"), tr("Previous"),
            m_translationView, SLOT(backward()));
    actionBackward->setDisabled(true);
    connect(m_translationView, SIGNAL(backwardAvailable(bool)), actionBackward, SLOT(setEnabled(bool)));

    QAction *actionForward = m_toolBar->addAction(QIcon(":/icons/go-next.png"), tr("Next"),
            m_translationView, SLOT(forward()));
    actionForward->setDisabled(true);
    connect(m_translationView, SIGNAL(forwardAvailable(bool)), actionForward, SLOT(setEnabled(bool)));

    QAction *actionSaveToFile = m_toolBar->addAction(QIcon(":/icons/document-save-as.png"), tr("&Save to file"),
            this, SLOT(saveToFile()));

    QFont font;
    font.setPointSize(16);
    actionBackward->setFont(font);
    actionForward->setFont(font);
    actionSaveToFile->setFont(font);

    #ifndef MAEMO
    QAction *actionPrint = m_toolBar->addAction(QIcon(":/icons/document-print.png"), tr("Prin&t translation"),
            this, SLOT(print()));
    actionPrint->setFont(font);
    #endif // MAEMO

    QAction *actionSpeak = m_toolBar->addAction(QIcon(":/icons/speaker.png"), tr("Speak &word"),
            this, SLOT(speak()));
    actionSpeak->setFont(font);
    QSize toolBarSize;
    toolBarSize.setWidth(70);
    toolBarSize.setHeight(50);
    m_toolBar->setIconSize(toolBarSize);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->setMargin(0);
    layout->setSpacing(0);
    layout->addWidget(m_toolBar);
    layout->addWidget(m_translationView);
    setLayout(layout);
}

void DictWidget::toggleToolBar(bool CheckedState)
{
    CheckedState ? this->m_toolBar->show() : this->m_toolBar->hide();
    //m_toolBar->setVisible(CheckedState);
}

void DictWidget::translate(const QString &str)
{
    m_translationView->setSource(QUrl("qstardict:" + str));
}

void DictWidget::on_translationView_sourceChanged(const QUrl &name)
{
    emit wordTranslated(name.toString(QUrl::RemoveScheme));
}

void DictWidget::saveToFile()
{
	static QDir dir( QDir::homePath() ); //added by Frank
	static QString filter(tr("Text files (*.txt)")); //added by Frank
	
    QFileDialog dialog(this, tr("Save translation"),
                       dir.path(), filter); //updated by Frank
	dialog.selectFile(translatedWord());//added by Frank
    dialog.setNameFilters(QStringList() << tr("HTML files (*.html, *.htm)") << tr("Text files (*.txt)"));//updated by Frank
    dialog.selectNameFilter(filter); //added by Frank

	if (dialog.exec() && dialog.selectedFiles().size())
    {
        QString fileName = dialog.selectedFiles().first();
        /*QString*/ filter = dialog.selectedFilter();//updated by Frank
		dir = dialog.directory(); //added by Frank
        if (filter == tr("HTML files (*.html, *.htm)") && 
            ! (fileName.endsWith(".html", Qt::CaseInsensitive) || fileName.endsWith(".htm", Qt::CaseInsensitive)))
            fileName += ".html";
        else if (filter == tr("Text files (*.txt)") && ! fileName.endsWith(".txt", Qt::CaseInsensitive))
            fileName += ".txt";

        QFile outputFile(fileName);
        if (! outputFile.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QMessageBox::warning(this, tr("Error"),
                                 tr("Cannot save translation as %1").arg(fileName));
            return;
        }
        QTextStream outputStream(&outputFile);
        if (filter == tr("HTML files (*.html, *.htm)"))
            outputStream << m_translationView->document()->toHtml("UTF-8");
        else
            outputStream << m_translationView->toPlainText();
    }
}

void DictWidget::speak()
{
    Application::instance()->speaker()->speak(translatedWord());
}

#ifndef MAEMO
void DictWidget::print()
{
    QPrinter printer(QPrinter::HighResolution);
    QPrintDialog dialog(&printer, this);
    if (dialog.exec() == QDialog::Accepted)
        m_translationView->print(&printer);
}
#endif // MAEMO

void DictWidget::setDefaultStyleSheet(const QString &css)
{
    m_translationView->document()->setDefaultStyleSheet(css);
    m_translationView->reload();
}

}

// vim: tabstop=4 softtabstop=4 shiftwidth=4 expandtab cindent textwidth=120 formatoptions=tc

