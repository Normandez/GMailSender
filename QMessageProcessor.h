#ifndef QMESSAGEPROCESSOR_H
#define QMESSAGEPROCESSOR_H

#include <QObject>

#include "SConfig.h"
#include "QNotifier.h"



class QMessageProcessor : public QObject
{
	Q_OBJECT

private:
	SConfig m_config;
	QNotifier m_notifier;

public:
	QMessageProcessor( const SConfig& config, const QNotifier& notifier, QObject *parent = 0 );
	~QMessageProcessor();

};

#endif //QMESSAGEPROCESSOR_H
