/****************************************************************************
** Meta object code from reading C++ file 'EntityAttributeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../examples/SimpleViewerExampleQt/src/gui/EntityAttributeWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntityAttributeWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_EntityAttributeWidget_t {
    uint offsetsAndSizes[34];
    char stringdata0[22];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[60];
    char stringdata4[4];
    char stringdata5[22];
    char stringdata6[31];
    char stringdata7[17];
    char stringdata8[8];
    char stringdata9[9];
    char stringdata10[17];
    char stringdata11[16];
    char stringdata12[17];
    char stringdata13[22];
    char stringdata14[21];
    char stringdata15[21];
    char stringdata16[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_EntityAttributeWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_EntityAttributeWidget_t qt_meta_stringdata_EntityAttributeWidget = {
    {
        QT_MOC_LITERAL(0, 21),  // "EntityAttributeWidget"
        QT_MOC_LITERAL(22, 19),  // "slotObjectsSelected"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 59),  // "std::unordered_map<std::strin..."
        QT_MOC_LITERAL(103, 3),  // "map"
        QT_MOC_LITERAL(107, 21),  // "slotObjectsUnselected"
        QT_MOC_LITERAL(129, 30),  // "slotTreewidgetSelectionChanged"
        QT_MOC_LITERAL(160, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(177, 7),  // "current"
        QT_MOC_LITERAL(185, 8),  // "previous"
        QT_MOC_LITERAL(194, 16),  // "slotItemExpanded"
        QT_MOC_LITERAL(211, 15),  // "slotItemChanged"
        QT_MOC_LITERAL(227, 16),  // "slotModelCleared"
        QT_MOC_LITERAL(244, 21),  // "slotModelLoadingStart"
        QT_MOC_LITERAL(266, 20),  // "slotModelLoadingDone"
        QT_MOC_LITERAL(287, 20),  // "slotExpandOneClicked"
        QT_MOC_LITERAL(308, 22)   // "slotCollapseOneClicked"
    },
    "EntityAttributeWidget",
    "slotObjectsSelected",
    "",
    "std::unordered_map<std::string,shared_ptr<BuildingEntity>>&",
    "map",
    "slotObjectsUnselected",
    "slotTreewidgetSelectionChanged",
    "QTreeWidgetItem*",
    "current",
    "previous",
    "slotItemExpanded",
    "slotItemChanged",
    "slotModelCleared",
    "slotModelLoadingStart",
    "slotModelLoadingDone",
    "slotExpandOneClicked",
    "slotCollapseOneClicked"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_EntityAttributeWidget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x0a,    1 /* Public */,
       5,    1,   77,    2, 0x0a,    3 /* Public */,
       6,    2,   80,    2, 0x0a,    5 /* Public */,
      10,    1,   85,    2, 0x0a,    8 /* Public */,
      11,    2,   88,    2, 0x0a,   10 /* Public */,
      12,    0,   93,    2, 0x0a,   13 /* Public */,
      13,    0,   94,    2, 0x0a,   14 /* Public */,
      14,    0,   95,    2, 0x0a,   15 /* Public */,
      15,    0,   96,    2, 0x0a,   16 /* Public */,
      16,    0,   97,    2, 0x0a,   17 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 7,    8,    9,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject EntityAttributeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_EntityAttributeWidget.offsetsAndSizes,
    qt_meta_data_EntityAttributeWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_EntityAttributeWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EntityAttributeWidget, std::true_type>,
        // method 'slotObjectsSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::unordered_map<std::string,shared_ptr<BuildingEntity> > &, std::false_type>,
        // method 'slotObjectsUnselected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::unordered_map<std::string,shared_ptr<BuildingEntity> > &, std::false_type>,
        // method 'slotTreewidgetSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'slotItemExpanded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'slotItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotModelCleared'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotModelLoadingStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotModelLoadingDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotExpandOneClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCollapseOneClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void EntityAttributeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EntityAttributeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotObjectsSelected((*reinterpret_cast< std::add_pointer_t<std::unordered_map<std::string,shared_ptr<BuildingEntity>>&>>(_a[1]))); break;
        case 1: _t->slotObjectsUnselected((*reinterpret_cast< std::add_pointer_t<std::unordered_map<std::string,shared_ptr<BuildingEntity>>&>>(_a[1]))); break;
        case 2: _t->slotTreewidgetSelectionChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 3: _t->slotItemExpanded((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 4: _t->slotItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->slotModelCleared(); break;
        case 6: _t->slotModelLoadingStart(); break;
        case 7: _t->slotModelLoadingDone(); break;
        case 8: _t->slotExpandOneClicked(); break;
        case 9: _t->slotCollapseOneClicked(); break;
        default: ;
        }
    }
}

const QMetaObject *EntityAttributeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EntityAttributeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EntityAttributeWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int EntityAttributeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
