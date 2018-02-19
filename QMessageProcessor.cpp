#include "QMessageProcessor.h"



QMessageProcessor::QMessageProcessor( const SConfig& config, const CLogger& logger, QObject *parent )
	: QObject(parent),
	  m_config(config),
	  m_logger( logger )
{ }



QMessageProcessor::~QMessageProcessor() { }



void QMessageProcessor::Start()
{

}
