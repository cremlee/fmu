/********************************************************************************
** Form generated from reading UI file 'wbsdgeneralwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBSDGENERALWINDOW_H
#define UI_WBSDGENERALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WBSDGeneralWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QPushButton *btn_instant;
    QLabel *label;
    QComboBox *rightBIB;
    QLabel *label_19;
    QComboBox *instantCoffee;
    QLabel *label_17;
    QLabel *label_18;
    QComboBox *leftBIB;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbl_instant;
    QSpacerItem *verticalSpacer;
    QGridLayout *gridLayout_2;
    QComboBox *switchOver;
    QLabel *label_8;
    QLabel *label_6;
    QComboBox *comboBox_5;
    QLabel *label_3;
    QComboBox *paymentOpt;
    QLabel *label_7;
    QLineEdit *phoneServ;
    QLabel *label_4;
    QLineEdit *phoneOper;
    QLabel *label_5;
    QComboBox *instantFan;
    QComboBox *deairTimer;
    QLabel *label_2;
    QLabel *label_9;
    QSpinBox *sp_test;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *operatorAccess;
    QPushButton *languages;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WBSDGeneralWindow)
    {
        if (WBSDGeneralWindow->objectName().isEmpty())
            WBSDGeneralWindow->setObjectName(QStringLiteral("WBSDGeneralWindow"));
        WBSDGeneralWindow->resize(800, 600);
        centralwidget = new QWidget(WBSDGeneralWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 761, 491));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(50, 50, 50, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        btn_instant = new QPushButton(verticalLayoutWidget_2);
        btn_instant->setObjectName(QStringLiteral("btn_instant"));

        gridLayout->addWidget(btn_instant, 1, 7, 1, 1);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        rightBIB = new QComboBox(verticalLayoutWidget_2);
        rightBIB->setObjectName(QStringLiteral("rightBIB"));

        gridLayout->addWidget(rightBIB, 1, 3, 1, 1);

        label_19 = new QLabel(verticalLayoutWidget_2);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_19, 0, 5, 1, 1);

        instantCoffee = new QComboBox(verticalLayoutWidget_2);
        instantCoffee->setObjectName(QStringLiteral("instantCoffee"));

        gridLayout->addWidget(instantCoffee, 1, 5, 1, 1);

        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy1);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_17, 0, 1, 1, 1);

        label_18 = new QLabel(verticalLayoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setLayoutDirection(Qt::LeftToRight);
        label_18->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_18, 0, 3, 1, 1);

        leftBIB = new QComboBox(verticalLayoutWidget_2);
        leftBIB->setObjectName(QStringLiteral("leftBIB"));

        gridLayout->addWidget(leftBIB, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 6, 1, 1);

        lbl_instant = new QLabel(verticalLayoutWidget_2);
        lbl_instant->setObjectName(QStringLiteral("lbl_instant"));
        lbl_instant->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lbl_instant, 0, 7, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        switchOver = new QComboBox(verticalLayoutWidget_2);
        switchOver->setObjectName(QStringLiteral("switchOver"));
        switchOver->setEnabled(true);

        gridLayout_2->addWidget(switchOver, 5, 1, 1, 1);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setEnabled(true);

        gridLayout_2->addWidget(label_8, 5, 0, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setEnabled(false);

        gridLayout_2->addWidget(label_6, 3, 0, 1, 1);

        comboBox_5 = new QComboBox(verticalLayoutWidget_2);
        comboBox_5->setObjectName(QStringLiteral("comboBox_5"));
        comboBox_5->setEnabled(false);

        gridLayout_2->addWidget(comboBox_5, 4, 1, 1, 1);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 1, 0, 1, 1);

        paymentOpt = new QComboBox(verticalLayoutWidget_2);
        paymentOpt->setObjectName(QStringLiteral("paymentOpt"));
        paymentOpt->setEnabled(false);

        gridLayout_2->addWidget(paymentOpt, 3, 1, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setEnabled(false);

        gridLayout_2->addWidget(label_7, 4, 0, 1, 1);

        phoneServ = new QLineEdit(verticalLayoutWidget_2);
        phoneServ->setObjectName(QStringLiteral("phoneServ"));
        sizePolicy.setHeightForWidth(phoneServ->sizePolicy().hasHeightForWidth());
        phoneServ->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(phoneServ, 2, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 2, 0, 1, 1);

        phoneOper = new QLineEdit(verticalLayoutWidget_2);
        phoneOper->setObjectName(QStringLiteral("phoneOper"));
        sizePolicy.setHeightForWidth(phoneOper->sizePolicy().hasHeightForWidth());
        phoneOper->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(phoneOper, 1, 1, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 7, 0, 1, 1);

        instantFan = new QComboBox(verticalLayoutWidget_2);
        instantFan->setObjectName(QStringLiteral("instantFan"));
        instantFan->setEnabled(true);

        gridLayout_2->addWidget(instantFan, 6, 1, 1, 1);

        deairTimer = new QComboBox(verticalLayoutWidget_2);
        deairTimer->setObjectName(QStringLiteral("deairTimer"));
        deairTimer->setEnabled(true);

        gridLayout_2->addWidget(deairTimer, 7, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 6, 0, 1, 1);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_2->addWidget(label_9, 8, 0, 1, 1);

        sp_test = new QSpinBox(verticalLayoutWidget_2);
        sp_test->setObjectName(QStringLiteral("sp_test"));
        sp_test->setMaximum(65535);
        sp_test->setSingleStep(50);

        gridLayout_2->addWidget(sp_test, 8, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        operatorAccess = new QPushButton(verticalLayoutWidget_2);
        operatorAccess->setObjectName(QStringLiteral("operatorAccess"));
        operatorAccess->setEnabled(false);

        verticalLayout->addWidget(operatorAccess);

        languages = new QPushButton(verticalLayoutWidget_2);
        languages->setObjectName(QStringLiteral("languages"));
        languages->setEnabled(false);

        verticalLayout->addWidget(languages);


        verticalLayout_2->addLayout(verticalLayout);

        verticalLayout_2->setStretch(0, 1);
        verticalLayout_2->setStretch(1, 1);
        verticalLayout_2->setStretch(2, 4);
        verticalLayout_2->setStretch(3, 1);
        verticalLayout_2->setStretch(4, 1);
        WBSDGeneralWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WBSDGeneralWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        WBSDGeneralWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WBSDGeneralWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        WBSDGeneralWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(leftBIB, rightBIB);
        QWidget::setTabOrder(rightBIB, instantCoffee);
        QWidget::setTabOrder(instantCoffee, operatorAccess);
        QWidget::setTabOrder(operatorAccess, languages);
        QWidget::setTabOrder(languages, phoneOper);
        QWidget::setTabOrder(phoneOper, phoneServ);
        QWidget::setTabOrder(phoneServ, paymentOpt);
        QWidget::setTabOrder(paymentOpt, comboBox_5);
        QWidget::setTabOrder(comboBox_5, switchOver);

        retranslateUi(WBSDGeneralWindow);

        QMetaObject::connectSlotsByName(WBSDGeneralWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WBSDGeneralWindow)
    {
        WBSDGeneralWindow->setWindowTitle(QApplication::translate("WBSDGeneralWindow", "General settings", 0));
        btn_instant->setText(QApplication::translate("WBSDGeneralWindow", "Instant calibration and testing", 0));
        label->setText(QApplication::translate("WBSDGeneralWindow", "Dispenser configuration", 0));
        label_19->setText(QApplication::translate("WBSDGeneralWindow", "Compartment", 0));
        label_17->setText(QApplication::translate("WBSDGeneralWindow", "Left BIB", 0));
        label_18->setText(QApplication::translate("WBSDGeneralWindow", "Right BIB", 0));
        lbl_instant->setText(QApplication::translate("WBSDGeneralWindow", "ingredient", 0));
        label_8->setText(QApplication::translate("WBSDGeneralWindow", "Switch over function", 0));
        label_6->setText(QApplication::translate("WBSDGeneralWindow", "Payment", 0));
        label_3->setText(QApplication::translate("WBSDGeneralWindow", "Operator telephone number", 0));
        label_7->setText(QApplication::translate("WBSDGeneralWindow", "Cold water value", 0));
        phoneServ->setText(QString());
        label_4->setText(QApplication::translate("WBSDGeneralWindow", "Service telephone number", 0));
#ifndef QT_NO_TOOLTIP
        phoneOper->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        phoneOper->setText(QString());
        label_5->setText(QApplication::translate("WBSDGeneralWindow", "Deair timer", 0));
        label_2->setText(QApplication::translate("WBSDGeneralWindow", "Instant fan timer", 0));
        label_9->setText(QApplication::translate("WBSDGeneralWindow", "DB_AIR_TIME MCB DP 2", 0));
        operatorAccess->setText(QApplication::translate("WBSDGeneralWindow", "Operator access", 0));
        languages->setText(QApplication::translate("WBSDGeneralWindow", "Language", 0));
    } // retranslateUi

};

namespace Ui {
    class WBSDGeneralWindow: public Ui_WBSDGeneralWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBSDGENERALWINDOW_H
