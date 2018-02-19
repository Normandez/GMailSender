#include "SConfig.h"



bool LoadConfig( SConfig& config, const QString& config_file_name, QString& status )
{
	//Open and read config
	QFile config_file(config_file_name);
	QDomDocument dom_config_file;
	if ( !config_file.open( QFile::ReadOnly ) )
	{
		status = "config.xml not opened!";
		return false;
	}

	if ( !dom_config_file.setContent( &config_file ) )
	{
		status = "Invalid config!";
		return false;
	}
	QDomElement root = dom_config_file.documentElement();
	config.google_access_token = root.firstChildElement( "google_access_token" ).text();

	config_file.close();

	return true;
}
