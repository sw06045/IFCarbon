/****************************************************************************
** Meta object code from reading C++ file 'IfcPlusPlusSystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../examples/SimpleViewerExampleQt/src/IfcPlusPlusSystem.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IfcPlusPlusSystem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_IfcPlusPlusSystem_t {
    uint offsetsAndSizes[20];
    char stringdata0[18];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[60];
    char stringdata4[12];
    char stringdata5[24];
    char stringdata6[19];
    char stringdata7[24];
    char stringdata8[23];
    char stringdata9[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_IfcPlusPlusSystem_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_IfcPlusPlusSystem_t qt_meta_stringdata_IfcPlusPlusSystem = {
    {
        QT_MOC_LITERAL(0, 17),  // "IfcPlusPlusSystem"
        QT_MOC_LITERAL(18, 21),  // "signalObjectsSelected"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 59),  // "std::unordered_map<std::strin..."
        QT_MOC_LITERAL(101, 11),  // "map_objects"
        QT_MOC_LITERAL(113, 23),  // "signalObjectsUnselected"
        QT_MOC_LITERAL(137, 18),  // "signalModelCleared"
        QT_MOC_LITERAL(156, 23),  // "signalModelLoadingStart"
        QT_MOC_LITERAL(180, 22),  // "signalModelLoadingDone"
        QT_MOC_LITERAL(203, 23)   // "signalCursorCoordinates"
    },
    "IfcPlusPlusSystem",
    "signalObjectsSelected",
    "",
    "std::unordered_map<std::string,shared_ptr<BuildingEntity>>&",
    "map_objects",
    "signalObjectsUnselected",
    "signalModelCleared",
    "signalModelLoadingStart",
    "signalModelLoadingDone",
    "signalCursorCoordinates"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_IfcPlusPlusSystem[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       5,    1,   53,    2, 0x06,    3 /* Public */,
       6,    0,   56,    2, 0x06,    5 /* Public */,
       7,    0,   57,    2, 0x06,    6 /* Public */,
       8,    0,   58,    2, 0x06,    7 /* Public */,
       9,    3,   59,    2, 0x06,    8 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject IfcPlusPlusSystem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_IfcPlusPlusSystem.offsetsAndSizes,
    qt_meta_data_IfcPlusPlusSystem,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_IfcPlusPlusSystem_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IfcPlusPlusSystem, std::true_type>,
        // method 'signalObjectsSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::unordered_map<std::string,shared_ptr<BuildingEntity> > &, std::false_type>,
        // method 'signalObjectsUnselected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::unordered_map<std::string,shared_ptr<BuildingEntity> > &, std::false_type>,
        // method 'signalModelCleared'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalModelLoadingStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalModelLoadingDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'signalCursorCoordinates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>
    >,
    nullptr
} };

void IfcPlusPlusSystem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IfcPlusPlusSystem *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalObjectsSelected((*reinterpret_cast< std::add_pointer_t<std::unordered_map<std::string,shared_ptr<BuildingEntity>>&>>(_a[1]))); break;
        case 1: _t->signalObjectsUnselected((*reinterpret_cast< std::add_pointer_t<std::unordered_map<std::string,shared_ptr<BuildingEntity>>&>>(_a[1]))); break;
        case 2: _t->signalModelCleared(); break;
        case 3: _t->signalModelLoadingStart(); break;
        case 4: _t->signalModelLoadingDone(); break;
        case 5: _t->signalCursorCoordinates((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IfcPlusPlusSystem::*)(std::unordered_map<std::string,shared_ptr<BuildingEntity> > & );
            if (_t _q_method = &IfcPlusPlusSystem::signalObjectsSelected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (IfcPlusPlusSystem::*)(std::unordered_map<std::string,shared_ptr<BuildingEntity> > & );
            if (_t _q_method = &IfcPlusPlusSystem::signalObjectsUnselected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (IfcPlusPlusSystem::*)();
            if (_t _q_method = &IfcPlusPlusSystem::signalModelCleared; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (IfcPlusPlusSystem::*)();
            if (_t _q_method = &IfcPlusPlusSystem::signalModelLoadingStart; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (IfcPlusPlusSystem::*)();
            if (_t _q_method = &IfcPlusPlusSystem::signalModelLoadingDone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (IfcPlusPlusSystem::*)(double , double , double );
            if (_t _q_method = &IfcPlusPlusSystem::signalCursorCoordinates; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *IfcPlusPlusSystem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IfcPlusPlusSystem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IfcPlusPlusSystem.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "osgGA::GUIEventHandler"))
        return static_cast< osgGA::GUIEventHandler*>(this);
    return QObject::qt_metacast(_clname);
}

int IfcPlusPlusSystem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void IfcPlusPlusSystem::signalObjectsSelected(std::unordered_map<std::string,shared_ptr<BuildingEntity> > & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void IfcPlusPlusSystem::signalObjectsUnselected(std::unordered_map<std::string,shared_ptr<BuildingEntity> > & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void IfcPlusPlusSystem::signalModelCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void IfcPlusPlusSystem::signalModelLoadingStart()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void IfcPlusPlusSystem::signalModelLoadingDone()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void IfcPlusPlusSystem::signalCursorCoordinates(double _t1, double _t2, double _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
