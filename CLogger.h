#ifndef CLOGGER_H
#define CLOGGER_H

#include <QString>
#include <QFile>
#include <QTextStream>



class CLogger
{
private:
	QString m_log_name;

public:
	explicit CLogger( QString log_dir );
	~CLogger();

	void Log( const QString& log_msg );

};

#endif // CLOGGER_H
