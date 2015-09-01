/********************************************************************************
** Form generated from reading UI file 'wbsddisplayoptwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBSDDISPLAYOPTWINDOW_H
#define UI_WBSDDISPLAYOPTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WBSDDisplayOptWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QComboBox *cboOperShowPay;
    QComboBox *cboOperShowPhone;
    QComboBox *ledDIM;
    QLabel *label_17;
    QComboBox *cboOperShowECO;
    QLabel *label_5;
    QLabel *label_16;
    QPushButton *btnUpload;
    QLabel *label_2;
    QComboBox *cbdescal;
    QLabel *label_15;
    QComboBox *cboShowWelcome;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_22;
    QComboBox *cboOperShowCleaning;
    QComboBox *cboOperShowRFID;
    QSpacerItem *horizontalSpacer;
    QLabel *label_10;
    QLabel *label_20;
    QComboBox *cboOperShowStrength;
    QComboBox *cboOperShowVol;
    QLabel *label_21;
    QLabel *label_19;
    QLabel *label_11;
    QLabel *label_3;
    QComboBox *strMode;
    QLabel *label_12;
    QComboBox *tempUnit;
    QComboBox *showLogo;
    QComboBox *volMode;
    QLabel *label_7;
    QComboBox *showServTel;
    QLabel *label_14;
    QComboBox *cboOperShowCounters;
    QLabel *label;
    QComboBox *showHotW;
    QLabel *tempLabel;
    QComboBox *showOpTel;
    QLabel *label_6;
    QComboBox *showNumMode;
    QLabel *label_13;
    QLabel *label_8;
    QLabel *label_18;
    QComboBox *cboOperShowDate;
    QLabel *label_4;
    QComboBox *cbwf;
    QComboBox *cb_Ani;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WBSDDisplayOptWindow)
    {
        if (WBSDDisplayOptWindow->objectName().isEmpty())
            WBSDDisplayOptWindow->setObjectName(QStringLiteral("WBSDDisplayOptWindow"));
        WBSDDisplayOptWindow->resize(800, 742);
        centralwidget = new QWidget(WBSDDisplayOptWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setEnabled(true);
        gridLayoutWidget->setGeometry(QRect(20, 10, 751, 641));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(50, 10, 50, 10);
        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        cboOperShowPay = new QComboBox(gridLayoutWidget);
        cboOperShowPay->setObjectName(QStringLiteral("cboOperShowPay"));
        cboOperShowPay->setEnabled(true);

        gridLayout->addWidget(cboOperShowPay, 23, 1, 1, 1);

        cboOperShowPhone = new QComboBox(gridLayoutWidget);
        cboOperShowPhone->setObjectName(QStringLiteral("cboOperShowPhone"));
        cboOperShowPhone->setEnabled(true);

        gridLayout->addWidget(cboOperShowPhone, 22, 1, 1, 1);

        ledDIM = new QComboBox(gridLayoutWidget);
        ledDIM->setObjectName(QStringLiteral("ledDIM"));
        ledDIM->setEnabled(true);

        gridLayout->addWidget(ledDIM, 12, 1, 1, 1);

        label_17 = new QLabel(gridLayoutWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setEnabled(true);

        gridLayout->addWidget(label_17, 22, 0, 1, 1);

        cboOperShowECO = new QComboBox(gridLayoutWidget);
        cboOperShowECO->setObjectName(QStringLiteral("cboOperShowECO"));
        cboOperShowECO->setEnabled(true);

        gridLayout->addWidget(cboOperShowECO, 21, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setEnabled(true);

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setEnabled(true);

        gridLayout->addWidget(label_16, 18, 0, 1, 1);

        btnUpload = new QPushButton(gridLayoutWidget);
        btnUpload->setObjectName(QStringLiteral("btnUpload"));

        gridLayout->addWidget(btnUpload, 0, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 15, 0, 1, 1);

        cbdescal = new QComboBox(gridLayoutWidget);
        cbdescal->setObjectName(QStringLiteral("cbdescal"));

        gridLayout->addWidget(cbdescal, 15, 1, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setEnabled(true);

        gridLayout->addWidget(label_15, 17, 0, 1, 1);

        cboShowWelcome = new QComboBox(gridLayoutWidget);
        cboShowWelcome->setObjectName(QStringLiteral("cboShowWelcome"));
        cboShowWelcome->setEnabled(true);

        gridLayout->addWidget(cboShowWelcome, 7, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 13, 1, 1, 1);

        label_22 = new QLabel(gridLayoutWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setEnabled(true);

        gridLayout->addWidget(label_22, 19, 0, 1, 1);

        cboOperShowCleaning = new QComboBox(gridLayoutWidget);
        cboOperShowCleaning->setObjectName(QStringLiteral("cboOperShowCleaning"));
        cboOperShowCleaning->setEnabled(true);

        gridLayout->addWidget(cboOperShowCleaning, 19, 1, 1, 1);

        cboOperShowRFID = new QComboBox(gridLayoutWidget);
        cboOperShowRFID->setObjectName(QStringLiteral("cboOperShowRFID"));
        cboOperShowRFID->setEnabled(true);

        gridLayout->addWidget(cboOperShowRFID, 24, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 13, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setEnabled(true);

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        label_20 = new QLabel(gridLayoutWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setEnabled(true);

        gridLayout->addWidget(label_20, 21, 0, 1, 1);

        cboOperShowStrength = new QComboBox(gridLayoutWidget);
        cboOperShowStrength->setObjectName(QStringLiteral("cboOperShowStrength"));
        cboOperShowStrength->setEnabled(true);

        gridLayout->addWidget(cboOperShowStrength, 18, 1, 1, 1);

        cboOperShowVol = new QComboBox(gridLayoutWidget);
        cboOperShowVol->setObjectName(QStringLiteral("cboOperShowVol"));
        cboOperShowVol->setEnabled(true);

        gridLayout->addWidget(cboOperShowVol, 17, 1, 1, 1);

        label_21 = new QLabel(gridLayoutWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setEnabled(true);

        gridLayout->addWidget(label_21, 7, 0, 1, 1);

        label_19 = new QLabel(gridLayoutWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setEnabled(true);

        gridLayout->addWidget(label_19, 24, 0, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setEnabled(true);

        gridLayout->addWidget(label_11, 11, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setEnabled(true);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        strMode = new QComboBox(gridLayoutWidget);
        strMode->setObjectName(QStringLiteral("strMode"));
        strMode->setEnabled(true);

        gridLayout->addWidget(strMode, 10, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setEnabled(true);

        gridLayout->addWidget(label_12, 12, 0, 1, 1);

        tempUnit = new QComboBox(gridLayoutWidget);
        tempUnit->setObjectName(QStringLiteral("tempUnit"));
        tempUnit->setEnabled(true);

        gridLayout->addWidget(tempUnit, 1, 1, 1, 1);

        showLogo = new QComboBox(gridLayoutWidget);
        showLogo->setObjectName(QStringLiteral("showLogo"));
        showLogo->setEnabled(true);

        gridLayout->addWidget(showLogo, 4, 1, 1, 1);

        volMode = new QComboBox(gridLayoutWidget);
        volMode->setObjectName(QStringLiteral("volMode"));
        volMode->setEnabled(true);

        gridLayout->addWidget(volMode, 11, 1, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(true);

        gridLayout->addWidget(label_7, 8, 0, 1, 1);

        showServTel = new QComboBox(gridLayoutWidget);
        showServTel->setObjectName(QStringLiteral("showServTel"));
        showServTel->setEnabled(true);

        gridLayout->addWidget(showServTel, 9, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setEnabled(true);

        gridLayout->addWidget(label_14, 20, 0, 1, 1);

        cboOperShowCounters = new QComboBox(gridLayoutWidget);
        cboOperShowCounters->setObjectName(QStringLiteral("cboOperShowCounters"));
        cboOperShowCounters->setEnabled(true);

        gridLayout->addWidget(cboOperShowCounters, 16, 1, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setEnabled(true);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        showHotW = new QComboBox(gridLayoutWidget);
        showHotW->setObjectName(QStringLiteral("showHotW"));
        showHotW->setEnabled(true);

        gridLayout->addWidget(showHotW, 3, 1, 1, 1);

        tempLabel = new QLabel(gridLayoutWidget);
        tempLabel->setObjectName(QStringLiteral("tempLabel"));
        tempLabel->setEnabled(true);

        gridLayout->addWidget(tempLabel, 1, 0, 1, 1);

        showOpTel = new QComboBox(gridLayoutWidget);
        showOpTel->setObjectName(QStringLiteral("showOpTel"));
        showOpTel->setEnabled(true);

        gridLayout->addWidget(showOpTel, 8, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(true);

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        showNumMode = new QComboBox(gridLayoutWidget);
        showNumMode->setObjectName(QStringLiteral("showNumMode"));
        showNumMode->setEnabled(true);

        gridLayout->addWidget(showNumMode, 2, 1, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setEnabled(true);

        gridLayout->addWidget(label_13, 16, 0, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(true);

        gridLayout->addWidget(label_8, 9, 0, 1, 1);

        label_18 = new QLabel(gridLayoutWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setEnabled(true);

        gridLayout->addWidget(label_18, 23, 0, 1, 1);

        cboOperShowDate = new QComboBox(gridLayoutWidget);
        cboOperShowDate->setObjectName(QStringLiteral("cboOperShowDate"));
        cboOperShowDate->setEnabled(true);

        gridLayout->addWidget(cboOperShowDate, 20, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 14, 0, 1, 1);

        cbwf = new QComboBox(gridLayoutWidget);
        cbwf->setObjectName(QStringLiteral("cbwf"));

        gridLayout->addWidget(cbwf, 14, 1, 1, 1);

        cb_Ani = new QComboBox(gridLayoutWidget);
        cb_Ani->setObjectName(QStringLiteral("cb_Ani"));

        gridLayout->addWidget(cb_Ani, 6, 1, 1, 1);

        WBSDDisplayOptWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WBSDDisplayOptWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        WBSDDisplayOptWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WBSDDisplayOptWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        WBSDDisplayOptWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(btnUpload, tempUnit);
        QWidget::setTabOrder(tempUnit, showNumMode);
        QWidget::setTabOrder(showNumMode, showHotW);
        QWidget::setTabOrder(showHotW, showLogo);
        QWidget::setTabOrder(showLogo, cboShowWelcome);
        QWidget::setTabOrder(cboShowWelcome, showOpTel);
        QWidget::setTabOrder(showOpTel, showServTel);
        QWidget::setTabOrder(showServTel, strMode);
        QWidget::setTabOrder(strMode, volMode);
        QWidget::setTabOrder(volMode, ledDIM);
        QWidget::setTabOrder(ledDIM, cboOperShowCounters);
        QWidget::setTabOrder(cboOperShowCounters, cboOperShowVol);
        QWidget::setTabOrder(cboOperShowVol, cboOperShowStrength);
        QWidget::setTabOrder(cboOperShowStrength, cboOperShowCleaning);
        QWidget::setTabOrder(cboOperShowCleaning, cboOperShowDate);
        QWidget::setTabOrder(cboOperShowDate, cboOperShowECO);
        QWidget::setTabOrder(cboOperShowECO, cboOperShowPhone);
        QWidget::setTabOrder(cboOperShowPhone, cboOperShowPay);
        QWidget::setTabOrder(cboOperShowPay, cboOperShowRFID);

        retranslateUi(WBSDDisplayOptWindow);

        QMetaObject::connectSlotsByName(WBSDDisplayOptWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WBSDDisplayOptWindow)
    {
        WBSDDisplayOptWindow->setWindowTitle(QApplication::translate("WBSDDisplayOptWindow", "Display settings", 0));
        label_9->setText(QApplication::translate("WBSDDisplayOptWindow", "Show Cup Animation", 0));
        label_17->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show Phone", 0));
        label_5->setText(QApplication::translate("WBSDDisplayOptWindow", "Show hot warning", 0));
        label_16->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show Strength", 0));
        btnUpload->setText(QApplication::translate("WBSDDisplayOptWindow", "Upload", 0));
        label_2->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show Descaling", 0));
        label_15->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show Volume", 0));
        label_22->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show Cleaning", 0));
        label_10->setText(QApplication::translate("WBSDDisplayOptWindow", "Strength Mode", 0));
        label_20->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show ECO", 0));
        label_21->setText(QApplication::translate("WBSDDisplayOptWindow", "Show welcome message", 0));
        label_19->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show RFID", 0));
        label_11->setText(QApplication::translate("WBSDDisplayOptWindow", "Volume Mode", 0));
        label_3->setText(QApplication::translate("WBSDDisplayOptWindow", "Show Number Mode", 0));
        label_12->setText(QApplication::translate("WBSDDisplayOptWindow", "Illumination setting (%)", 0));
        label_7->setText(QApplication::translate("WBSDDisplayOptWindow", "Show operator tel. numbers", 0));
        label_14->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show Set Date/Time", 0));
        label->setText(QApplication::translate("WBSDDisplayOptWindow", "Upload language", 0));
        tempLabel->setText(QApplication::translate("WBSDDisplayOptWindow", "System unit (Metric (ml/\313\232C) or US (Ounces/\313\232F))", 0));
        label_6->setText(QApplication::translate("WBSDDisplayOptWindow", "Show logo", 0));
        label_13->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show Counters", 0));
        label_8->setText(QApplication::translate("WBSDDisplayOptWindow", "Show service tel. numbers", 0));
        label_18->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show Pay", 0));
        label_4->setText(QApplication::translate("WBSDDisplayOptWindow", "Operator menu: Show Water Filters", 0));
    } // retranslateUi

};

namespace Ui {
    class WBSDDisplayOptWindow: public Ui_WBSDDisplayOptWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBSDDISPLAYOPTWINDOW_H
