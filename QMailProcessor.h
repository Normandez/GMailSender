#ifndef QMAILPROCESSOR_H
#define QMAILPROCESSOR_H

#include <QObject>

#include "SConfig.h"
#include "CLogger.h"



class QMailProcessor : public QObject
{
	Q_OBJECT

private:
	SConfig m_config;
	CLogger m_logger;

	void SendMail( const QString& sender, const QString& receiver, const QString& text );

public:
	QMailProcessor( const SConfig& config, const CLogger& logger, QObject *parent = 0 );
	~QMailProcessor();

	QString PrepareMailString( const QString& input_sender, const QString& input_receiver, const QString& input_text );

signals:
	void sendMail( const QString& mail_str );

private slots:
	void onMailReadySend( const QString& mail_sender, const QString& mail_receiver, const QString& mail_text );

};

#endif //QMAILPROCESSOR_H
