#include "QMailProcessor.h"



QMailProcessor::QMailProcessor( const SConfig& config, const CLogger& logger, QObject *parent )
	: QObject(parent),
	  m_config(config),
	  m_logger( logger )
{ }



QMailProcessor::~QMailProcessor() { }



//When e-mail ready to be sent
void QMailProcessor::onMailReadySend( const QString& mail_sender, const QString& mail_receiver, const QString& mail_text )
{
	SendMail( mail_sender, mail_receiver, mail_text );
}



//Sending e-mail
void QMailProcessor::SendMail( const QString& sender, const QString& receiver, const QString& text )
{
	QString request_string;

	request_string = PrepareMailString(sender, receiver, text);

	emit sendMail( request_string );
}



//Prepare e-mail to send and generate request string
QString QMailProcessor::PrepareMailString( const QString& input_sender, const QString& input_receiver, const QString& input_text )
{
	QString request = "";

	return request;
}
