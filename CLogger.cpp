#include "CLogger.h"



CLogger::CLogger( QString log_dir )
{
	m_log_name = log_dir + "/logs.txt";

	QFile log_file( m_log_name );
	log_file.remove();
}



CLogger::~CLogger(){ }



void CLogger::Log( const QString& log_msg )
{
	QFile log_file( m_log_name );
	log_file.open( QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append );

	QTextStream log_output( &log_file );
	log_output << "> " << log_msg << endl;
	log_file.close();
}
