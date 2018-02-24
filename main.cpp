#include "mainwindow.h"
#include "SConfig.h"
#include "QMailProcessor.h"
#include "CLogger.h"
#include "QGMailManager.h"

#include <QApplication>
#include <QMessageBox>



int main( int argc, char *argv[] )
{
    QApplication app(argc, argv);

	//Init logs area
	CLogger logger( app.applicationDirPath() );
	{
		logger.Log( "Log-file opened and truncated" );
	}

	//Load config area
	SConfig config;
	{
		QString confg_path = "C:/devel/GMailSender/gmailsender/config.xml";
		QString config_load_status;
		if ( !LoadConfig( config, confg_path, config_load_status ) )
		{
			QMessageBox err_msg_bx;
			err_msg_bx.setWindowTitle( "Error" );
			err_msg_bx.setText( config_load_status );
			logger.Log( config_load_status );

			err_msg_bx.exec();
			return 1;
		}

		logger.Log( "Config-file read successfully" );
	}

	//Init GUI area
    MainWindow main_wnd( logger );
	main_wnd.show();

	//Init base components area
	QMailProcessor mail_processor( config, logger, &app );
	QGMailManager gmail_manager( config, logger, &app );

	//Connections area
	{
		bool connection_chk;

		connection_chk = QObject::connect(  &main_wnd, SIGNAL( mailReadySend( const QString&, const QString&, const QString& ) ), &mail_processor, SLOT( onMailReadySend( const QString&, const QString&, const QString& ) )  );
		if ( !connection_chk )
		{
			QMessageBox err_msg_bx;
			err_msg_bx.setWindowTitle( "Critical error" );
			err_msg_bx.setText( "See logs" );
			logger.Log( "Can't connect main_wnd to mail_processor. Connect position -- 1." );

			err_msg_bx.exec();
			return 2;
		}

		connection_chk = QObject::connect(  &mail_processor, SIGNAL( sendMail( const QString& ) ), &gmail_manager, SLOT( onMailRequestReady( const QString& ) )  );
		if ( !connection_chk )
		{
			QMessageBox err_msg_bx;
			err_msg_bx.setWindowTitle( "Critical error" );
			err_msg_bx.setText( "See logs" );
			logger.Log( "Can't connect mail_processor to gmail_manager. Connect position -- 2." );

			err_msg_bx.exec();
			return 2;
		}

	}

    return app.exec();
}
