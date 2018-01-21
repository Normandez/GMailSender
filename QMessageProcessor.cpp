#include "QMessageProcessor.h"



QMessageProcessor::QMessageProcessor( const SConfig& config, const QNotifier& notifier, QObject *parent )
	: QObject(parent),
	  m_config(config),
	  m_notifier(notifier)
{

}



QMessageProcessor::~QMessageProcessor() {}
