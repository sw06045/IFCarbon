/****************************************************************************
** Meta object code from reading C++ file 'OpenFileWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../examples/SimpleViewerExampleQt/src/gui/OpenFileWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OpenFileWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_OpenFileWidget_t {
    uint offsetsAndSizes[26];
    char stringdata0[15];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[12];
    char stringdata5[14];
    char stringdata6[23];
    char stringdata7[27];
    char stringdata8[29];
    char stringdata9[24];
    char stringdata10[21];
    char stringdata11[24];
    char stringdata12[28];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_OpenFileWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_OpenFileWidget_t qt_meta_stringdata_OpenFileWidget = {
    {
        QT_MOC_LITERAL(0, 14),  // "OpenFileWidget"
        QT_MOC_LITERAL(15, 19),  // "signalProgressValue"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 14),  // "progress_value"
        QT_MOC_LITERAL(51, 11),  // "std::string"
        QT_MOC_LITERAL(63, 13),  // "progress_type"
        QT_MOC_LITERAL(77, 22),  // "signalClearSignalQueue"
        QT_MOC_LITERAL(100, 26),  // "slotAddOtherIfcFileClicked"
        QT_MOC_LITERAL(127, 28),  // "slotLoadRecentIfcFileClicked"
        QT_MOC_LITERAL(156, 23),  // "slotSetWritePathClicked"
        QT_MOC_LITERAL(180, 20),  // "slotWriteFileClicked"
        QT_MOC_LITERAL(201, 23),  // "slotClearRecentIfcFiles"
        QT_MOC_LITERAL(225, 27)   // "slotRecentFilesIndexChanged"
    },
    "OpenFileWidget",
    "signalProgressValue",
    "",
    "progress_value",
    "std::string",
    "progress_type",
    "signalClearSignalQueue",
    "slotAddOtherIfcFileClicked",
    "slotLoadRecentIfcFileClicked",
    "slotSetWritePathClicked",
    "slotWriteFileClicked",
    "slotClearRecentIfcFiles",
    "slotRecentFilesIndexChanged"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_OpenFileWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       6,    0,   67,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   68,    2, 0x08,    5 /* Private */,
       8,    0,   69,    2, 0x08,    6 /* Private */,
       9,    0,   70,    2, 0x08,    7 /* Private */,
      10,    0,   71,    2, 0x08,    8 /* Private */,
      11,    0,   72,    2, 0x08,    9 /* Private */,
      12,    1,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double, 0x80000000 | 4,    3,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject OpenFileWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_OpenFileWidget.offsetsAndSizes,
    qt_meta_data_OpenFileWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_OpenFileWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OpenFileWidget, std::true_type>,
        // method 'signalProgressValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const std::string &, std::false_type>,
        // method 'signalClearSignalQueue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAddOtherIfcFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotLoadRecentIfcFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSetWritePathClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotWriteFileClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotClearRecentIfcFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRecentFilesIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void OpenFileWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenFileWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalProgressValue((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::string>>(_a[2]))); break;
        case 1: _t->signalClearSignalQueue(); break;
        case 2: _t->slotAddOtherIfcFileClicked(); break;
        case 3: _t->slotLoadRecentIfcFileClicked(); break;
        case 4: _t->slotSetWritePathClicked(); break;
        case 5: _t->slotWriteFileClicked(); break;
        case 6: _t->slotClearRecentIfcFiles(); break;
        case 7: _t->slotRecentFilesIndexChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OpenFileWidget::*)(double , const std::string & );
            if (_t _q_method = &OpenFileWidget::signalProgressValue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OpenFileWidget::*)();
            if (_t _q_method = &OpenFileWidget::signalClearSignalQueue; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OpenFileWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenFileWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenFileWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OpenFileWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OpenFileWidget::signalProgressValue(double _t1, const std::string & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenFileWidget::signalClearSignalQueue()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
