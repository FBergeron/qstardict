/****************************************************************************
** Meta object code from reading C++ file 'web.h'
**
** Created: Tue Dec 29 16:45:34 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "web.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'web.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Web[] = {

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

static const char qt_meta_stringdata_Web[] = {
    "Web\0"
};

const QMetaObject Web::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Web,
      qt_meta_data_Web, 0 }
};

const QMetaObject *Web::metaObject() const
{
    return &staticMetaObject;
}

void *Web::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Web))
        return static_cast<void*>(const_cast< Web*>(this));
    if (!strcmp(_clname, "QStarDict::DictPlugin"))
        return static_cast< QStarDict::DictPlugin*>(const_cast< Web*>(this));
    if (!strcmp(_clname, "org.qstardict.DictPlugin/1.0"))
        return static_cast< QStarDict::DictPlugin*>(const_cast< Web*>(this));
    return QObject::qt_metacast(_clname);
}

int Web::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
