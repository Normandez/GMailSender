#include "SConfig.h"



void LoadConfig( SConfig& config, const QString& config_file_name )
{
	//Open and read config
	QFile config_file(config_file_name);
	QDomDocument dom_config_file;
	if ( !config_file.open( QFile::ReadOnly ) )
	{
		return ;
	}
	else
	{
		dom_config_file.setContent( &config_file );
	}

	QDomElement root = dom_config_file.documentElement();
	config.google_access_token = root.firstChildElement( "google_access_token" ).text();

	config_file.close();
}