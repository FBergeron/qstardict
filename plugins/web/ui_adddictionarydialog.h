/********************************************************************************
** Form generated from reading ui file 'adddictionarydialog.ui'
**
** Created: Tue Dec 29 16:45:27 2009
**      by: Qt User Interface Compiler version 4.5.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_ADDDICTIONARYDIALOG_H
#define UI_ADDDICTIONARYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddDictionaryDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QLineEdit *authorEdit;
    QLabel *label_3;
    QTextEdit *descEdit;
    QLabel *label_4;
    QLineEdit *queryEdit;
    QLabel *label_5;
    QComboBox *charsetEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddDictionaryDialog)
    {
        if (AddDictionaryDialog->objectName().isEmpty())
            AddDictionaryDialog->setObjectName(QString::fromUtf8("AddDictionaryDialog"));
        AddDictionaryDialog->resize(377, 280);
        vboxLayout = new QVBoxLayout(AddDictionaryDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AddDictionaryDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameEdit = new QLineEdit(AddDictionaryDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout->addWidget(nameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(AddDictionaryDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        authorEdit = new QLineEdit(AddDictionaryDialog);
        authorEdit->setObjectName(QString::fromUtf8("authorEdit"));

        gridLayout->addWidget(authorEdit, 1, 1, 1, 1);

        label_3 = new QLabel(AddDictionaryDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        descEdit = new QTextEdit(AddDictionaryDialog);
        descEdit->setObjectName(QString::fromUtf8("descEdit"));

        gridLayout->addWidget(descEdit, 2, 1, 1, 1);

        label_4 = new QLabel(AddDictionaryDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        queryEdit = new QLineEdit(AddDictionaryDialog);
        queryEdit->setObjectName(QString::fromUtf8("queryEdit"));

        gridLayout->addWidget(queryEdit, 3, 1, 1, 1);

        label_5 = new QLabel(AddDictionaryDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        charsetEdit = new QComboBox(AddDictionaryDialog);
        charsetEdit->setObjectName(QString::fromUtf8("charsetEdit"));

        gridLayout->addWidget(charsetEdit, 4, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(AddDictionaryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QFont font;
        font.setPointSize(12);
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(AddDictionaryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddDictionaryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddDictionaryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddDictionaryDialog);
    } // setupUi

    void retranslateUi(QDialog *AddDictionaryDialog)
    {
        AddDictionaryDialog->setWindowTitle(QApplication::translate("AddDictionaryDialog", "Add dictionary", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddDictionaryDialog", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddDictionaryDialog", "Author:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddDictionaryDialog", "Description:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddDictionaryDialog", "HTTP query:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        queryEdit->setToolTip(QApplication::translate("AddDictionaryDialog", "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">The '%s' template will be replace to word.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("AddDictionaryDialog", "HTML charset:", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(AddDictionaryDialog);
    } // retranslateUi

};

namespace Ui {
    class AddDictionaryDialog: public Ui_AddDictionaryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDDICTIONARYDIALOG_H
