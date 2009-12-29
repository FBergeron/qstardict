/****************************************************************************
** Meta object code from reading C++ file 'dictwidget.h'
**
** Created: Tue Dec 29 16:44:42 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dictwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dictwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStarDict__DictWidget[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      22,   46,   51,   51, 0x05,

 // slots: signature, parameters, type, tag, flags
      52,   91,   51,   51, 0x08,
      96,   51,   51,   51, 0x08,
     109,   51,   51,   51, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QStarDict__DictWidget[] = {
    "QStarDict::DictWidget\0wordTranslated(QString)\0"
    "word\0\0on_translationView_sourceChanged(QUrl)\0"
    "name\0saveToFile()\0speak()\0"
};

const QMetaObject QStarDict::DictWidget::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QStarDict__DictWidget,
      qt_meta_data_QStarDict__DictWidget, 0 }
};

const QMetaObject *QStarDict::DictWidget::metaObject() const
{
    return &staticMetaObject;
}

void *QStarDict::DictWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStarDict__DictWidget))
        return static_cast<void*>(const_cast< DictWidget*>(this));
    return QFrame::qt_metacast(_clname);
}

int QStarDict::DictWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: wordTranslated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: on_translationView_sourceChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 2: saveToFile(); break;
        case 3: speak(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QStarDict::DictWidget::wordTranslated(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
