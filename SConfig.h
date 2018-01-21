#ifndef SCONFIG_H
#define SCONFIG_H

#include <QString>
#include <QFile>
#include <QDomDocument>



struct SConfig
{
	QString google_access_token;

};



void LoadConfig( SConfig& config, const QString& config_file_name );

#endif //SCONFIG_H