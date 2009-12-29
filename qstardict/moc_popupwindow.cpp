/****************************************************************************
** Meta object code from reading C++ file 'popupwindow.h'
**
** Created: Tue Dec 29 16:44:54 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "popupwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'popupwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QStarDict__PopupWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // signals: signature, parameters, type, tag, flags
      23,   41,   46,   46, 0x05,

 // slots: signature, parameters, type, tag, flags
      47,   41,   46,   46, 0x0a,
      61,   81,   46,   46, 0x0a,
      85,  109,   46,   46, 0x0a,
     114,  139,   46,   46, 0x0a,
     144,  167,   46,   46, 0x0a,
     181,   46,   46,   46, 0x0a,
     196,  139,   46,   46, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QStarDict__PopupWindow[] = {
    "QStarDict::PopupWindow\0scanChanged(bool)\0"
    "scan\0\0setScan(bool)\0setModifierKey(int)\0"
    "key\0setShowIfNotFound(bool)\0mode\0"
    "showTranslation(QString)\0text\0"
    "setPronounceWord(bool)\0pronounceWord\0"
    "saveSettings()\0selectionChanged(QString)\0"
};

const QMetaObject QStarDict::PopupWindow::staticMetaObject = {
    { &ResizablePopup::staticMetaObject, qt_meta_stringdata_QStarDict__PopupWindow,
      qt_meta_data_QStarDict__PopupWindow, 0 }
};

const QMetaObject *QStarDict::PopupWindow::metaObject() const
{
    return &staticMetaObject;
}

void *QStarDict::PopupWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStarDict__PopupWindow))
        return static_cast<void*>(const_cast< PopupWindow*>(this));
    return ResizablePopup::qt_metacast(_clname);
}

int QStarDict::PopupWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResizablePopup::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: scanChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: setScan((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: setModifierKey((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setShowIfNotFound((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: showTranslation((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: setPronounceWord((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: saveSettings(); break;
        case 7: selectionChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QStarDict::PopupWindow::scanChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
