#include "QGMailManager.h"



QGMailManager::QGMailManager( const SConfig& config, const CLogger& logger, QObject *parent )
	: QObject( parent ),
	m_config( config ),
	m_logger( logger )
{ }



QGMailManager::~QGMailManager() { }



//When e-mail request string ready to be sent
void QGMailManager::onMailRequestReady( const QString& request_str )
{
	SendMail( request_str );
}



//Sending e-mail
void QGMailManager::SendMail( const QString& request )
{
	
}
