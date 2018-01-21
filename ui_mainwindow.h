/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *message_text_edit;
    QLabel *label_message_edit;
    QTextEdit *to_text_edit;
    QLabel *label_to_name;
    QPushButton *bt_send_msg;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(753, 492);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        message_text_edit = new QPlainTextEdit(centralWidget);
        message_text_edit->setObjectName(QStringLiteral("message_text_edit"));
        message_text_edit->setGeometry(QRect(70, 120, 371, 231));
        label_message_edit = new QLabel(centralWidget);
        label_message_edit->setObjectName(QStringLiteral("label_message_edit"));
        label_message_edit->setGeometry(QRect(70, 100, 81, 16));
        to_text_edit = new QTextEdit(centralWidget);
        to_text_edit->setObjectName(QStringLiteral("to_text_edit"));
        to_text_edit->setGeometry(QRect(100, 60, 341, 31));
        label_to_name = new QLabel(centralWidget);
        label_to_name->setObjectName(QStringLiteral("label_to_name"));
        label_to_name->setGeometry(QRect(70, 70, 21, 16));
        bt_send_msg = new QPushButton(centralWidget);
        bt_send_msg->setObjectName(QStringLiteral("bt_send_msg"));
        bt_send_msg->setGeometry(QRect(360, 370, 80, 21));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_message_edit->setText(QApplication::translate("MainWindow", "Your message:", Q_NULLPTR));
        label_to_name->setText(QApplication::translate("MainWindow", "To:", Q_NULLPTR));
        bt_send_msg->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
