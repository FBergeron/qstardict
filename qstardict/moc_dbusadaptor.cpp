/****************************************************************************
** Meta object code from reading C++ file 'dbusadaptor.h'
**
** Created: Tue Dec 29 16:45:06 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dbusadaptor.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dbusadaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStarDict__DBusAdaptor[] = {

 // content:
       2,       // revision
       0,       // classname
       1,   12, // classinfo
       4,   14, // methods
       1,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // classinfo: key, value
      23,   39,

 // slots: signature, parameters, type, tag, flags
      58,   83,   88,   88, 0x0a,
      89,   83,   88,   88, 0x0a,
     108,   83,  127,   88, 0x0a,
     135,   83,  127,   88, 0x0a,

 // properties: name, type, flags
     158,  176, 0x02095103,

       0        // eod
};

static const char qt_meta_stringdata_QStarDict__DBusAdaptor[] = {
    "QStarDict::DBusAdaptor\0D-Bus Interface\0"
    "org.qstardict.dbus\0showTranslation(QString)\0"
    "text\0\0showPopup(QString)\0translate(QString)\0"
    "QString\0translateHtml(QString)\0"
    "mainWindowVisible\0int\0"
};

const QMetaObject QStarDict::DBusAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_QStarDict__DBusAdaptor,
      qt_meta_data_QStarDict__DBusAdaptor, 0 }
};

const QMetaObject *QStarDict::DBusAdaptor::metaObject() const
{
    return &staticMetaObject;
}

void *QStarDict::DBusAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStarDict__DBusAdaptor))
        return static_cast<void*>(const_cast< DBusAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int QStarDict::DBusAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: showTranslation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: showPopup((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: { QString _r = translate((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: { QString _r = translateHtml((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        default: ;
        }
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = mainWindowVisible(); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setMainWindowVisible(*reinterpret_cast< int*>(_v)); break;
        }
        _id -= 1;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 1;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 1;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_END_MOC_NAMESPACE
