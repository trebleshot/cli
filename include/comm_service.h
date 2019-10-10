/*
* Copyright (C) 2019 Veli Tasalı, created on 10/9/19
* 
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
*/

#pragma once

#include <QtCore/QObject>
#include <QDebug>
#include <QThread>
#include <QHostAddress>
#include <coolsocket.h>

namespace CoolSocket {
	extern const quint16 DEFAULT_PORT;
	extern const quint16 THREAD_POOL;
}

namespace Links {
	class Connection;

	class Delegate;
}

class Links::Delegate : public QObject {
Q_OBJECT

	CoolSocket::Server m_server;

public:
	explicit Delegate(quint16 port, QObject *parent = nullptr);

public slots:

	void acceptConnection();
};

class Links::Connection : public QThread {
Q_OBJECT

};
