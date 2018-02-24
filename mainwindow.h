#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "CLogger.h"

#include <QMainWindow>

#include <QString>



namespace Ui {
class MainWindow;
}



class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow( const CLogger& logger, QWidget *parent = 0 );
    ~MainWindow();

private:
    Ui::MainWindow *ui;

	CLogger m_logger;

signals:
	void mailReadySend( const QString& mail_sender, const QString& mail_receiver, const QString& mail_text );

public slots:
	void on_bt_send_msg_clicked();

};

#endif // MAINWINDOW_Hs
