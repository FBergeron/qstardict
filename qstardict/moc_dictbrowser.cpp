/****************************************************************************
** Meta object code from reading C++ file 'dictbrowser.h'
**
** Created: Tue Dec 29 16:44:36 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dictbrowser.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dictbrowser.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStarDict__DictBrowser[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      23,   46,   51,   51, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QStarDict__DictBrowser[] = {
    "QStarDict::DictBrowser\0on_anchorClicked(QUrl)\0"
    "link\0\0"
};

const QMetaObject QStarDict::DictBrowser::staticMetaObject = {
    { &QTextBrowser::staticMetaObject, qt_meta_stringdata_QStarDict__DictBrowser,
      qt_meta_data_QStarDict__DictBrowser, 0 }
};

const QMetaObject *QStarDict::DictBrowser::metaObject() const
{
    return &staticMetaObject;
}

void *QStarDict::DictBrowser::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStarDict__DictBrowser))
        return static_cast<void*>(const_cast< DictBrowser*>(this));
    return QTextBrowser::qt_metacast(_clname);
}

int QStarDict::DictBrowser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextBrowser::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_anchorClicked((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
