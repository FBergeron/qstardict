/****************************************************************************
** Meta object code from reading C++ file 'resizablepopup.h'
**
** Created: Tue Dec 29 16:44:58 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "resizablepopup.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'resizablepopup.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStarDict__ResizablePopup[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      26,   52,   70,   70, 0x0a,
      71,   93,   70,   70, 0x0a,
     105,   70,   70,   70, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QStarDict__ResizablePopup[] = {
    "QStarDict::ResizablePopup\0"
    "setTimeoutBeforeHide(int)\0timeoutBeforeHide\0"
    "\0setDefaultSize(QSize)\0defaultSize\0"
    "popup()\0"
};

const QMetaObject QStarDict::ResizablePopup::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QStarDict__ResizablePopup,
      qt_meta_data_QStarDict__ResizablePopup, 0 }
};

const QMetaObject *QStarDict::ResizablePopup::metaObject() const
{
    return &staticMetaObject;
}

void *QStarDict::ResizablePopup::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStarDict__ResizablePopup))
        return static_cast<void*>(const_cast< ResizablePopup*>(this));
    return QFrame::qt_metacast(_clname);
}

int QStarDict::ResizablePopup::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: setTimeoutBeforeHide((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: setDefaultSize((*reinterpret_cast< const QSize(*)>(_a[1]))); break;
        case 2: popup(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
