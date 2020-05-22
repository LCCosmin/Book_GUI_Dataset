/****************************************************************************
** Meta object code from reading C++ file 'UserWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../UserWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UserWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_UserWindow_t {
    QByteArrayData data[15];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_UserWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_UserWindow_t qt_meta_stringdata_UserWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "UserWindow"
QT_MOC_LITERAL(1, 11, 18), // "onBtnClickedSwitch"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 7), // "checked"
QT_MOC_LITERAL(4, 39, 18), // "onBtnClickedSearch"
QT_MOC_LITERAL(5, 58, 15), // "onBtnClickedYes"
QT_MOC_LITERAL(6, 74, 22), // "onBtnClickedNoContinue"
QT_MOC_LITERAL(7, 97, 17), // "onBtnClickedNoEnd"
QT_MOC_LITERAL(8, 115, 16), // "onBtnClickedExit"
QT_MOC_LITERAL(9, 132, 19), // "onBtnClickedDisplay"
QT_MOC_LITERAL(10, 152, 16), // "onBtnClickedSave"
QT_MOC_LITERAL(11, 169, 16), // "onBtnClickedLoad"
QT_MOC_LITERAL(12, 186, 10), // "UpdateTime"
QT_MOC_LITERAL(13, 197, 6), // "undoIt"
QT_MOC_LITERAL(14, 204, 6) // "redoIt"

    },
    "UserWindow\0onBtnClickedSwitch\0\0checked\0"
    "onBtnClickedSearch\0onBtnClickedYes\0"
    "onBtnClickedNoContinue\0onBtnClickedNoEnd\0"
    "onBtnClickedExit\0onBtnClickedDisplay\0"
    "onBtnClickedSave\0onBtnClickedLoad\0"
    "UpdateTime\0undoIt\0redoIt"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_UserWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x0a /* Public */,
       1,    0,  122,    2, 0x2a /* Public | MethodCloned */,
       4,    1,  123,    2, 0x0a /* Public */,
       4,    0,  126,    2, 0x2a /* Public | MethodCloned */,
       5,    1,  127,    2, 0x0a /* Public */,
       5,    0,  130,    2, 0x2a /* Public | MethodCloned */,
       6,    1,  131,    2, 0x0a /* Public */,
       6,    0,  134,    2, 0x2a /* Public | MethodCloned */,
       7,    1,  135,    2, 0x0a /* Public */,
       7,    0,  138,    2, 0x2a /* Public | MethodCloned */,
       8,    1,  139,    2, 0x0a /* Public */,
       8,    0,  142,    2, 0x2a /* Public | MethodCloned */,
       9,    1,  143,    2, 0x0a /* Public */,
       9,    0,  146,    2, 0x2a /* Public | MethodCloned */,
      10,    1,  147,    2, 0x0a /* Public */,
      10,    0,  150,    2, 0x2a /* Public | MethodCloned */,
      11,    1,  151,    2, 0x0a /* Public */,
      11,    0,  154,    2, 0x2a /* Public | MethodCloned */,
      12,    0,  155,    2, 0x0a /* Public */,
      13,    0,  156,    2, 0x0a /* Public */,
      14,    0,  157,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void UserWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onBtnClickedSwitch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onBtnClickedSwitch(); break;
        case 2: _t->onBtnClickedSearch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onBtnClickedSearch(); break;
        case 4: _t->onBtnClickedYes((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->onBtnClickedYes(); break;
        case 6: _t->onBtnClickedNoContinue((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onBtnClickedNoContinue(); break;
        case 8: _t->onBtnClickedNoEnd((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->onBtnClickedNoEnd(); break;
        case 10: _t->onBtnClickedExit((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->onBtnClickedExit(); break;
        case 12: _t->onBtnClickedDisplay((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: _t->onBtnClickedDisplay(); break;
        case 14: _t->onBtnClickedSave((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->onBtnClickedSave(); break;
        case 16: _t->onBtnClickedLoad((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 17: _t->onBtnClickedLoad(); break;
        case 18: _t->UpdateTime(); break;
        case 19: _t->undoIt(); break;
        case 20: _t->redoIt(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject UserWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_UserWindow.data,
    qt_meta_data_UserWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *UserWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_UserWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int UserWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
