/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *tituloPrincipal;
    QWidget *gridLayoutWidget_7;
    QGridLayout *generalGridLayout;
    QGroupBox *conexionesGridGroupBox;
    QGridLayout *conexionLayout;
    QCheckBox *WIFI_checkBox;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_4;
    QCheckBox *USB_checkBox;
    QGroupBox *sensoresVerticalGroupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_27;
    QHBoxLayout *sesnoresHorizontalLayout;
    QGroupBox *temperaturaVerticalGroupBox;
    QVBoxLayout *verticalLayout_12;
    QGridLayout *gridLayout_2;
    QLabel *temperaturaValor_Label;
    QLabel *label_21;
    QFrame *line_4;
    QLabel *label_45;
    QGroupBox *humedadVerticalGroupBox;
    QVBoxLayout *verticalLayout_11;
    QGridLayout *gridLayout_3;
    QLabel *label_37;
    QLabel *label_44;
    QLabel *humedadValor_Label;
    QFrame *line_5;
    QGroupBox *presionVerticalGroupBox;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_4;
    QLabel *label_43;
    QLabel *presionValor_Label;
    QLabel *label_35;
    QFrame *line_6;
    QGroupBox *luzVerticalGroupBox;
    QVBoxLayout *verticalLayout_9;
    QGridLayout *gridLayout_5;
    QLabel *label_42;
    QLabel *label_33;
    QLabel *luzValor_Label;
    QFrame *line_7;
    QGroupBox *aireVerticalGroupBox;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *aireGridLayout;
    QLabel *aireLabel;
    QLabel *aireIconoLabel;
    QLabel *aireValor_Label;
    QFrame *line_8;
    QGroupBox *vientoVerticalGroupBox;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout_7;
    QLabel *vientoValor_Label;
    QLabel *label_28;
    QLabel *label_40;
    QFrame *line_9;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *fechaLayout;
    QLabel *label;
    QLabel *horaActual_Label;
    QFrame *line_10;
    QLabel *fechaActual_Label;
    QGroupBox *verticalGroupBox_2;
    QVBoxLayout *registroLayout;
    QLabel *label_3;
    QPushButton *verRegistro_pushButton;
    QPushButton *exportarRegistro_pushButton;
    QPushButton *vaciarRegistro_pushButton;
    QGroupBox *verticalGroupBox_21;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QLabel *salida4Estado_label;
    QLabel *salida4_IconoLabel;
    QPushButton *activar2_pushButton;
    QLabel *salida2_IconoLabel;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QLabel *salida2Estado_label;
    QPushButton *config1_pushButton;
    QLabel *salida1_IconoLabel;
    QPushButton *config3_pushButton;
    QPushButton *activar3_pushButton;
    QPushButton *activar1_pushButton;
    QPushButton *config4_pushButton;
    QPushButton *activar4_pushButton;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_17;
    QLabel *salida3Estado_label;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_13;
    QLabel *salida1Estado_label;
    QPushButton *config2_pushButton;
    QLabel *salida3_IconoLabel;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_10;
    QFrame *line_3;
    QFrame *line_2;
    QFrame *line;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(900, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(900, 500));
        MainWindow->setMaximumSize(QSize(900, 500));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/img/general/icon3.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tituloPrincipal = new QLabel(centralwidget);
        tituloPrincipal->setObjectName(QString::fromUtf8("tituloPrincipal"));
        tituloPrincipal->setGeometry(QRect(10, 10, 881, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI"));
        font.setPointSize(18);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        tituloPrincipal->setFont(font);
        tituloPrincipal->setCursor(QCursor(Qt::ArrowCursor));
        tituloPrincipal->setAlignment(Qt::AlignCenter);
        tituloPrincipal->setWordWrap(false);
        gridLayoutWidget_7 = new QWidget(centralwidget);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(10, 50, 881, 441));
        generalGridLayout = new QGridLayout(gridLayoutWidget_7);
        generalGridLayout->setObjectName(QString::fromUtf8("generalGridLayout"));
        generalGridLayout->setVerticalSpacing(10);
        generalGridLayout->setContentsMargins(0, 0, 0, 0);
        conexionesGridGroupBox = new QGroupBox(gridLayoutWidget_7);
        conexionesGridGroupBox->setObjectName(QString::fromUtf8("conexionesGridGroupBox"));
        conexionesGridGroupBox->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"font: 63 11pt \"Segoe UI Semibold\";"));
        conexionLayout = new QGridLayout(conexionesGridGroupBox);
        conexionLayout->setObjectName(QString::fromUtf8("conexionLayout"));
        conexionLayout->setVerticalSpacing(16);
        WIFI_checkBox = new QCheckBox(conexionesGridGroupBox);
        WIFI_checkBox->setObjectName(QString::fromUtf8("WIFI_checkBox"));
        WIFI_checkBox->setCheckable(false);
        WIFI_checkBox->setChecked(false);

        conexionLayout->addWidget(WIFI_checkBox, 2, 1, 1, 1);

        label_2 = new QLabel(conexionesGridGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(0, 24));
        label_2->setMaximumSize(QSize(16777215, 24));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 0);\n"
"font: 87 12pt \"Segoe UI Black\";"));
        label_2->setAlignment(Qt::AlignCenter);

        conexionLayout->addWidget(label_2, 1, 0, 1, 2);

        label_5 = new QLabel(conexionesGridGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        conexionLayout->addWidget(label_5, 4, 0, 1, 1);

        label_4 = new QLabel(conexionesGridGroupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        conexionLayout->addWidget(label_4, 2, 0, 1, 1);

        USB_checkBox = new QCheckBox(conexionesGridGroupBox);
        USB_checkBox->setObjectName(QString::fromUtf8("USB_checkBox"));
        USB_checkBox->setStyleSheet(QString::fromUtf8(""));
        USB_checkBox->setCheckable(false);

        conexionLayout->addWidget(USB_checkBox, 4, 1, 1, 1);


        generalGridLayout->addWidget(conexionesGridGroupBox, 1, 0, 1, 1);

        sensoresVerticalGroupBox = new QGroupBox(gridLayoutWidget_7);
        sensoresVerticalGroupBox->setObjectName(QString::fromUtf8("sensoresVerticalGroupBox"));
        sensoresVerticalGroupBox->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"font: 63 9pt \"Segoe UI Semibold\";"));
        verticalLayout_2 = new QVBoxLayout(sensoresVerticalGroupBox);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 3);
        label_27 = new QLabel(sensoresVerticalGroupBox);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setMinimumSize(QSize(640, 24));
        label_27->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 0);\n"
"font: 87 12pt \"Segoe UI Black\";"));
        label_27->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_27);

        sesnoresHorizontalLayout = new QHBoxLayout();
        sesnoresHorizontalLayout->setSpacing(3);
        sesnoresHorizontalLayout->setObjectName(QString::fromUtf8("sesnoresHorizontalLayout"));
        temperaturaVerticalGroupBox = new QGroupBox(sensoresVerticalGroupBox);
        temperaturaVerticalGroupBox->setObjectName(QString::fromUtf8("temperaturaVerticalGroupBox"));
        verticalLayout_12 = new QVBoxLayout(temperaturaVerticalGroupBox);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(-1, 2, -1, 2);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2->setHorizontalSpacing(0);
        temperaturaValor_Label = new QLabel(temperaturaVerticalGroupBox);
        temperaturaValor_Label->setObjectName(QString::fromUtf8("temperaturaValor_Label"));
        temperaturaValor_Label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(temperaturaValor_Label, 2, 1, 1, 1);

        label_21 = new QLabel(temperaturaVerticalGroupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy1);
        label_21->setMaximumSize(QSize(35, 35));
        label_21->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/sensores/temperatura.png")));
        label_21->setScaledContents(true);

        gridLayout_2->addWidget(label_21, 2, 0, 1, 1);

        line_4 = new QFrame(temperaturaVerticalGroupBox);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_4, 1, 0, 1, 2);

        label_45 = new QLabel(temperaturaVerticalGroupBox);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setFrameShape(QFrame::NoFrame);
        label_45->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_45, 0, 0, 1, 2);


        verticalLayout_12->addLayout(gridLayout_2);


        sesnoresHorizontalLayout->addWidget(temperaturaVerticalGroupBox);

        humedadVerticalGroupBox = new QGroupBox(sensoresVerticalGroupBox);
        humedadVerticalGroupBox->setObjectName(QString::fromUtf8("humedadVerticalGroupBox"));
        verticalLayout_11 = new QVBoxLayout(humedadVerticalGroupBox);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(-1, 2, -1, 2);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_37 = new QLabel(humedadVerticalGroupBox);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setMaximumSize(QSize(35, 35));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/sensores/humedad.png")));
        label_37->setScaledContents(true);
        label_37->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_37, 2, 0, 1, 1);

        label_44 = new QLabel(humedadVerticalGroupBox);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_44, 0, 0, 1, 2);

        humedadValor_Label = new QLabel(humedadVerticalGroupBox);
        humedadValor_Label->setObjectName(QString::fromUtf8("humedadValor_Label"));
        humedadValor_Label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(humedadValor_Label, 2, 1, 1, 1);

        line_5 = new QFrame(humedadVerticalGroupBox);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line_5, 1, 0, 1, 2);


        verticalLayout_11->addLayout(gridLayout_3);


        sesnoresHorizontalLayout->addWidget(humedadVerticalGroupBox);

        presionVerticalGroupBox = new QGroupBox(sensoresVerticalGroupBox);
        presionVerticalGroupBox->setObjectName(QString::fromUtf8("presionVerticalGroupBox"));
        verticalLayout_10 = new QVBoxLayout(presionVerticalGroupBox);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(-1, 2, -1, 2);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_43 = new QLabel(presionVerticalGroupBox);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_43, 0, 0, 1, 2);

        presionValor_Label = new QLabel(presionVerticalGroupBox);
        presionValor_Label->setObjectName(QString::fromUtf8("presionValor_Label"));
        presionValor_Label->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(presionValor_Label, 2, 1, 1, 1);

        label_35 = new QLabel(presionVerticalGroupBox);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setMaximumSize(QSize(35, 35));
        label_35->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/sensores/presion.png")));
        label_35->setScaledContents(true);
        label_35->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_35, 2, 0, 1, 1);

        line_6 = new QFrame(presionVerticalGroupBox);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_4->addWidget(line_6, 1, 0, 1, 2);


        verticalLayout_10->addLayout(gridLayout_4);


        sesnoresHorizontalLayout->addWidget(presionVerticalGroupBox);

        luzVerticalGroupBox = new QGroupBox(sensoresVerticalGroupBox);
        luzVerticalGroupBox->setObjectName(QString::fromUtf8("luzVerticalGroupBox"));
        verticalLayout_9 = new QVBoxLayout(luzVerticalGroupBox);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(-1, 2, -1, 2);
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_42 = new QLabel(luzVerticalGroupBox);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_42, 0, 0, 1, 2);

        label_33 = new QLabel(luzVerticalGroupBox);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setMaximumSize(QSize(35, 35));
        label_33->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/sensores/luz.png")));
        label_33->setScaledContents(true);
        label_33->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_33, 2, 0, 1, 1);

        luzValor_Label = new QLabel(luzVerticalGroupBox);
        luzValor_Label->setObjectName(QString::fromUtf8("luzValor_Label"));
        luzValor_Label->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(luzValor_Label, 2, 1, 1, 1);

        line_7 = new QFrame(luzVerticalGroupBox);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout_5->addWidget(line_7, 1, 0, 1, 2);


        verticalLayout_9->addLayout(gridLayout_5);


        sesnoresHorizontalLayout->addWidget(luzVerticalGroupBox);

        aireVerticalGroupBox = new QGroupBox(sensoresVerticalGroupBox);
        aireVerticalGroupBox->setObjectName(QString::fromUtf8("aireVerticalGroupBox"));
        verticalLayout_7 = new QVBoxLayout(aireVerticalGroupBox);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(-1, 2, -1, 2);
        aireGridLayout = new QGridLayout();
        aireGridLayout->setObjectName(QString::fromUtf8("aireGridLayout"));
        aireLabel = new QLabel(aireVerticalGroupBox);
        aireLabel->setObjectName(QString::fromUtf8("aireLabel"));
        aireLabel->setAlignment(Qt::AlignCenter);

        aireGridLayout->addWidget(aireLabel, 0, 0, 1, 2);

        aireIconoLabel = new QLabel(aireVerticalGroupBox);
        aireIconoLabel->setObjectName(QString::fromUtf8("aireIconoLabel"));
        aireIconoLabel->setMaximumSize(QSize(35, 35));
        aireIconoLabel->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/sensores/calidad-del-aire.png")));
        aireIconoLabel->setScaledContents(true);
        aireIconoLabel->setAlignment(Qt::AlignCenter);

        aireGridLayout->addWidget(aireIconoLabel, 2, 0, 1, 1);

        aireValor_Label = new QLabel(aireVerticalGroupBox);
        aireValor_Label->setObjectName(QString::fromUtf8("aireValor_Label"));
        aireValor_Label->setAlignment(Qt::AlignCenter);

        aireGridLayout->addWidget(aireValor_Label, 2, 1, 1, 1);

        line_8 = new QFrame(aireVerticalGroupBox);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        aireGridLayout->addWidget(line_8, 1, 0, 1, 2);


        verticalLayout_7->addLayout(aireGridLayout);


        sesnoresHorizontalLayout->addWidget(aireVerticalGroupBox);

        vientoVerticalGroupBox = new QGroupBox(sensoresVerticalGroupBox);
        vientoVerticalGroupBox->setObjectName(QString::fromUtf8("vientoVerticalGroupBox"));
        verticalLayout_8 = new QVBoxLayout(vientoVerticalGroupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(-1, 2, -1, 2);
        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        vientoValor_Label = new QLabel(vientoVerticalGroupBox);
        vientoValor_Label->setObjectName(QString::fromUtf8("vientoValor_Label"));
        vientoValor_Label->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(vientoValor_Label, 2, 1, 1, 1);

        label_28 = new QLabel(vientoVerticalGroupBox);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setMaximumSize(QSize(35, 35));
        label_28->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/sensores/ventoso.png")));
        label_28->setScaledContents(true);
        label_28->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_28, 2, 0, 1, 1);

        label_40 = new QLabel(vientoVerticalGroupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setAlignment(Qt::AlignCenter);

        gridLayout_7->addWidget(label_40, 0, 0, 1, 2);

        line_9 = new QFrame(vientoVerticalGroupBox);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout_7->addWidget(line_9, 1, 0, 1, 2);


        verticalLayout_8->addLayout(gridLayout_7);


        sesnoresHorizontalLayout->addWidget(vientoVerticalGroupBox);


        verticalLayout_2->addLayout(sesnoresHorizontalLayout);

        verticalLayout_2->setStretch(0, 8);
        verticalLayout_2->setStretch(1, 50);

        generalGridLayout->addWidget(sensoresVerticalGroupBox, 0, 1, 1, 1);

        verticalGroupBox = new QGroupBox(gridLayoutWidget_7);
        verticalGroupBox->setObjectName(QString::fromUtf8("verticalGroupBox"));
        verticalGroupBox->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"font: 63 11pt \"Segoe UI Semibold\";"));
        fechaLayout = new QVBoxLayout(verticalGroupBox);
        fechaLayout->setSpacing(10);
        fechaLayout->setObjectName(QString::fromUtf8("fechaLayout"));
        label = new QLabel(verticalGroupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 24));
        label->setMaximumSize(QSize(16777215, 24));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 0);\n"
"font: 87 12pt \"Segoe UI Black\";"));
        label->setAlignment(Qt::AlignCenter);

        fechaLayout->addWidget(label);

        horaActual_Label = new QLabel(verticalGroupBox);
        horaActual_Label->setObjectName(QString::fromUtf8("horaActual_Label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Segoe UI Semibold"));
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        horaActual_Label->setFont(font1);
        horaActual_Label->setStyleSheet(QString::fromUtf8("font: 30px;"));
        horaActual_Label->setAlignment(Qt::AlignCenter);

        fechaLayout->addWidget(horaActual_Label);

        line_10 = new QFrame(verticalGroupBox);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        fechaLayout->addWidget(line_10);

        fechaActual_Label = new QLabel(verticalGroupBox);
        fechaActual_Label->setObjectName(QString::fromUtf8("fechaActual_Label"));
        fechaActual_Label->setStyleSheet(QString::fromUtf8("font: 16px;"));
        fechaActual_Label->setAlignment(Qt::AlignCenter);

        fechaLayout->addWidget(fechaActual_Label);


        generalGridLayout->addWidget(verticalGroupBox, 0, 0, 1, 1);

        verticalGroupBox_2 = new QGroupBox(gridLayoutWidget_7);
        verticalGroupBox_2->setObjectName(QString::fromUtf8("verticalGroupBox_2"));
        verticalGroupBox_2->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"font: 63 11pt \"Segoe UI Semibold\";"));
        registroLayout = new QVBoxLayout(verticalGroupBox_2);
        registroLayout->setSpacing(5);
        registroLayout->setObjectName(QString::fromUtf8("registroLayout"));
        label_3 = new QLabel(verticalGroupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(0, 24));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 0);\n"
"font: 87 12pt \"Segoe UI Black\";"));
        label_3->setAlignment(Qt::AlignCenter);

        registroLayout->addWidget(label_3);

        verRegistro_pushButton = new QPushButton(verticalGroupBox_2);
        verRegistro_pushButton->setObjectName(QString::fromUtf8("verRegistro_pushButton"));
        verRegistro_pushButton->setMaximumSize(QSize(16777215, 25));
        verRegistro_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        registroLayout->addWidget(verRegistro_pushButton);

        exportarRegistro_pushButton = new QPushButton(verticalGroupBox_2);
        exportarRegistro_pushButton->setObjectName(QString::fromUtf8("exportarRegistro_pushButton"));
        exportarRegistro_pushButton->setMaximumSize(QSize(16777215, 25));
        exportarRegistro_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        registroLayout->addWidget(exportarRegistro_pushButton);

        vaciarRegistro_pushButton = new QPushButton(verticalGroupBox_2);
        vaciarRegistro_pushButton->setObjectName(QString::fromUtf8("vaciarRegistro_pushButton"));
        vaciarRegistro_pushButton->setMaximumSize(QSize(16777215, 25));
        vaciarRegistro_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        registroLayout->addWidget(vaciarRegistro_pushButton);


        generalGridLayout->addWidget(verticalGroupBox_2, 2, 0, 1, 1);

        verticalGroupBox_21 = new QGroupBox(gridLayoutWidget_7);
        verticalGroupBox_21->setObjectName(QString::fromUtf8("verticalGroupBox_21"));
        verticalGroupBox_21->setStyleSheet(QString::fromUtf8("font: 11pt \"Segoe UI\";\n"
"color: rgb(0, 0, 0);\n"
"font: 63 9pt \"Segoe UI Semibold\";"));
        verticalLayout_3 = new QVBoxLayout(verticalGroupBox_21);
        verticalLayout_3->setSpacing(8);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(9, 8, 9, 8);
        label_8 = new QLabel(verticalGroupBox_21);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(640, 24));
        label_8->setMaximumSize(QSize(700, 25));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(0, 85, 0);\n"
"font: 87 12pt \"Segoe UI Black\";"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_19 = new QLabel(verticalGroupBox_21);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_19);

        salida4Estado_label = new QLabel(verticalGroupBox_21);
        salida4Estado_label->setObjectName(QString::fromUtf8("salida4Estado_label"));
        salida4Estado_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(salida4Estado_label);


        gridLayout->addLayout(horizontalLayout_6, 2, 6, 1, 1);

        salida4_IconoLabel = new QLabel(verticalGroupBox_21);
        salida4_IconoLabel->setObjectName(QString::fromUtf8("salida4_IconoLabel"));
        salida4_IconoLabel->setMaximumSize(QSize(120, 120));
        salida4_IconoLabel->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/automatizacion/estufa.png")));
        salida4_IconoLabel->setScaledContents(true);
        salida4_IconoLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(salida4_IconoLabel, 1, 6, 1, 1);

        activar2_pushButton = new QPushButton(verticalGroupBox_21);
        activar2_pushButton->setObjectName(QString::fromUtf8("activar2_pushButton"));
        activar2_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        gridLayout->addWidget(activar2_pushButton, 3, 2, 1, 1);

        salida2_IconoLabel = new QLabel(verticalGroupBox_21);
        salida2_IconoLabel->setObjectName(QString::fromUtf8("salida2_IconoLabel"));
        salida2_IconoLabel->setMaximumSize(QSize(120, 120));
        salida2_IconoLabel->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/automatizacion/farola.png")));
        salida2_IconoLabel->setScaledContents(true);
        salida2_IconoLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(salida2_IconoLabel, 1, 2, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_15 = new QLabel(verticalGroupBox_21);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_15);

        salida2Estado_label = new QLabel(verticalGroupBox_21);
        salida2Estado_label->setObjectName(QString::fromUtf8("salida2Estado_label"));
        salida2Estado_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(salida2Estado_label);


        gridLayout->addLayout(horizontalLayout_4, 2, 2, 1, 1);

        config1_pushButton = new QPushButton(verticalGroupBox_21);
        config1_pushButton->setObjectName(QString::fromUtf8("config1_pushButton"));
        config1_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        gridLayout->addWidget(config1_pushButton, 4, 0, 1, 1);

        salida1_IconoLabel = new QLabel(verticalGroupBox_21);
        salida1_IconoLabel->setObjectName(QString::fromUtf8("salida1_IconoLabel"));
        salida1_IconoLabel->setMaximumSize(QSize(120, 120));
        salida1_IconoLabel->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/automatizacion/farola.png")));
        salida1_IconoLabel->setScaledContents(true);
        salida1_IconoLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(salida1_IconoLabel, 1, 0, 1, 1);

        config3_pushButton = new QPushButton(verticalGroupBox_21);
        config3_pushButton->setObjectName(QString::fromUtf8("config3_pushButton"));
        config3_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        gridLayout->addWidget(config3_pushButton, 4, 4, 1, 1);

        activar3_pushButton = new QPushButton(verticalGroupBox_21);
        activar3_pushButton->setObjectName(QString::fromUtf8("activar3_pushButton"));
        activar3_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        gridLayout->addWidget(activar3_pushButton, 3, 4, 1, 1);

        activar1_pushButton = new QPushButton(verticalGroupBox_21);
        activar1_pushButton->setObjectName(QString::fromUtf8("activar1_pushButton"));
        activar1_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        gridLayout->addWidget(activar1_pushButton, 3, 0, 1, 1);

        config4_pushButton = new QPushButton(verticalGroupBox_21);
        config4_pushButton->setObjectName(QString::fromUtf8("config4_pushButton"));
        config4_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        gridLayout->addWidget(config4_pushButton, 4, 6, 1, 1);

        activar4_pushButton = new QPushButton(verticalGroupBox_21);
        activar4_pushButton->setObjectName(QString::fromUtf8("activar4_pushButton"));
        activar4_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        gridLayout->addWidget(activar4_pushButton, 3, 6, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_17 = new QLabel(verticalGroupBox_21);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_17);

        salida3Estado_label = new QLabel(verticalGroupBox_21);
        salida3Estado_label->setObjectName(QString::fromUtf8("salida3Estado_label"));
        salida3Estado_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(salida3Estado_label);


        gridLayout->addLayout(horizontalLayout_5, 2, 4, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_13 = new QLabel(verticalGroupBox_21);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_13);

        salida1Estado_label = new QLabel(verticalGroupBox_21);
        salida1Estado_label->setObjectName(QString::fromUtf8("salida1Estado_label"));
        salida1Estado_label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(salida1Estado_label);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        config2_pushButton = new QPushButton(verticalGroupBox_21);
        config2_pushButton->setObjectName(QString::fromUtf8("config2_pushButton"));
        config2_pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"border-style: solid;\n"
"border-color: black;\n"
"border-width: 1px;"));

        gridLayout->addWidget(config2_pushButton, 4, 2, 1, 1);

        salida3_IconoLabel = new QLabel(verticalGroupBox_21);
        salida3_IconoLabel->setObjectName(QString::fromUtf8("salida3_IconoLabel"));
        salida3_IconoLabel->setMaximumSize(QSize(120, 120));
        salida3_IconoLabel->setPixmap(QPixmap(QString::fromUtf8(":/resources/img/automatizacion/aspersor2.png")));
        salida3_IconoLabel->setScaledContents(true);
        salida3_IconoLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(salida3_IconoLabel, 1, 4, 1, 1);

        label_6 = new QLabel(verticalGroupBox_21);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(verticalGroupBox_21);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_9 = new QLabel(verticalGroupBox_21);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 0, 4, 1, 1);

        label_10 = new QLabel(verticalGroupBox_21);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 0, 6, 1, 1);

        line_3 = new QFrame(verticalGroupBox_21);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 0, 5, 5, 1);

        line_2 = new QFrame(verticalGroupBox_21);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 0, 3, 5, 1);

        line = new QFrame(verticalGroupBox_21);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 5, 1);

        gridLayout->setRowStretch(0, 80);

        verticalLayout_3->addLayout(gridLayout);

        verticalLayout_3->setStretch(0, 5);
        verticalLayout_3->setStretch(1, 60);

        generalGridLayout->addWidget(verticalGroupBox_21, 1, 1, 2, 1);

        generalGridLayout->setRowStretch(0, 1);
        generalGridLayout->setRowStretch(1, 10);
        generalGridLayout->setRowStretch(2, 10);
        generalGridLayout->setColumnStretch(0, 1);
        generalGridLayout->setColumnStretch(1, 100);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Estacion  Meteorologica v1.0", nullptr));
        tituloPrincipal->setText(QCoreApplication::translate("MainWindow", "Estaci\303\263n Meteorol\303\263gica v1.0", nullptr));
        WIFI_checkBox->setText(QCoreApplication::translate("MainWindow", "Desconectado", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "CONEXIONES", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "USB", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "WiFi", nullptr));
        USB_checkBox->setText(QCoreApplication::translate("MainWindow", "Desconectado", nullptr));
        label_27->setText(QCoreApplication::translate("MainWindow", "CONDICI\303\223N CLIM\303\201TICA ACTUAL", nullptr));
        temperaturaValor_Label->setText(QCoreApplication::translate("MainWindow", "27\302\260C", nullptr));
        label_21->setText(QString());
        label_45->setText(QCoreApplication::translate("MainWindow", "TEMPERATURA", nullptr));
        label_37->setText(QString());
        label_44->setText(QCoreApplication::translate("MainWindow", "HUMEDAD", nullptr));
        humedadValor_Label->setText(QCoreApplication::translate("MainWindow", "45%", nullptr));
        label_43->setText(QCoreApplication::translate("MainWindow", "PRESION", nullptr));
        presionValor_Label->setText(QCoreApplication::translate("MainWindow", "100 hPa", nullptr));
        label_35->setText(QString());
        label_42->setText(QCoreApplication::translate("MainWindow", "LUZ", nullptr));
        label_33->setText(QString());
        luzValor_Label->setText(QCoreApplication::translate("MainWindow", "25 Lux", nullptr));
        aireLabel->setText(QCoreApplication::translate("MainWindow", "CALIDAD DEL AIRE", nullptr));
        aireIconoLabel->setText(QString());
        aireValor_Label->setText(QCoreApplication::translate("MainWindow", "12%", nullptr));
        vientoValor_Label->setText(QCoreApplication::translate("MainWindow", "10 m/s", nullptr));
        label_28->setText(QString());
        label_40->setText(QCoreApplication::translate("MainWindow", "VIENTO", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "HORA ACTUAL", nullptr));
        horaActual_Label->setText(QCoreApplication::translate("MainWindow", "19:12", nullptr));
        fechaActual_Label->setText(QCoreApplication::translate("MainWindow", "06 - Noviembre - 2023", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "REGISTRO DE DATOS", nullptr));
        verRegistro_pushButton->setText(QCoreApplication::translate("MainWindow", "Ver Registro", nullptr));
        exportarRegistro_pushButton->setText(QCoreApplication::translate("MainWindow", "Exportar Registro", nullptr));
        vaciarRegistro_pushButton->setText(QCoreApplication::translate("MainWindow", "Vaciar Registro", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "AUTOMATIZACI\303\223N", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Estado:", nullptr));
        salida4Estado_label->setText(QCoreApplication::translate("MainWindow", "Activo", nullptr));
        salida4_IconoLabel->setText(QString());
        activar2_pushButton->setText(QCoreApplication::translate("MainWindow", "Activar", nullptr));
        salida2_IconoLabel->setText(QString());
        label_15->setText(QCoreApplication::translate("MainWindow", "Estado:", nullptr));
        salida2Estado_label->setText(QCoreApplication::translate("MainWindow", "Activo", nullptr));
        config1_pushButton->setText(QCoreApplication::translate("MainWindow", "Configurar", nullptr));
        salida1_IconoLabel->setText(QString());
        config3_pushButton->setText(QCoreApplication::translate("MainWindow", "Configurar", nullptr));
        activar3_pushButton->setText(QCoreApplication::translate("MainWindow", "Activar", nullptr));
        activar1_pushButton->setText(QCoreApplication::translate("MainWindow", "Activar", nullptr));
        config4_pushButton->setText(QCoreApplication::translate("MainWindow", "Configurar", nullptr));
        activar4_pushButton->setText(QCoreApplication::translate("MainWindow", "Activar", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "Estado:", nullptr));
        salida3Estado_label->setText(QCoreApplication::translate("MainWindow", "Activo", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Estado:", nullptr));
        salida1Estado_label->setText(QCoreApplication::translate("MainWindow", "Activo", nullptr));
        config2_pushButton->setText(QCoreApplication::translate("MainWindow", "Configurar", nullptr));
        salida3_IconoLabel->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Salida1", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Salida2", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Salida3", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Salida4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
