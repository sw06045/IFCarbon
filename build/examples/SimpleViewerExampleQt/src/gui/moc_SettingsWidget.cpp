/****************************************************************************
** Meta object code from reading C++ file 'SettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../examples/SimpleViewerExampleQt/src/gui/SettingsWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_SettingsWidget_t {
    uint offsetsAndSizes[20];
    char stringdata0[15];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[6];
    char stringdata5[19];
    char stringdata6[18];
    char stringdata7[19];
    char stringdata8[15];
    char stringdata9[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_SettingsWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_SettingsWidget_t qt_meta_stringdata_SettingsWidget = {
    {
        QT_MOC_LITERAL(0, 14),  // "SettingsWidget"
        QT_MOC_LITERAL(15, 24),  // "signalAutoHideFileWidget"
        QT_MOC_LITERAL(40, 0),  // ""
        QT_MOC_LITERAL(41, 22),  // "slotAutoHideFileWidget"
        QT_MOC_LITERAL(64, 5),  // "state"
        QT_MOC_LITERAL(70, 18),  // "slotCullFrontFaces"
        QT_MOC_LITERAL(89, 17),  // "slotCullBackFaces"
        QT_MOC_LITERAL(107, 18),  // "slotSetNumVertices"
        QT_MOC_LITERAL(126, 14),  // "slotShowCurves"
        QT_MOC_LITERAL(141, 23)   // "slotIgnoreProfileRadius"
    },
    "SettingsWidget",
    "signalAutoHideFileWidget",
    "",
    "slotAutoHideFileWidget",
    "state",
    "slotCullFrontFaces",
    "slotCullBackFaces",
    "slotSetNumVertices",
    "slotShowCurves",
    "slotIgnoreProfileRadius"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_SettingsWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   59,    2, 0x08,    3 /* Private */,
       5,    1,   62,    2, 0x08,    5 /* Private */,
       6,    1,   65,    2, 0x08,    7 /* Private */,
       7,    1,   68,    2, 0x08,    9 /* Private */,
       8,    1,   71,    2, 0x08,   11 /* Private */,
       9,    1,   74,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject SettingsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_SettingsWidget.offsetsAndSizes,
    qt_meta_data_SettingsWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_SettingsWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SettingsWidget, std::true_type>,
        // method 'signalAutoHideFileWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotAutoHideFileWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotCullFrontFaces'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotCullBackFaces'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSetNumVertices'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotShowCurves'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotIgnoreProfileRadius'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void SettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalAutoHideFileWidget((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->slotAutoHideFileWidget((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->slotCullFrontFaces((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->slotCullBackFaces((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->slotSetNumVertices((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->slotShowCurves((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->slotIgnoreProfileRadius((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SettingsWidget::*)(bool );
            if (_t _q_method = &SettingsWidget::signalAutoHideFileWidget; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *SettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int SettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SettingsWidget::signalAutoHideFileWidget(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
