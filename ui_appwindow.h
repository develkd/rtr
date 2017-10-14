/********************************************************************************
** Form generated from reading UI file 'appwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APPWINDOW_H
#define UI_APPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rtrglwidget.h"

QT_BEGIN_NAMESPACE

class Ui_AppWindow
{
public:
    QHBoxLayout *mainLayout;
    rtrGLWidget *openGLWidget;
    QWidget *ui_container;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *tabWidget;
    QWidget *rendering_tab;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *modelComboBox;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QSlider *light0Slider;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *blackBgRadioButton;
    QRadioButton *greyBgRadioButton;
    QRadioButton *whiteBgRadioButton;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QRadioButton *radioButtonRotateX;
    QRadioButton *radioButtonRotateY;
    QRadioButton *radioButtonRotateZ;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QPushButton *quitButton;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_2;
    QLabel *label;

    void setupUi(QWidget *AppWindow)
    {
        if (AppWindow->objectName().isEmpty())
            AppWindow->setObjectName(QStringLiteral("AppWindow"));
        AppWindow->resize(910, 818);
        AppWindow->setMinimumSize(QSize(800, 600));
        mainLayout = new QHBoxLayout(AppWindow);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        openGLWidget = new rtrGLWidget(AppWindow);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(8);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy);
        openGLWidget->setMinimumSize(QSize(0, 0));
        openGLWidget->setFocusPolicy(Qt::StrongFocus);

        mainLayout->addWidget(openGLWidget);

        ui_container = new QWidget(AppWindow);
        ui_container->setObjectName(QStringLiteral("ui_container"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ui_container->sizePolicy().hasHeightForWidth());
        ui_container->setSizePolicy(sizePolicy1);
        ui_container->setMaximumSize(QSize(226, 800));
        ui_container->setFocusPolicy(Qt::WheelFocus);
        verticalLayout_5 = new QVBoxLayout(ui_container);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget = new QTabWidget(ui_container);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        tabWidget->setMaximumSize(QSize(16777215, 16777215));
        tabWidget->setUsesScrollButtons(false);
        rendering_tab = new QWidget();
        rendering_tab->setObjectName(QStringLiteral("rendering_tab"));
        verticalLayout = new QVBoxLayout(rendering_tab);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, -1, 2, -1);
        groupBox = new QGroupBox(rendering_tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        modelComboBox = new QComboBox(groupBox);
        modelComboBox->setObjectName(QStringLiteral("modelComboBox"));
        modelComboBox->setFocusPolicy(Qt::NoFocus);

        verticalLayout_2->addWidget(modelComboBox);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(rendering_tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        widget_2 = new QWidget(groupBox_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        light0Slider = new QSlider(widget_2);
        light0Slider->setObjectName(QStringLiteral("light0Slider"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(light0Slider->sizePolicy().hasHeightForWidth());
        light0Slider->setSizePolicy(sizePolicy3);
        light0Slider->setFocusPolicy(Qt::NoFocus);
        light0Slider->setMaximum(100);
        light0Slider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(light0Slider, 0, 2, 1, 1);


        verticalLayout_4->addWidget(widget_2);


        verticalLayout->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(rendering_tab);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        blackBgRadioButton = new QRadioButton(groupBox_6);
        blackBgRadioButton->setObjectName(QStringLiteral("blackBgRadioButton"));

        horizontalLayout_4->addWidget(blackBgRadioButton);

        greyBgRadioButton = new QRadioButton(groupBox_6);
        greyBgRadioButton->setObjectName(QStringLiteral("greyBgRadioButton"));
        greyBgRadioButton->setFocusPolicy(Qt::NoFocus);
        greyBgRadioButton->setChecked(true);

        horizontalLayout_4->addWidget(greyBgRadioButton);

        whiteBgRadioButton = new QRadioButton(groupBox_6);
        whiteBgRadioButton->setObjectName(QStringLiteral("whiteBgRadioButton"));
        whiteBgRadioButton->setFocusPolicy(Qt::StrongFocus);

        horizontalLayout_4->addWidget(whiteBgRadioButton);


        verticalLayout->addWidget(groupBox_6);

        groupBox_2 = new QGroupBox(rendering_tab);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(groupBox_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        radioButtonRotateX = new QRadioButton(splitter);
        radioButtonRotateX->setObjectName(QStringLiteral("radioButtonRotateX"));
        radioButtonRotateX->setFocusPolicy(Qt::NoFocus);
        radioButtonRotateX->setChecked(true);
        splitter->addWidget(radioButtonRotateX);
        radioButtonRotateY = new QRadioButton(splitter);
        radioButtonRotateY->setObjectName(QStringLiteral("radioButtonRotateY"));
        splitter->addWidget(radioButtonRotateY);
        radioButtonRotateZ = new QRadioButton(splitter);
        radioButtonRotateZ->setObjectName(QStringLiteral("radioButtonRotateZ"));
        radioButtonRotateZ->setFocusPolicy(Qt::NoFocus);
        splitter->addWidget(radioButtonRotateZ);

        horizontalLayout->addWidget(splitter);


        verticalLayout->addWidget(groupBox_2);

        tabWidget->addTab(rendering_tab, QString());

        verticalLayout_5->addWidget(tabWidget);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_5->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        verticalLayout_5->addItem(verticalSpacer);

        quitButton = new QPushButton(ui_container);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(quitButton);

        label_11 = new QLabel(ui_container);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy4);
        label_11->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_11);

        label_12 = new QLabel(ui_container);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy4.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy4);
        label_12->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_12);

        label_2 = new QLabel(ui_container);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy4.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy4);
        label_2->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_2);

        label = new QLabel(ui_container);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label);


        mainLayout->addWidget(ui_container);


        retranslateUi(AppWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AppWindow);
    } // setupUi

    void retranslateUi(QWidget *AppWindow)
    {
        AppWindow->setWindowTitle(QApplication::translate("AppWindow", "RTR Demo", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("AppWindow", "Scene", Q_NULLPTR));
        modelComboBox->clear();
        modelComboBox->insertItems(0, QStringList()
         << QApplication::translate("AppWindow", "Cube", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Duck", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Teapot", Q_NULLPTR)
        );
        groupBox_3->setTitle(QApplication::translate("AppWindow", "Shader Parameters", Q_NULLPTR));
        label_3->setText(QApplication::translate("AppWindow", "Light Intensity", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("AppWindow", "Background", Q_NULLPTR));
        blackBgRadioButton->setText(QApplication::translate("AppWindow", "black", Q_NULLPTR));
        greyBgRadioButton->setText(QApplication::translate("AppWindow", "grey", Q_NULLPTR));
        whiteBgRadioButton->setText(QApplication::translate("AppWindow", "white", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("AppWindow", "Rotation Axis", Q_NULLPTR));
        radioButtonRotateX->setText(QApplication::translate("AppWindow", "X", Q_NULLPTR));
        radioButtonRotateY->setText(QApplication::translate("AppWindow", "Y", Q_NULLPTR));
        radioButtonRotateZ->setText(QApplication::translate("AppWindow", "Z", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(rendering_tab), QApplication::translate("AppWindow", "Rendering", Q_NULLPTR));
        quitButton->setText(QApplication::translate("AppWindow", "quit", Q_NULLPTR));
        label_11->setText(QApplication::translate("AppWindow", "left/right: rotate camera Y-Axsi", Q_NULLPTR));
        label_12->setText(QApplication::translate("AppWindow", "up/down: rotate camera X-Axis", Q_NULLPTR));
        label_2->setText(QApplication::translate("AppWindow", "zoom in: +      zoom out: -", Q_NULLPTR));
        label->setText(QApplication::translate("AppWindow", "'h': show/hide UI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AppWindow: public Ui_AppWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPWINDOW_H
