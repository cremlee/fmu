/****************************************************************************
** Meta object code from reading C++ file 'wbsdtestingwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wbsdtestingwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbsdtestingwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WBSDTestingWindow_t {
    QByteArrayData data[24];
    char stringdata[383];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WBSDTestingWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WBSDTestingWindow_t qt_meta_stringdata_WBSDTestingWindow = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 10),
QT_MOC_LITERAL(2, 29, 0),
QT_MOC_LITERAL(3, 30, 7),
QT_MOC_LITERAL(4, 38, 4),
QT_MOC_LITERAL(5, 43, 23),
QT_MOC_LITERAL(6, 67, 7),
QT_MOC_LITERAL(7, 75, 13),
QT_MOC_LITERAL(8, 89, 4),
QT_MOC_LITERAL(9, 94, 10),
QT_MOC_LITERAL(10, 105, 17),
QT_MOC_LITERAL(11, 123, 13),
QT_MOC_LITERAL(12, 137, 4),
QT_MOC_LITERAL(13, 142, 23),
QT_MOC_LITERAL(14, 166, 22),
QT_MOC_LITERAL(15, 189, 24),
QT_MOC_LITERAL(16, 214, 24),
QT_MOC_LITERAL(17, 239, 25),
QT_MOC_LITERAL(18, 265, 21),
QT_MOC_LITERAL(19, 287, 23),
QT_MOC_LITERAL(20, 311, 24),
QT_MOC_LITERAL(21, 336, 21),
QT_MOC_LITERAL(22, 358, 10),
QT_MOC_LITERAL(23, 369, 12)
    },
    "WBSDTestingWindow\0gotMessage\0\0Message\0"
    "aMsg\0connectionStatusChanged\0aStatus\0"
    "StringMessage\0aMSG\0updateData\0"
    "heaterWindow_dest\0UpdataPaytest\0flag\0"
    "on_outletButton_clicked\0on_doserButton_clicked\0"
    "on_displayButton_clicked\0"
    "on_paymentButton_clicked\0"
    "on_versionsButton_clicked\0"
    "on_pumpButton_clicked\0on_heaterButton_clicked\0"
    "on_instantButton_clicked\0on_menuBack_triggered\0"
    "closeEvent\0QCloseEvent*\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBSDTestingWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x0a,
       5,    2,   92,    2, 0x0a,
       9,    0,   97,    2, 0x0a,
      10,    0,   98,    2, 0x0a,
      11,    1,   99,    2, 0x0a,
      13,    0,  102,    2, 0x08,
      14,    0,  103,    2, 0x08,
      15,    0,  104,    2, 0x08,
      16,    0,  105,    2, 0x08,
      17,    0,  106,    2, 0x08,
      18,    0,  107,    2, 0x08,
      19,    0,  108,    2, 0x08,
      20,    0,  109,    2, 0x08,
      21,    0,  110,    2, 0x08,
      22,    1,  111,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 7,    6,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,    2,

       0        // eod
};

void WBSDTestingWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WBSDTestingWindow *_t = static_cast<WBSDTestingWindow *>(_o);
        switch (_id) {
        case 0: _t->gotMessage((*reinterpret_cast< Message(*)>(_a[1]))); break;
        case 1: _t->connectionStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< StringMessage(*)>(_a[2]))); break;
        case 2: _t->updateData(); break;
        case 3: _t->heaterWindow_dest(); break;
        case 4: _t->UpdataPaytest((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_outletButton_clicked(); break;
        case 6: _t->on_doserButton_clicked(); break;
        case 7: _t->on_displayButton_clicked(); break;
        case 8: _t->on_paymentButton_clicked(); break;
        case 9: _t->on_versionsButton_clicked(); break;
        case 10: _t->on_pumpButton_clicked(); break;
        case 11: _t->on_heaterButton_clicked(); break;
        case 12: _t->on_instantButton_clicked(); break;
        case 13: _t->on_menuBack_triggered(); break;
        case 14: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject WBSDTestingWindow::staticMetaObject = {
    { &WBSDChildWindow::staticMetaObject, qt_meta_stringdata_WBSDTestingWindow.data,
      qt_meta_data_WBSDTestingWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *WBSDTestingWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBSDTestingWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBSDTestingWindow.stringdata))
        return static_cast<void*>(const_cast< WBSDTestingWindow*>(this));
    return WBSDChildWindow::qt_metacast(_clname);
}

int WBSDTestingWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBSDChildWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
