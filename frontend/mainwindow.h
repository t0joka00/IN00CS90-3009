#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QJsonDocument>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QNetworkAccessManager *getManager;
    QNetworkAccessManager *postManager;
    QNetworkAccessManager *putManager;
    QNetworkReply *reply;
    QByteArray response_data;

private slots:
    void getCarSlot (QNetworkReply *reply);
    void on_btnGetCar_clicked();

    void addCarSlot (QNetworkReply *reply);
    void on_btnAddCar_clicked();

    void updateCarSlot (QNetworkReply *reply);
};

#endif // MAINWINDOW_H
