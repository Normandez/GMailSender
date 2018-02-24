#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow( const CLogger& logger, QWidget *parent ) :
	QMainWindow( parent ),
	ui( new Ui::MainWindow ),
	m_logger( logger )
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}



//Button "Send" clicked
void MainWindow::on_bt_send_msg_clicked()
{
	QString from = ui->from_text_edit->toPlainText();
	QString to = ui->to_text_edit->toPlainText();
	QString text = ui->message_text_edit->toPlainText();

	emit mailReadySend( from, to, text );
}
