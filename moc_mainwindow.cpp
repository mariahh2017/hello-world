/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CS1D_CollegeTour-master/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[439];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 20), // "collegeClickedSignal"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 7), // "College"
QT_MOC_LITERAL(4, 41, 27), // "on_adminLoginButton_clicked"
QT_MOC_LITERAL(5, 69, 30), // "on_adminPageBackButton_clicked"
QT_MOC_LITERAL(6, 100, 30), // "on_loginPageBackButton_clicked"
QT_MOC_LITERAL(7, 131, 39), // "on_planTripFromSaddlebackButt..."
QT_MOC_LITERAL(8, 171, 22), // "initialCollegeSelected"
QT_MOC_LITERAL(9, 194, 27), // "on_newCollegeButton_clicked"
QT_MOC_LITERAL(10, 222, 26), // "on_beginTripButton_clicked"
QT_MOC_LITERAL(11, 249, 29), // "on_adminLoginButton_2_clicked"
QT_MOC_LITERAL(12, 279, 30), // "on_menuItemsListWidget_clicked"
QT_MOC_LITERAL(13, 310, 11), // "QModelIndex"
QT_MOC_LITERAL(14, 322, 5), // "index"
QT_MOC_LITERAL(15, 328, 36), // "on_menuItemsListWidget_double..."
QT_MOC_LITERAL(16, 365, 31), // "on_addNewMenuItemButton_clicked"
QT_MOC_LITERAL(17, 397, 41) // "on_mostEffecientTripFromUCIBu..."

    },
    "MainWindow\0collegeClickedSignal\0\0"
    "College\0on_adminLoginButton_clicked\0"
    "on_adminPageBackButton_clicked\0"
    "on_loginPageBackButton_clicked\0"
    "on_planTripFromSaddlebackButton_clicked\0"
    "initialCollegeSelected\0"
    "on_newCollegeButton_clicked\0"
    "on_beginTripButton_clicked\0"
    "on_adminLoginButton_2_clicked\0"
    "on_menuItemsListWidget_clicked\0"
    "QModelIndex\0index\0"
    "on_menuItemsListWidget_doubleClicked\0"
    "on_addNewMenuItemButton_clicked\0"
    "on_mostEffecientTripFromUCIButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   82,    2, 0x08 /* Private */,
       5,    0,   83,    2, 0x08 /* Private */,
       6,    0,   84,    2, 0x08 /* Private */,
       7,    0,   85,    2, 0x08 /* Private */,
       8,    0,   86,    2, 0x08 /* Private */,
       9,    0,   87,    2, 0x08 /* Private */,
      10,    0,   88,    2, 0x08 /* Private */,
      11,    0,   89,    2, 0x08 /* Private */,
      12,    1,   90,    2, 0x08 /* Private */,
      15,    1,   93,    2, 0x08 /* Private */,
      16,    0,   96,    2, 0x08 /* Private */,
      17,    0,   97,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->collegeClickedSignal((*reinterpret_cast< College(*)>(_a[1]))); break;
        case 1: _t->on_adminLoginButton_clicked(); break;
        case 2: _t->on_adminPageBackButton_clicked(); break;
        case 3: _t->on_loginPageBackButton_clicked(); break;
        case 4: _t->on_planTripFromSaddlebackButton_clicked(); break;
        case 5: _t->initialCollegeSelected(); break;
        case 6: _t->on_newCollegeButton_clicked(); break;
        case 7: _t->on_beginTripButton_clicked(); break;
        case 8: _t->on_adminLoginButton_2_clicked(); break;
        case 9: _t->on_menuItemsListWidget_clicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 10: _t->on_menuItemsListWidget_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 11: _t->on_addNewMenuItemButton_clicked(); break;
        case 12: _t->on_mostEffecientTripFromUCIButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(College );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::collegeClickedSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::collegeClickedSignal(College _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
