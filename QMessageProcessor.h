#ifndef QMESSAGEPROCESSOR_H
#define QMESSAGEPROCESSOR_H

#include <QObject>

#include "SConfig.h"



class QMessageProcessor : public QObject
{
	Q_OBJECT

private:
	SConfig m_config;

public:
	QMessageProcessor( const SConfig& config, QObject *parent = 0 );
	~QMessageProcessor();

};

#endif //QMESSAGEPROCESSOR_H
