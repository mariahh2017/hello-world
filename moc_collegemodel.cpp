/****************************************************************************
** Meta object code from reading C++ file 'collegemodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1D_CollegeTour-master/collegemodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'collegemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CollegeModel_t {
    QByteArrayData data[9];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CollegeModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CollegeModel_t qt_meta_stringdata_CollegeModel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "CollegeModel"
QT_MOC_LITERAL(1, 13, 21), // "menuItemButtonPressed"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 35), // "on_nextClosestCollegeButton_c..."
QT_MOC_LITERAL(4, 72, 25), // "on_cartListWidget_clicked"
QT_MOC_LITERAL(5, 98, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 110, 5), // "index"
QT_MOC_LITERAL(7, 116, 31), // "on_removeCartItemButton_clicked"
QT_MOC_LITERAL(8, 148, 27) // "on_viewTotalsButton_clicked"

    },
    "CollegeModel\0menuItemButtonPressed\0\0"
    "on_nextClosestCollegeButton_clicked\0"
    "on_cartListWidget_clicked\0QModelIndex\0"
    "index\0on_removeCartItemButton_clicked\0"
    "on_viewTotalsButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CollegeModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x0a /* Public */,
       3,    0,   40,    2, 0x08 /* Private */,
       4,    1,   41,    2, 0x08 /* Private */,
       7,    0,   44,    2, 0x08 /* Private */,
       8,    0,   45,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CollegeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CollegeModel *_t = static_cast<CollegeModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menuItemButtonPressed(); break;
        case 1: _t->on_nextClosestCollegeButton_clicked(); break;
        case 2: _t->on_cartListWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_removeCartItemButton_clicked(); break;
        case 4: _t->on_viewTotalsButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CollegeModel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_CollegeModel.data,
      qt_meta_data_CollegeModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CollegeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CollegeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CollegeModel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int CollegeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
