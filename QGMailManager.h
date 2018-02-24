#ifndef QGMAILMANAGER_H
#define QGMAILMANAGER_H

#include "CLogger.h"
#include "SConfig.h"

#include <QObject>



class QGMailManager : public QObject
{
	Q_OBJECT

private:
	SConfig m_config;
	CLogger m_logger;

	void SendMail( const QString& request );

public:
	QGMailManager( const SConfig& config, const CLogger& logger, QObject *parent = 0 );
	~QGMailManager();

private slots:
	void onMailRequestReady( const QString& request_str );

};

#endif // QGMAILMANAGER_H
