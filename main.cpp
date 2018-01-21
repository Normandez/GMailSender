#include "mainwindow.h"
#include <QApplication>

#include "SConfig.h"
#include "QMessageProcessor.h"



int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MainWindow main_wnd;

	SConfig config;
	LoadConfig( config, "C:/devel/GMailSender/gmailsender/config.xml" );

	QMessageProcessor msg_proc( config, &app );

	main_wnd.show();

    return app.exec();
}
