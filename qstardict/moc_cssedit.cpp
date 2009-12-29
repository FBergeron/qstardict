/****************************************************************************
** Meta object code from reading C++ file 'cssedit.h'
**
** Created: Tue Dec 29 16:44:32 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "cssedit.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cssedit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStarDict__CSSEdit[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      19,   40,   40,   40, 0x08,
      41,   64,   40,   40, 0x08,
      70,   40,   40,   40, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QStarDict__CSSEdit[] = {
    "QStarDict::CSSEdit\0colorSelectClicked()\0"
    "\0setCurrentElement(int)\0index\0"
    "propertyChanged()\0"
};

const QMetaObject QStarDict::CSSEdit::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QStarDict__CSSEdit,
      qt_meta_data_QStarDict__CSSEdit, 0 }
};

const QMetaObject *QStarDict::CSSEdit::metaObject() const
{
    return &staticMetaObject;
}

void *QStarDict::CSSEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStarDict__CSSEdit))
        return static_cast<void*>(const_cast< CSSEdit*>(this));
    return QWidget::qt_metacast(_clname);
}

int QStarDict::CSSEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: colorSelectClicked(); break;
        case 1: setCurrentElement((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: propertyChanged(); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
