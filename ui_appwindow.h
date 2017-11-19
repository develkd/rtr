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
#include <QtWidgets/QCheckBox>
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
    QComboBox *shaderComboBox;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_3;
    QSlider *light0Slider;
    QSpacerItem *verticalSpacer_3;
    QLabel *label_4;
    QSlider *redSlider;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_5;
    QSlider *greenSlider;
    QSpacerItem *verticalSpacer_6;
    QLabel *label_6;
    QSlider *blueSlider;
    QSpacerItem *verticalSpacer_7;
    QCheckBox *checkBoxSilhoutte;
    QLabel *label_7;
    QSlider *threshold;
    QLabel *label_8;
    QSlider *discretizer;
    QSpacerItem *verticalSpacer_8;
    QLabel *label_9;
    QSlider *radiusSlider;
    QSpacerItem *verticalSpacer_9;
    QLabel *label_10;
    QSlider *densitySlider;
    QCheckBox *checkBoxInvert;
    QWidget *widget_2;
    QGridLayout *gridLayout;
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
        AppWindow->resize(976, 924);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AppWindow->sizePolicy().hasHeightForWidth());
        AppWindow->setSizePolicy(sizePolicy);
        AppWindow->setMinimumSize(QSize(800, 600));
        mainLayout = new QHBoxLayout(AppWindow);
        mainLayout->setObjectName(QStringLiteral("mainLayout"));
        openGLWidget = new rtrGLWidget(AppWindow);
        openGLWidget->setObjectName(QStringLiteral("openGLWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(8);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(openGLWidget->sizePolicy().hasHeightForWidth());
        openGLWidget->setSizePolicy(sizePolicy1);
        openGLWidget->setMinimumSize(QSize(0, 0));
        openGLWidget->setFocusPolicy(Qt::StrongFocus);

        mainLayout->addWidget(openGLWidget);

        ui_container = new QWidget(AppWindow);
        ui_container->setObjectName(QStringLiteral("ui_container"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(ui_container->sizePolicy().hasHeightForWidth());
        ui_container->setSizePolicy(sizePolicy2);
        ui_container->setMaximumSize(QSize(226, 800));
        ui_container->setFocusPolicy(Qt::WheelFocus);
        verticalLayout_5 = new QVBoxLayout(ui_container);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        tabWidget = new QTabWidget(ui_container);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
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
        modelComboBox->setMaxVisibleItems(20);

        verticalLayout_2->addWidget(modelComboBox);

        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(20);
        sizePolicy4.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy4);
        verticalLayout_4 = new QVBoxLayout(groupBox_3);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        shaderComboBox = new QComboBox(groupBox_3);
        shaderComboBox->setObjectName(QStringLiteral("shaderComboBox"));
        shaderComboBox->setEnabled(true);
        sizePolicy.setHeightForWidth(shaderComboBox->sizePolicy().hasHeightForWidth());
        shaderComboBox->setSizePolicy(sizePolicy);

        verticalLayout_4->addWidget(shaderComboBox);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_4);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy5);

        verticalLayout_4->addWidget(label_3);

        light0Slider = new QSlider(groupBox_3);
        light0Slider->setObjectName(QStringLiteral("light0Slider"));
        sizePolicy5.setHeightForWidth(light0Slider->sizePolicy().hasHeightForWidth());
        light0Slider->setSizePolicy(sizePolicy5);
        light0Slider->setFocusPolicy(Qt::NoFocus);
        light0Slider->setMaximum(100);
        light0Slider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(light0Slider);

        verticalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_3);

        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy5.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy5);
        label_4->setBaseSize(QSize(0, 30));

        verticalLayout_4->addWidget(label_4);

        redSlider = new QSlider(groupBox_3);
        redSlider->setObjectName(QStringLiteral("redSlider"));
        redSlider->setMaximum(100);
        redSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(redSlider);

        verticalSpacer_5 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_5);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy5.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy5);

        verticalLayout_4->addWidget(label_5);

        greenSlider = new QSlider(groupBox_3);
        greenSlider->setObjectName(QStringLiteral("greenSlider"));
        greenSlider->setMaximum(100);
        greenSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(greenSlider);

        verticalSpacer_6 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_6);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);

        verticalLayout_4->addWidget(label_6);

        blueSlider = new QSlider(groupBox_3);
        blueSlider->setObjectName(QStringLiteral("blueSlider"));
        blueSlider->setMaximum(100);
        blueSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(blueSlider);

        verticalSpacer_7 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_7);

        checkBoxSilhoutte = new QCheckBox(groupBox_3);
        checkBoxSilhoutte->setObjectName(QStringLiteral("checkBoxSilhoutte"));

        verticalLayout_4->addWidget(checkBoxSilhoutte);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_4->addWidget(label_7);

        threshold = new QSlider(groupBox_3);
        threshold->setObjectName(QStringLiteral("threshold"));
        threshold->setEnabled(false);
        threshold->setMaximum(100);
        threshold->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(threshold);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_4->addWidget(label_8);

        discretizer = new QSlider(groupBox_3);
        discretizer->setObjectName(QStringLiteral("discretizer"));
        discretizer->setMinimum(1);
        discretizer->setMaximum(10);
        discretizer->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(discretizer);

        verticalSpacer_8 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_4->addItem(verticalSpacer_8);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_4->addWidget(label_9);

        radiusSlider = new QSlider(groupBox_3);
        radiusSlider->setObjectName(QStringLiteral("radiusSlider"));
        radiusSlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(radiusSlider);

        verticalSpacer_9 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_9);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);

        densitySlider = new QSlider(groupBox_3);
        densitySlider->setObjectName(QStringLiteral("densitySlider"));
        densitySlider->setMinimum(1);
        densitySlider->setMaximum(100);
        densitySlider->setPageStep(1);
        densitySlider->setSliderPosition(100);
        densitySlider->setOrientation(Qt::Horizontal);

        verticalLayout_4->addWidget(densitySlider);

        checkBoxInvert = new QCheckBox(groupBox_3);
        checkBoxInvert->setObjectName(QStringLiteral("checkBoxInvert"));

        verticalLayout_4->addWidget(checkBoxInvert);

        widget_2 = new QWidget(groupBox_3);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy6);
        gridLayout = new QGridLayout(widget_2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_4->addWidget(widget_2);


        verticalLayout_2->addWidget(groupBox_3);


        verticalLayout->addWidget(groupBox);

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

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout_5->addItem(verticalSpacer_2);

        verticalSpacer = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Ignored);

        verticalLayout_5->addItem(verticalSpacer);

        quitButton = new QPushButton(ui_container);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setFocusPolicy(Qt::NoFocus);

        verticalLayout_5->addWidget(quitButton);

        label_11 = new QLabel(ui_container);
        label_11->setObjectName(QStringLiteral("label_11"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy7);
        label_11->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_11);

        label_12 = new QLabel(ui_container);
        label_12->setObjectName(QStringLiteral("label_12"));
        sizePolicy7.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy7);
        label_12->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_12);

        label_2 = new QLabel(ui_container);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy7.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy7);
        label_2->setMaximumSize(QSize(16777215, 20));

        verticalLayout_5->addWidget(label_2);

        label = new QLabel(ui_container);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy7.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy7);
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
         << QApplication::translate("AppWindow", "Teapot", Q_NULLPTR)
         << QApplication::translate("AppWindow", "F117_H", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Alien", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Cube", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Obiwan", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Goblin", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Duck", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Venus", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Buddha", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Dragon", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Sphere", Q_NULLPTR)
        );
        groupBox_3->setTitle(QApplication::translate("AppWindow", "Shader Parameters", Q_NULLPTR));
        shaderComboBox->clear();
        shaderComboBox->insertItems(0, QStringList()
         << QApplication::translate("AppWindow", "Phong", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Point", Q_NULLPTR)
         << QApplication::translate("AppWindow", "Toon", Q_NULLPTR)
        );
        shaderComboBox->setCurrentText(QApplication::translate("AppWindow", "Phong", Q_NULLPTR));
        label_3->setText(QApplication::translate("AppWindow", "Light Intensity", Q_NULLPTR));
        label_4->setText(QApplication::translate("AppWindow", "Red", Q_NULLPTR));
        label_5->setText(QApplication::translate("AppWindow", "Green", Q_NULLPTR));
        label_6->setText(QApplication::translate("AppWindow", "Blue", Q_NULLPTR));
        checkBoxSilhoutte->setText(QApplication::translate("AppWindow", "Silhouette", Q_NULLPTR));
        label_7->setText(QApplication::translate("AppWindow", "Threshold", Q_NULLPTR));
        label_8->setText(QApplication::translate("AppWindow", "Steps of discretize", Q_NULLPTR));
        label_9->setText(QApplication::translate("AppWindow", "Radius", Q_NULLPTR));
        label_10->setText(QApplication::translate("AppWindow", "max           Anzahl       min", Q_NULLPTR));
        checkBoxInvert->setText(QApplication::translate("AppWindow", "Invert", Q_NULLPTR));
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
        label_12->setText(QApplication::translate("AppWindow", "up/down: rotate camera X/Z-Axis", Q_NULLPTR));
        label_2->setText(QApplication::translate("AppWindow", "zoom in: +      zoom out: -", Q_NULLPTR));
        label->setText(QApplication::translate("AppWindow", "'h': show/hide UI", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AppWindow: public Ui_AppWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APPWINDOW_H
