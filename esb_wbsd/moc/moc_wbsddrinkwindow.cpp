/****************************************************************************
** Meta object code from reading C++ file 'wbsddrinkwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wbsddrinkwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbsddrinkwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WBSDDrinkWindow_t {
    QByteArrayData data[23];
    char stringdata[332];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WBSDDrinkWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WBSDDrinkWindow_t qt_meta_stringdata_WBSDDrinkWindow = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 10),
QT_MOC_LITERAL(2, 27, 0),
QT_MOC_LITERAL(3, 28, 7),
QT_MOC_LITERAL(4, 36, 4),
QT_MOC_LITERAL(5, 41, 23),
QT_MOC_LITERAL(6, 65, 7),
QT_MOC_LITERAL(7, 73, 13),
QT_MOC_LITERAL(8, 87, 4),
QT_MOC_LITERAL(9, 92, 10),
QT_MOC_LITERAL(10, 103, 10),
QT_MOC_LITERAL(11, 114, 5),
QT_MOC_LITERAL(12, 120, 7),
QT_MOC_LITERAL(13, 128, 21),
QT_MOC_LITERAL(14, 150, 18),
QT_MOC_LITERAL(15, 169, 18),
QT_MOC_LITERAL(16, 188, 18),
QT_MOC_LITERAL(17, 207, 18),
QT_MOC_LITERAL(18, 226, 18),
QT_MOC_LITERAL(19, 245, 18),
QT_MOC_LITERAL(20, 264, 18),
QT_MOC_LITERAL(21, 283, 18),
QT_MOC_LITERAL(22, 302, 28)
    },
    "WBSDDrinkWindow\0gotMessage\0\0Message\0"
    "aMsg\0connectionStatusChanged\0aStatus\0"
    "StringMessage\0aMSG\0updateData\0setNorecip\0"
    "itsDb\0itsHiLo\0on_menuBack_triggered\0"
    "on_button1_clicked\0on_button2_clicked\0"
    "on_button3_clicked\0on_button4_clicked\0"
    "on_button5_clicked\0on_button6_clicked\0"
    "on_button7_clicked\0on_button8_clicked\0"
    "on_crtDrink_Window_destroyed\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBSDDrinkWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x0a,
       5,    2,   87,    2, 0x0a,
       9,    0,   92,    2, 0x0a,
      10,    2,   93,    2, 0x0a,
      13,    0,   98,    2, 0x08,
      14,    0,   99,    2, 0x08,
      15,    0,  100,    2, 0x08,
      16,    0,  101,    2, 0x08,
      17,    0,  102,    2, 0x08,
      18,    0,  103,    2, 0x08,
      19,    0,  104,    2, 0x08,
      20,    0,  105,    2, 0x08,
      21,    0,  106,    2, 0x08,
      22,    0,  107,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WBSDDrinkWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WBSDDrinkWindow *_t = static_cast<WBSDDrinkWindow *>(_o);
        switch (_id) {
        case 0: _t->gotMessage((*reinterpret_cast< Message(*)>(_a[1]))); break;
        case 1: _t->connectionStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< StringMessage(*)>(_a[2]))); break;
        case 2: _t->updateData(); break;
        case 3: _t->setNorecip((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->on_menuBack_triggered(); break;
        case 5: _t->on_button1_clicked(); break;
        case 6: _t->on_button2_clicked(); break;
        case 7: _t->on_button3_clicked(); break;
        case 8: _t->on_button4_clicked(); break;
        case 9: _t->on_button5_clicked(); break;
        case 10: _t->on_button6_clicked(); break;
        case 11: _t->on_button7_clicked(); break;
        case 12: _t->on_button8_clicked(); break;
        case 13: _t->on_crtDrink_Window_destroyed(); break;
        default: ;
        }
    }
}

const QMetaObject WBSDDrinkWindow::staticMetaObject = {
    { &WBSDChildWindow::staticMetaObject, qt_meta_stringdata_WBSDDrinkWindow.data,
      qt_meta_data_WBSDDrinkWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *WBSDDrinkWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBSDDrinkWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBSDDrinkWindow.stringdata))
        return static_cast<void*>(const_cast< WBSDDrinkWindow*>(this));
    return WBSDChildWindow::qt_metacast(_clname);
}

int WBSDDrinkWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBSDChildWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
