#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setupMainBackground(":/resources/img/general/cielo.png");
    startFechaActualTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setupMainBackground(QString image)
{
    QPixmap bkgnd(image);
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

void MainWindow::startFechaActualTimer()
{
    timer= new QTimer(this);
    connect(timer, SIGNAL(timeout()),this,SLOT(updateFecha()));
    timer->start(1000); //Interrumpe cada 1seg
}

void MainWindow::updateFecha()
{
    QDateTime mydate= QDateTime::currentDateTime();
    QString horaActual= mydate.toString("hh:mm:ss");
    QString fechaActual= mydate.toString("dd")+" de "+mydate.toString("MMMM")+" de "+mydate.toString("yyyy");

    ui->horaActual_Label->setText(horaActual);
    ui->fechaActual_Label->setText(fechaActual);
}

