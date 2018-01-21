#include "QMessageProcessor.h"



QMessageProcessor::QMessageProcessor( const SConfig& config, QObject *parent )
	: QObject(parent),
	  m_config(config)
{

}



QMessageProcessor::~QMessageProcessor() {}
