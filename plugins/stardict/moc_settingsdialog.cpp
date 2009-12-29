/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created: Tue Dec 29 16:45:22 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "settingsdialog.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SettingsDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      15,   45,   45,   45, 0x08,
      46,   45,   45,   45, 0x08,
      79,   45,   45,   45, 0x08,
     112,   45,   45,   45, 0x08,
     147,   45,   45,   45, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SettingsDialog[] = {
    "SettingsDialog\0on_addDictDirButton_clicked()\0"
    "\0on_removeDictDirButton_clicked()\0"
    "on_moveUpDictDirButton_clicked()\0"
    "on_moveDownDictDirButton_clicked()\0"
    "apply()\0"
};

const QMetaObject SettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_SettingsDialog,
      qt_meta_data_SettingsDialog, 0 }
};

const QMetaObject *SettingsDialog::metaObject() const
{
    return &staticMetaObject;
}

void *SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsDialog))
        return static_cast<void*>(const_cast< SettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_addDictDirButton_clicked(); break;
        case 1: on_removeDictDirButton_clicked(); break;
        case 2: on_moveUpDictDirButton_clicked(); break;
        case 3: on_moveDownDictDirButton_clicked(); break;
        case 4: apply(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
