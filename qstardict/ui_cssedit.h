/********************************************************************************
** Form generated from reading ui file 'cssedit.ui'
**
** Created: Tue Dec 29 16:44:20 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_CSSEDIT_H
#define UI_CSSEDIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFontComboBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpinBox>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

namespace QStarDict {

class Ui_CSSEdit
{
public:
    QGridLayout *gridLayout;
    QTextEdit *m_preview;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QComboBox *m_elementCombo;
    QToolButton *m_colorButton;
    QToolButton *m_backgroundButton;
    QLabel *label_4;
    QFontComboBox *m_fontCombo;
    QSpinBox *m_sizeSpin;
    QToolButton *m_boldButton;
    QToolButton *m_italicButton;
    QToolButton *m_underlineButton;

    void setupUi(QWidget *QStarDict__CSSEdit)
    {
        if (QStarDict__CSSEdit->objectName().isEmpty())
            QStarDict__CSSEdit->setObjectName(QString::fromUtf8("QStarDict__CSSEdit"));
        QStarDict__CSSEdit->resize(435, 203);
        gridLayout = new QGridLayout(QStarDict__CSSEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_preview = new QTextEdit(QStarDict__CSSEdit);
        m_preview->setObjectName(QString::fromUtf8("m_preview"));
        m_preview->setReadOnly(true);

        gridLayout->addWidget(m_preview, 0, 0, 1, 6);

        label_2 = new QLabel(QStarDict__CSSEdit);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        label_3 = new QLabel(QStarDict__CSSEdit);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 2, 1, 1);

        label_6 = new QLabel(QStarDict__CSSEdit);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 3, 1, 3);

        m_elementCombo = new QComboBox(QStarDict__CSSEdit);
        m_elementCombo->setObjectName(QString::fromUtf8("m_elementCombo"));

        gridLayout->addWidget(m_elementCombo, 2, 0, 1, 2);

        m_colorButton = new QToolButton(QStarDict__CSSEdit);
        m_colorButton->setObjectName(QString::fromUtf8("m_colorButton"));

        gridLayout->addWidget(m_colorButton, 2, 2, 1, 1);

        m_backgroundButton = new QToolButton(QStarDict__CSSEdit);
        m_backgroundButton->setObjectName(QString::fromUtf8("m_backgroundButton"));

        gridLayout->addWidget(m_backgroundButton, 2, 3, 1, 3);

        label_4 = new QLabel(QStarDict__CSSEdit);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        m_fontCombo = new QFontComboBox(QStarDict__CSSEdit);
        m_fontCombo->setObjectName(QString::fromUtf8("m_fontCombo"));

        gridLayout->addWidget(m_fontCombo, 3, 1, 1, 1);

        m_sizeSpin = new QSpinBox(QStarDict__CSSEdit);
        m_sizeSpin->setObjectName(QString::fromUtf8("m_sizeSpin"));
        m_sizeSpin->setMinimum(4);
        m_sizeSpin->setMaximum(150);
        m_sizeSpin->setSingleStep(2);
        m_sizeSpin->setValue(10);

        gridLayout->addWidget(m_sizeSpin, 3, 2, 1, 1);

        m_boldButton = new QToolButton(QStarDict__CSSEdit);
        m_boldButton->setObjectName(QString::fromUtf8("m_boldButton"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        m_boldButton->setFont(font);
        m_boldButton->setCheckable(true);

        gridLayout->addWidget(m_boldButton, 3, 3, 1, 1);

        m_italicButton = new QToolButton(QStarDict__CSSEdit);
        m_italicButton->setObjectName(QString::fromUtf8("m_italicButton"));
        QFont font1;
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        m_italicButton->setFont(font1);
        m_italicButton->setCheckable(true);

        gridLayout->addWidget(m_italicButton, 3, 4, 1, 1);

        m_underlineButton = new QToolButton(QStarDict__CSSEdit);
        m_underlineButton->setObjectName(QString::fromUtf8("m_underlineButton"));
        QFont font2;
        font2.setBold(false);
        font2.setUnderline(true);
        font2.setWeight(50);
        m_underlineButton->setFont(font2);
        m_underlineButton->setCheckable(true);

        gridLayout->addWidget(m_underlineButton, 3, 5, 1, 1);

        QWidget::setTabOrder(m_elementCombo, m_colorButton);
        QWidget::setTabOrder(m_colorButton, m_fontCombo);
        QWidget::setTabOrder(m_fontCombo, m_sizeSpin);
        QWidget::setTabOrder(m_sizeSpin, m_boldButton);
        QWidget::setTabOrder(m_boldButton, m_italicButton);
        QWidget::setTabOrder(m_italicButton, m_underlineButton);

        retranslateUi(QStarDict__CSSEdit);

        QMetaObject::connectSlotsByName(QStarDict__CSSEdit);
    } // setupUi

    void retranslateUi(QWidget *QStarDict__CSSEdit)
    {
        label_2->setText(QApplication::translate("QStarDict::CSSEdit", "Element", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QStarDict::CSSEdit", "Foreground", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QStarDict::CSSEdit", "Background", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_elementCombo->setToolTip(QApplication::translate("QStarDict::CSSEdit", "Select element", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        m_colorButton->setStatusTip(QApplication::translate("QStarDict::CSSEdit", "Click to select color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        m_colorButton->setText(QApplication::translate("QStarDict::CSSEdit", "#000000", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        m_backgroundButton->setStatusTip(QApplication::translate("QStarDict::CSSEdit", "Click to select color", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_STATUSTIP
        m_backgroundButton->setText(QApplication::translate("QStarDict::CSSEdit", "#000000", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QStarDict::CSSEdit", "Font", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_fontCombo->setToolTip(QApplication::translate("QStarDict::CSSEdit", "Select font", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        m_sizeSpin->setToolTip(QApplication::translate("QStarDict::CSSEdit", "Select font size", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_sizeSpin->setSuffix(QApplication::translate("QStarDict::CSSEdit", "pt", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_boldButton->setToolTip(QApplication::translate("QStarDict::CSSEdit", "Bold", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_boldButton->setText(QApplication::translate("QStarDict::CSSEdit", "B", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_italicButton->setToolTip(QApplication::translate("QStarDict::CSSEdit", "Italic", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_italicButton->setText(QApplication::translate("QStarDict::CSSEdit", "I", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_underlineButton->setToolTip(QApplication::translate("QStarDict::CSSEdit", "Underline", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_underlineButton->setText(QApplication::translate("QStarDict::CSSEdit", "U", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(QStarDict__CSSEdit);
    } // retranslateUi

};

} // namespace QStarDict

namespace QStarDict {
namespace Ui {
    class CSSEdit: public Ui_CSSEdit {};
} // namespace Ui
} // namespace QStarDict

#endif // UI_CSSEDIT_H
