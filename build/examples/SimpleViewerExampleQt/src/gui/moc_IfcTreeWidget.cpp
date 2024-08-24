/****************************************************************************
** Meta object code from reading C++ file 'IfcTreeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../examples/SimpleViewerExampleQt/src/gui/IfcTreeWidget.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'IfcTreeWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_IfcTreeWidget_t {
    uint offsetsAndSizes[40];
    char stringdata0[14];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[27];
    char stringdata4[7];
    char stringdata5[12];
    char stringdata6[5];
    char stringdata7[20];
    char stringdata8[60];
    char stringdata9[4];
    char stringdata10[31];
    char stringdata11[17];
    char stringdata12[8];
    char stringdata13[9];
    char stringdata14[30];
    char stringdata15[5];
    char stringdata16[7];
    char stringdata17[17];
    char stringdata18[22];
    char stringdata19[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_IfcTreeWidget_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_IfcTreeWidget_t qt_meta_stringdata_IfcTreeWidget = {
    {
        QT_MOC_LITERAL(0, 13),  // "IfcTreeWidget"
        QT_MOC_LITERAL(14, 18),  // "signalZoomToObject"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 26),  // "shared_ptr<BuildingEntity>"
        QT_MOC_LITERAL(61, 6),  // "object"
        QT_MOC_LITERAL(68, 11),  // "osg::Group*"
        QT_MOC_LITERAL(80, 4),  // "node"
        QT_MOC_LITERAL(85, 19),  // "slotObjectsSelected"
        QT_MOC_LITERAL(105, 59),  // "std::unordered_map<std::strin..."
        QT_MOC_LITERAL(165, 3),  // "map"
        QT_MOC_LITERAL(169, 30),  // "slotTreewidgetSelectionChanged"
        QT_MOC_LITERAL(200, 16),  // "QTreeWidgetItem*"
        QT_MOC_LITERAL(217, 7),  // "current"
        QT_MOC_LITERAL(225, 8),  // "previous"
        QT_MOC_LITERAL(234, 29),  // "slotTreeWidgetItemDoubleClick"
        QT_MOC_LITERAL(264, 4),  // "item"
        QT_MOC_LITERAL(269, 6),  // "column"
        QT_MOC_LITERAL(276, 16),  // "slotModelCleared"
        QT_MOC_LITERAL(293, 21),  // "slotModelLoadingStart"
        QT_MOC_LITERAL(315, 20)   // "slotModelLoadingDone"
    },
    "IfcTreeWidget",
    "signalZoomToObject",
    "",
    "shared_ptr<BuildingEntity>",
    "object",
    "osg::Group*",
    "node",
    "slotObjectsSelected",
    "std::unordered_map<std::string,shared_ptr<BuildingEntity>>&",
    "map",
    "slotTreewidgetSelectionChanged",
    "QTreeWidgetItem*",
    "current",
    "previous",
    "slotTreeWidgetItemDoubleClick",
    "item",
    "column",
    "slotModelCleared",
    "slotModelLoadingStart",
    "slotModelLoadingDone"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_IfcTreeWidget[] = {

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
       1,    1,   67,    2, 0x26,    4 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   70,    2, 0x0a,    6 /* Public */,
      10,    2,   73,    2, 0x0a,    8 /* Public */,
      14,    2,   78,    2, 0x0a,   11 /* Public */,
      17,    0,   83,    2, 0x0a,   14 /* Public */,
      18,    0,   84,    2, 0x0a,   15 /* Public */,
      19,    0,   85,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   12,   13,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject IfcTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_IfcTreeWidget.offsetsAndSizes,
    qt_meta_data_IfcTreeWidget,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_IfcTreeWidget_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<IfcTreeWidget, std::true_type>,
        // method 'signalZoomToObject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<shared_ptr<BuildingEntity>, std::false_type>,
        QtPrivate::TypeAndForceComplete<osg::Group *, std::false_type>,
        // method 'signalZoomToObject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<shared_ptr<BuildingEntity>, std::false_type>,
        // method 'slotObjectsSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::unordered_map<std::string,shared_ptr<BuildingEntity> > &, std::false_type>,
        // method 'slotTreewidgetSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'slotTreeWidgetItemDoubleClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotModelCleared'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotModelLoadingStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotModelLoadingDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void IfcTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<IfcTreeWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signalZoomToObject((*reinterpret_cast< std::add_pointer_t<shared_ptr<BuildingEntity>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<osg::Group*>>(_a[2]))); break;
        case 1: _t->signalZoomToObject((*reinterpret_cast< std::add_pointer_t<shared_ptr<BuildingEntity>>>(_a[1]))); break;
        case 2: _t->slotObjectsSelected((*reinterpret_cast< std::add_pointer_t<std::unordered_map<std::string,shared_ptr<BuildingEntity>>&>>(_a[1]))); break;
        case 3: _t->slotTreewidgetSelectionChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[2]))); break;
        case 4: _t->slotTreeWidgetItemDoubleClick((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->slotModelCleared(); break;
        case 6: _t->slotModelLoadingStart(); break;
        case 7: _t->slotModelLoadingDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (IfcTreeWidget::*)(shared_ptr<BuildingEntity> , osg::Group * );
            if (_t _q_method = &IfcTreeWidget::signalZoomToObject; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *IfcTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IfcTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IfcTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int IfcTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
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
void IfcTreeWidget::signalZoomToObject(shared_ptr<BuildingEntity> _t1, osg::Group * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
