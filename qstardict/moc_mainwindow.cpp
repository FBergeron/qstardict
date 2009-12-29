/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Tue Dec 29 16:44:49 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStarDict__MainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      22,   47,   52,   52, 0x0a,
      53,   52,   52,   52, 0x08,
      80,   52,   52,   52, 0x08,
     110,   52,   52,   52, 0x08,
     136,   52,   52,   52, 0x08,
     161,  202,   52,   52, 0x08,
     207,   47,   52,   52, 0x08,
     231,   52,   52,   52, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QStarDict__MainWindow[] = {
    "QStarDict::MainWindow\0showTranslation(QString)\0"
    "word\0\0on_actionAbout_triggered()\0"
    "on_actionSettings_triggered()\0"
    "on_actionHelp_triggered()\0"
    "on_queryButton_clicked()\0"
    "wordsListItemActivated(QListWidgetItem*)\0"
    "item\0wordTranslated(QString)\0"
    "queryEdited(QString)\0"
};

const QMetaObject QStarDict::MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_QStarDict__MainWindow,
      qt_meta_data_QStarDict__MainWindow, 0 }
};

const QMetaObject *QStarDict::MainWindow::metaObject() const
{
    return &staticMetaObject;
}

void *QStarDict::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStarDict__MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int QStarDict::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showTranslation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: on_actionAbout_triggered(); break;
        case 2: on_actionSettings_triggered(); break;
        case 3: on_actionHelp_triggered(); break;
        case 4: on_queryButton_clicked(); break;
        case 5: wordsListItemActivated((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 6: wordTranslated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: queryEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
