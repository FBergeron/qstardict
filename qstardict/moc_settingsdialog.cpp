/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created: Tue Dec 29 16:45:04 2009
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
static const uint qt_meta_data_QStarDict__SettingsDialog[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      26,   57,   57,   57, 0x08,
      58,   57,   57,   57, 0x08,
      91,   57,   57,   57, 0x08,
     124,   57,   57,   57, 0x08,
     159,   57,   57,   57, 0x08,
     195,  230,   57,   57, 0x08,
     235,   57,   57,   57, 0x08,
     251,   57,   57,   57, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QStarDict__SettingsDialog[] = {
    "QStarDict::SettingsDialog\0"
    "on_dictsMoveUpButton_clicked()\0\0"
    "on_dictsMoveDownButton_clicked()\0"
    "on_dictsShowInfoButton_clicked()\0"
    "on_pluginsShowInfoButton_clicked()\0"
    "on_pluginsConfigureButton_clicked()\0"
    "pluginsItemChanged(QStandardItem*)\0"
    "item\0loadDictsList()\0loadPluginsList()\0"
};

const QMetaObject QStarDict::SettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QStarDict__SettingsDialog,
      qt_meta_data_QStarDict__SettingsDialog, 0 }
};

const QMetaObject *QStarDict::SettingsDialog::metaObject() const
{
    return &staticMetaObject;
}

void *QStarDict::SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QStarDict__SettingsDialog))
        return static_cast<void*>(const_cast< SettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QStarDict::SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_dictsMoveUpButton_clicked(); break;
        case 1: on_dictsMoveDownButton_clicked(); break;
        case 2: on_dictsShowInfoButton_clicked(); break;
        case 3: on_pluginsShowInfoButton_clicked(); break;
        case 4: on_pluginsConfigureButton_clicked(); break;
        case 5: pluginsItemChanged((*reinterpret_cast< QStandardItem*(*)>(_a[1]))); break;
        case 6: loadDictsList(); break;
        case 7: loadPluginsList(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
