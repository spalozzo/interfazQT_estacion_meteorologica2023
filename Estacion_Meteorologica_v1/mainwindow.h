#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include <QIcon>
#include <QFile>
#include <QDateTime>
#include <QTimer>
#include <QDir>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void updateFecha(void);

private:
    Ui::MainWindow *ui;

    QTimer *timer;

    void setupMainBackground(QString);
    void startFechaActualTimer(void);

};
#endif // MAINWINDOW_H
