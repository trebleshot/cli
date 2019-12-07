#include <QCoreApplication>
#include <QtCore/QCommandLineParser>
#include <comm_service.h>

int main(int argc, char **argv)
{
	QCoreApplication qApplication(argc, argv);
	QCoreApplication::setApplicationName("links");
	QCoreApplication::setApplicationVersion("0.1.0");

	QCommandLineParser parser;

	QCommandLineOption runOption({"r", "run"}, "Run the communication service.");
	QCommandLineOption portOption({"p", "port"}, "Port to run the communication service on.",
	                              "int", QString(CoolSocket::DEFAULT_PORT));

	parser.setApplicationDescription("links is a CLI client for TrebleShot");
	parser.addHelpOption();
	parser.addVersionOption();
	parser.addOption(runOption);
	parser.addOption(portOption);
	parser.process(qApplication);

	if (parser.isSet(runOption)) {
		bool portValid = false;
		int port = parser.value(portOption).toInt(&portValid);

		if (port <= 65535 && port >= 0 && portValid) {
			Links::Delegate delegate(port);
			return delegate.run();
		} else
			qCritical("The port number you entered is not valid.");
	}

	return 0;
}