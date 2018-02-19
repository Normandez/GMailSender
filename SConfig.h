#ifndef SCONFIG_H
#define SCONFIG_H

#include <QString>
#include <QFile>
#include <QDomDocument>



struct SConfig
{
	QString google_access_token;

};



bool LoadConfig( SConfig& config, const QString& config_file_name, QString& status );

#endif //SCONFIG_H