/****************************************************************************
** Meta object code from reading C++ file 'scene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "scene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scene_t {
    QByteArrayData data[35];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scene_t qt_meta_stringdata_Scene = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Scene"
QT_MOC_LITERAL(1, 6, 21), // "displayBufferContents"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 2), // "id"
QT_MOC_LITERAL(4, 32, 5), // "label"
QT_MOC_LITERAL(5, 38, 3), // "img"
QT_MOC_LITERAL(6, 42, 12), // "setSceneNode"
QT_MOC_LITERAL(7, 55, 4), // "node"
QT_MOC_LITERAL(8, 60, 9), // "setShader"
QT_MOC_LITERAL(9, 70, 6), // "shader"
QT_MOC_LITERAL(10, 77, 18), // "setBackgroundColor"
QT_MOC_LITERAL(11, 96, 3), // "rgb"
QT_MOC_LITERAL(12, 100, 15), // "toggleAnimation"
QT_MOC_LITERAL(13, 116, 4), // "flag"
QT_MOC_LITERAL(14, 121, 17), // "setLightIntensity"
QT_MOC_LITERAL(15, 139, 6), // "size_t"
QT_MOC_LITERAL(16, 146, 1), // "i"
QT_MOC_LITERAL(17, 148, 1), // "v"
QT_MOC_LITERAL(18, 150, 13), // "keyPressEvent"
QT_MOC_LITERAL(19, 164, 10), // "QKeyEvent*"
QT_MOC_LITERAL(20, 175, 5), // "event"
QT_MOC_LITERAL(21, 181, 15), // "mousePressEvent"
QT_MOC_LITERAL(22, 197, 12), // "QMouseEvent*"
QT_MOC_LITERAL(23, 210, 14), // "mouseMoveEvent"
QT_MOC_LITERAL(24, 225, 17), // "mouseReleaseEvent"
QT_MOC_LITERAL(25, 243, 10), // "wheelEvent"
QT_MOC_LITERAL(26, 254, 12), // "QWheelEvent*"
QT_MOC_LITERAL(27, 267, 4), // "draw"
QT_MOC_LITERAL(28, 272, 6), // "update"
QT_MOC_LITERAL(29, 279, 14), // "updateViewport"
QT_MOC_LITERAL(30, 294, 5), // "width"
QT_MOC_LITERAL(31, 300, 6), // "height"
QT_MOC_LITERAL(32, 307, 13), // "setRotateAxis"
QT_MOC_LITERAL(33, 321, 13), // "RotateY::Axis"
QT_MOC_LITERAL(34, 335, 4) // "axis"

    },
    "Scene\0displayBufferContents\0\0id\0label\0"
    "img\0setSceneNode\0node\0setShader\0shader\0"
    "setBackgroundColor\0rgb\0toggleAnimation\0"
    "flag\0setLightIntensity\0size_t\0i\0v\0"
    "keyPressEvent\0QKeyEvent*\0event\0"
    "mousePressEvent\0QMouseEvent*\0"
    "mouseMoveEvent\0mouseReleaseEvent\0"
    "wheelEvent\0QWheelEvent*\0draw\0update\0"
    "updateViewport\0width\0height\0setRotateAxis\0"
    "RotateY::Axis\0axis"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   96,    2, 0x0a /* Public */,
       8,    1,   99,    2, 0x0a /* Public */,
      10,    1,  102,    2, 0x0a /* Public */,
      12,    1,  105,    2, 0x0a /* Public */,
      14,    2,  108,    2, 0x0a /* Public */,
      18,    1,  113,    2, 0x0a /* Public */,
      21,    1,  116,    2, 0x0a /* Public */,
      23,    1,  119,    2, 0x0a /* Public */,
      24,    1,  122,    2, 0x0a /* Public */,
      25,    1,  125,    2, 0x0a /* Public */,
      27,    0,  128,    2, 0x0a /* Public */,
      28,    0,  129,    2, 0x0a /* Public */,
      29,    2,  130,    2, 0x0a /* Public */,
      32,    1,  135,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::UInt, QMetaType::QString, QMetaType::QImage,    3,    4,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QVector3D,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15, QMetaType::Float,   16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 22,   20,
    QMetaType::Void, 0x80000000 | 26,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, 0x80000000 | 15,   30,   31,
    QMetaType::Void, 0x80000000 | 33,   34,

       0        // eod
};

void Scene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Scene *_t = static_cast<Scene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayBufferContents((*reinterpret_cast< uint(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< const QImage(*)>(_a[3]))); break;
        case 1: _t->setSceneNode((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->setShader((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setBackgroundColor((*reinterpret_cast< QVector3D(*)>(_a[1]))); break;
        case 4: _t->toggleAnimation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->setLightIntensity((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 6: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 7: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 8: _t->mouseMoveEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 9: _t->mouseReleaseEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 10: _t->wheelEvent((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 11: _t->draw(); break;
        case 12: _t->update(); break;
        case 13: _t->updateViewport((*reinterpret_cast< size_t(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 14: _t->setRotateAxis((*reinterpret_cast< RotateY::Axis(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Scene::*_t)(unsigned int , QString , const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Scene::displayBufferContents)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Scene::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Scene.data,
      qt_meta_data_Scene,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Scene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scene::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scene.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QObject::qt_metacast(_clname);
}

int Scene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Scene::displayBufferContents(unsigned int _t1, QString _t2, const QImage & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
