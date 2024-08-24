/****************************************************************************
** Meta object code from reading C++ file 'Orbit3DManipulator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../examples/SimpleViewerExampleQt/src/viewer/Orbit3DManipulator.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Orbit3DManipulator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Orbit3DManipulator_t {
    uint offsetsAndSizes[8];
    char stringdata0[19];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Orbit3DManipulator_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Orbit3DManipulator_t qt_meta_stringdata_Orbit3DManipulator = {
    {
        QT_MOC_LITERAL(0, 18),  // "Orbit3DManipulator"
        QT_MOC_LITERAL(19, 22),  // "signalEyeLookatChanged"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 20)   // "slotModelLoadingDone"
    },
    "Orbit3DManipulator",
    "signalEyeLookatChanged",
    "",
    "slotModelLoadingDone"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Orbit3DManipulator[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   27,    2, 0x0a,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Orbit3DManipulator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Orbit3DManipulator.offsetsAndSizes,
    qt_meta_data_Orbit3DManipulator,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Orbit3DManipulator_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Orbit3DManipulator, std::true_type>,
        // method 'signalEyeLookatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotModelLoadingDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Orbit3DManipulator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Orbit3DManipulator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalEyeLookatChanged(); break;
        case 1: _t->slotModelLoadingDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Orbit3DManipulator::*)();
            if (_t _q_method = &Orbit3DManipulator::signalEyeLookatChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Orbit3DManipulator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Orbit3DManipulator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Orbit3DManipulator.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "osgGA::StandardManipulator"))
        return static_cast< osgGA::StandardManipulator*>(this);
    return QObject::qt_metacast(_clname);
}

int Orbit3DManipulator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void Orbit3DManipulator::signalEyeLookatChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
