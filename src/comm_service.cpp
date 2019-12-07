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

#include <comm_service.h>
#include <QtCore/QCoreApplication>

namespace CoolSocket {
	const quint16 DEFAULT_PORT = 4632;
}

void Links::Delegate::acceptConnection()
{
	QTcpSocket *socket = m_server.nextPendingConnection();

	if (socket != nullptr) {
		serve(socket);
	} else
		qWarning() << "acceptConnection failed with nullptr connection";
}

Links::Delegate::Delegate(quint16 port, QObject *parent)
		: QObject(parent), m_server(QHostAddress("0.0.0.0"), port)
{
	QObject::connect(&m_server, &CoolSocket::Server::newConnection, this, &Delegate::acceptConnection);
}

void Links::Delegate::serve(QTcpSocket *socket) const
{
	CoolSocket::Connection connection(socket);

	qDebug() << "New connection request from" << connection.socket()->peerAddress();

	const auto &response = connection.receive();

	qDebug() << "Received reply" << response.msg;

	connection.reply(response.msg);
}

int Links::Delegate::run()
{
	if (m_server.start()) {
		qInfo() << "Waiting for connections on" << m_server.port();
		return QCoreApplication::exec();
	}

	return -1;
}
