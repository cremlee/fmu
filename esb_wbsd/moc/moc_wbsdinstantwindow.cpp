/****************************************************************************
** Meta object code from reading C++ file 'wbsdinstantwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../wbsdinstantwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wbsdinstantwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WBSDInstantWindow_t {
    QByteArrayData data[27];
    char stringdata[463];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_WBSDInstantWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_WBSDInstantWindow_t qt_meta_stringdata_WBSDInstantWindow = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 6),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 10),
QT_MOC_LITERAL(4, 37, 7),
QT_MOC_LITERAL(5, 45, 4),
QT_MOC_LITERAL(6, 50, 23),
QT_MOC_LITERAL(7, 74, 7),
QT_MOC_LITERAL(8, 82, 13),
QT_MOC_LITERAL(9, 96, 4),
QT_MOC_LITERAL(10, 101, 10),
QT_MOC_LITERAL(11, 112, 26),
QT_MOC_LITERAL(12, 139, 27),
QT_MOC_LITERAL(13, 167, 23),
QT_MOC_LITERAL(14, 191, 24),
QT_MOC_LITERAL(15, 216, 26),
QT_MOC_LITERAL(16, 243, 27),
QT_MOC_LITERAL(17, 271, 21),
QT_MOC_LITERAL(18, 293, 22),
QT_MOC_LITERAL(19, 316, 21),
QT_MOC_LITERAL(20, 338, 29),
QT_MOC_LITERAL(21, 368, 19),
QT_MOC_LITERAL(22, 388, 19),
QT_MOC_LITERAL(23, 408, 20),
QT_MOC_LITERAL(24, 429, 4),
QT_MOC_LITERAL(25, 434, 19),
QT_MOC_LITERAL(26, 454, 7)
    },
    "WBSDInstantWindow\0iclose\0\0gotMessage\0"
    "Message\0aMsg\0connectionStatusChanged\0"
    "aStatus\0StringMessage\0aMSG\0updateData\0"
    "on_instantWaterVal_pressed\0"
    "on_instantWaterVal_released\0"
    "on_instantMixer_pressed\0"
    "on_instantMixer_released\0"
    "on_instantCanister_pressed\0"
    "on_instantCanister_released\0"
    "on_instantFan_pressed\0on_instantFan_released\0"
    "on_menuBack_triggered\0"
    "on_spIngVolGr_editingFinished\0"
    "on_btnCal50_clicked\0on_btnCal75_clicked\0"
    "on_btnCal100_clicked\0test\0GetCanisterMinValue\0"
    "canconf\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WBSDInstantWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    1,  110,    2, 0x0a,
       6,    2,  113,    2, 0x0a,
      10,    0,  118,    2, 0x0a,
      11,    0,  119,    2, 0x08,
      12,    0,  120,    2, 0x08,
      13,    0,  121,    2, 0x08,
      14,    0,  122,    2, 0x08,
      15,    0,  123,    2, 0x08,
      16,    0,  124,    2, 0x08,
      17,    0,  125,    2, 0x08,
      18,    0,  126,    2, 0x08,
      19,    0,  127,    2, 0x08,
      20,    0,  128,    2, 0x08,
      21,    0,  129,    2, 0x08,
      22,    0,  130,    2, 0x08,
      23,    0,  131,    2, 0x08,
      24,    0,  132,    2, 0x08,
      25,    1,  133,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    9,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QReal, QMetaType::Int,   26,

       0        // eod
};

void WBSDInstantWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WBSDInstantWindow *_t = static_cast<WBSDInstantWindow *>(_o);
        switch (_id) {
        case 0: _t->iclose(); break;
        case 1: _t->gotMessage((*reinterpret_cast< Message(*)>(_a[1]))); break;
        case 2: _t->connectionStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< StringMessage(*)>(_a[2]))); break;
        case 3: _t->updateData(); break;
        case 4: _t->on_instantWaterVal_pressed(); break;
        case 5: _t->on_instantWaterVal_released(); break;
        case 6: _t->on_instantMixer_pressed(); break;
        case 7: _t->on_instantMixer_released(); break;
        case 8: _t->on_instantCanister_pressed(); break;
        case 9: _t->on_instantCanister_released(); break;
        case 10: _t->on_instantFan_pressed(); break;
        case 11: _t->on_instantFan_released(); break;
        case 12: _t->on_menuBack_triggered(); break;
        case 13: _t->on_spIngVolGr_editingFinished(); break;
        case 14: _t->on_btnCal50_clicked(); break;
        case 15: _t->on_btnCal75_clicked(); break;
        case 16: _t->on_btnCal100_clicked(); break;
        case 17: _t->test(); break;
        case 18: { qreal _r = _t->GetCanisterMinValue((*reinterpret_cast< int(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< qreal*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WBSDInstantWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WBSDInstantWindow::iclose)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject WBSDInstantWindow::staticMetaObject = {
    { &WBSDChildWindow::staticMetaObject, qt_meta_stringdata_WBSDInstantWindow.data,
      qt_meta_data_WBSDInstantWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *WBSDInstantWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WBSDInstantWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WBSDInstantWindow.stringdata))
        return static_cast<void*>(const_cast< WBSDInstantWindow*>(this));
    return WBSDChildWindow::qt_metacast(_clname);
}

int WBSDInstantWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WBSDChildWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void WBSDInstantWindow::iclose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
