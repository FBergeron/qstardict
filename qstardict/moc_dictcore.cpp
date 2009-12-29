/****************************************************************************
** Meta object code from reading C++ file 'dictcore.h'
**
** Created: Tue Dec 29 16:44:38 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dictcore.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dictcore.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStarDict__DictCore[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

       0        // eod
};

static const char qt_meta_stringdata_QStarDict__DictCore[] = {
    "QStarDict::DictCore\0"
};

const QMetaObject QStarDict::DictCore::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QStarDict__DictCore,
      qt_meta_data_QStarDict__DictCore, 0 }
};

const QMetaObject *QStarDict::DictCore::metaObject() const
{
    return &staticMetaObject;
}

void *QStarDict::DictCore::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStarDict__DictCore))
        return static_cast<void*>(const_cast< DictCore*>(this));
    return QObject::qt_metacast(_clname);
}

int QStarDict::DictCore::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
