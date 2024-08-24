/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../examples/SimpleViewerExampleQt/src/gui/MainWindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[44];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[20];
    char stringdata5[36];
    char stringdata6[18];
    char stringdata7[15];
    char stringdata8[12];
    char stringdata9[14];
    char stringdata10[21];
    char stringdata11[17];
    char stringdata12[27];
    char stringdata13[7];
    char stringdata14[12];
    char stringdata15[5];
    char stringdata16[25];
    char stringdata17[20];
    char stringdata18[22];
    char stringdata19[2];
    char stringdata20[2];
    char stringdata21[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 22),  // "signalMainWindowClosed"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 27),  // "slotBtnZoomBoundingsClicked"
        QT_MOC_LITERAL(63, 19),  // "slotSettingsClicked"
        QT_MOC_LITERAL(83, 35),  // "slotBtnRemoveSelectedObjectsC..."
        QT_MOC_LITERAL(119, 17),  // "slotProgressValue"
        QT_MOC_LITERAL(137, 14),  // "progress_value"
        QT_MOC_LITERAL(152, 11),  // "std::string"
        QT_MOC_LITERAL(164, 13),  // "progress_type"
        QT_MOC_LITERAL(178, 20),  // "slotClearSignalQueue"
        QT_MOC_LITERAL(199, 16),  // "slotZoomToObject"
        QT_MOC_LITERAL(216, 26),  // "shared_ptr<BuildingEntity>"
        QT_MOC_LITERAL(243, 6),  // "object"
        QT_MOC_LITERAL(250, 11),  // "osg::Group*"
        QT_MOC_LITERAL(262, 4),  // "node"
        QT_MOC_LITERAL(267, 24),  // "slotToggleOpenFileWidget"
        QT_MOC_LITERAL(292, 19),  // "slotFileLoadingDone"
        QT_MOC_LITERAL(312, 21),  // "slotCursorCoordinates"
        QT_MOC_LITERAL(334, 1),  // "x"
        QT_MOC_LITERAL(336, 1),  // "y"
        QT_MOC_LITERAL(338, 1)   // "z"
    },
    "MainWindow",
    "signalMainWindowClosed",
    "",
    "slotBtnZoomBoundingsClicked",
    "slotSettingsClicked",
    "slotBtnRemoveSelectedObjectsClicked",
    "slotProgressValue",
    "progress_value",
    "std::string",
    "progress_type",
    "slotClearSignalQueue",
    "slotZoomToObject",
    "shared_ptr<BuildingEntity>",
    "object",
    "osg::Group*",
    "node",
    "slotToggleOpenFileWidget",
    "slotFileLoadingDone",
    "slotCursorCoordinates",
    "x",
    "y",
    "z"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    2,   84,    2, 0x08,    5 /* Private */,
      10,    0,   89,    2, 0x08,    8 /* Private */,
      11,    2,   90,    2, 0x08,    9 /* Private */,
      11,    1,   95,    2, 0x28,   12 /* Private | MethodCloned */,
      16,    0,   98,    2, 0x08,   14 /* Private */,
      17,    0,   99,    2, 0x08,   15 /* Private */,
      18,    3,  100,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,   19,   20,   21,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'signalMainWindowClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotBtnZoomBoundingsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSettingsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotBtnRemoveSelectedObjectsClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotProgressValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        // method 'slotClearSignalQueue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotZoomToObject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<shared_ptr<BuildingEntity>, std::false_type>,
        QtPrivate::TypeAndForceComplete<osg::Group *, std::false_type>,
        // method 'slotZoomToObject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<shared_ptr<BuildingEntity>, std::false_type>,
        // method 'slotToggleOpenFileWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFileLoadingDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCursorCoordinates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalMainWindowClosed(); break;
        case 1: _t->slotBtnZoomBoundingsClicked(); break;
        case 2: _t->slotSettingsClicked(); break;
        case 3: _t->slotBtnRemoveSelectedObjectsClicked(); break;
        case 4: _t->slotProgressValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2]))); break;
        case 5: _t->slotClearSignalQueue(); break;
        case 6: _t->slotZoomToObject((*reinterpret_cast< std::add_pointer_t<shared_ptr<BuildingEntity>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<osg::Group*>>(_a[2]))); break;
        case 7: _t->slotZoomToObject((*reinterpret_cast< std::add_pointer_t<shared_ptr<BuildingEntity>>>(_a[1]))); break;
        case 8: _t->slotToggleOpenFileWidget(); break;
        case 9: _t->slotFileLoadingDone(); break;
        case 10: _t->slotCursorCoordinates((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::signalMainWindowClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::signalMainWindowClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
