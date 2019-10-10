/****************************************************************************
** Meta object code from reading C++ file 'coolsocket.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../libs/coolsocket/include/coolsocket.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coolsocket.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CoolSocket__Server_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoolSocket__Server_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoolSocket__Server_t qt_meta_stringdata_CoolSocket__Server = {
    {
QT_MOC_LITERAL(0, 0, 18) // "CoolSocket::Server"

    },
    "CoolSocket::Server"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoolSocket__Server[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CoolSocket::Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CoolSocket::Server::staticMetaObject = { {
    &QTcpServer::staticMetaObject,
    qt_meta_stringdata_CoolSocket__Server.data,
    qt_meta_data_CoolSocket__Server,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CoolSocket::Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoolSocket::Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoolSocket__Server.stringdata0))
        return static_cast<void*>(this);
    return QTcpServer::qt_metacast(_clname);
}

int CoolSocket::Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTcpServer::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_CoolSocket__Connection_t {
    QByteArrayData data[5];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoolSocket__Connection_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoolSocket__Connection_t qt_meta_stringdata_CoolSocket__Connection = {
    {
QT_MOC_LITERAL(0, 0, 22), // "CoolSocket::Connection"
QT_MOC_LITERAL(1, 23, 5), // "reply"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 7), // "receive"
QT_MOC_LITERAL(4, 38, 8) // "Response"

    },
    "CoolSocket::Connection\0reply\0\0receive\0"
    "Response"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoolSocket__Connection[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       1,    1,   37,    2, 0x0a /* Public */,
       1,    1,   40,    2, 0x0a /* Public */,
       3,    0,   43,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    1,
    QMetaType::Void, QMetaType::QString,    1,
    QMetaType::Void, QMetaType::QByteArray,    1,
    0x80000000 | 4,

       0        // eod
};

void CoolSocket::Connection::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Connection *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->reply((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 1: _t->reply((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->reply((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 3: { Response _r = _t->receive();
            if (_a[0]) *reinterpret_cast< Response*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CoolSocket::Connection::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CoolSocket__Connection.data,
    qt_meta_data_CoolSocket__Connection,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CoolSocket::Connection::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoolSocket::Connection::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoolSocket__Connection.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CoolSocket::Connection::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
struct qt_meta_stringdata_CoolSocket__Client_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CoolSocket__Client_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CoolSocket__Client_t qt_meta_stringdata_CoolSocket__Client = {
    {
QT_MOC_LITERAL(0, 0, 18) // "CoolSocket::Client"

    },
    "CoolSocket::Client"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CoolSocket__Client[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void CoolSocket::Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject CoolSocket::Client::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CoolSocket__Client.data,
    qt_meta_data_CoolSocket__Client,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CoolSocket::Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CoolSocket::Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CoolSocket__Client.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CoolSocket::Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
