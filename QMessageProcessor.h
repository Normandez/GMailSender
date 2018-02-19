#ifndef QMESSAGEPROCESSOR_H
#define QMESSAGEPROCESSOR_H

#include <QObject>

#include "SConfig.h"
#include "CLogger.h"



class QMessageProcessor : public QObject
{
	Q_OBJECT

private:
	SConfig m_config;
	CLogger m_logger;

public:
	QMessageProcessor( const SConfig& config, const CLogger& logger, QObject *parent = 0 );
	~QMessageProcessor();

	void Start();

};

#endif //QMESSAGEPROCESSOR_H
