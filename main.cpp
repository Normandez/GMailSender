#include "mainwindow.h"
#include "SConfig.h"
#include "QMessageProcessor.h"
#include "CLogger.h"

#include <QApplication>
#include <QMessageBox>



int main( int argc, char *argv[] )
{
    QApplication app(argc, argv);
    MainWindow main_wnd;

	//Init logs
	CLogger logger( app.applicationDirPath() );
	{
		logger.Log( "Log-file opened and truncated" );
	}

	//Load config
	SConfig config;
	{
		QString confg_path = "C:/devel/GMailSender/gmailsender/config.xml";
		QString config_load_status;
		if ( !LoadConfig( config, confg_path, config_load_status ) )
		{
			QMessageBox err_msg_bx;
			err_msg_bx.setWindowTitle("Error");
			err_msg_bx.setText(config_load_status);
			logger.Log(config_load_status);

			err_msg_bx.exec();
			return 1;
		}

		logger.Log( "Config-file read successfully" );
	}

	QMessageProcessor message_processor( config, logger, &app );

	main_wnd.show();

    return app.exec();
}
