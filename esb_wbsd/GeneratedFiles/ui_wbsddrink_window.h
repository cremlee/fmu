/********************************************************************************
** Form generated from reading UI file 'wbsddrink_window.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBSDDRINK_WINDOW_H
#define UI_WBSDDRINK_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WBSDDrink_Window
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *gridLayoutWidget_2;
    QGridLayout *tbw0;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lblRTDMax;
    QLabel *label_4;
    QLabel *lblRTDBound;
    QLabel *lblRTD2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lblRTDMin;
    QLabel *label_3;
    QLabel *lblRTD1;
    QLabel *lbl_s;
    QLabel *lblRTD3;
    QLabel *lbl_m;
    QLabel *lbl_l;
    QDoubleSpinBox *spRTDSmall;
    QDoubleSpinBox *spRTDMedium;
    QDoubleSpinBox *spRTDLarge;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *tbw1;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QFrame *line_5;
    QLabel *lblLBibBound;
    QLabel *lblMinRatioLBib;
    QLabel *lblMaxRatioLBib;
    QFrame *line;
    QLabel *lblPercentofDrink;
    QSpinBox *spLBibPercentOfDrink;
    QLabel *lblPercentOfDrinkBoundaries;
    QFrame *line_4;
    QLabel *lblLBibAirpump;
    QDoubleSpinBox *spLBibAirpump;
    QFrame *line_7;
    QLabel *lblLBib3;
    QLabel *lblLBib2;
    QDoubleSpinBox *spLBibMild;
    QLabel *label;
    QDoubleSpinBox *spLBibStrong;
    QDoubleSpinBox *spLBibMedium;
    QLabel *lblLBib1;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *spRBibMild;
    QLabel *lblRBib3;
    QLabel *lblRBib2;
    QDoubleSpinBox *spRBibStrong;
    QDoubleSpinBox *spRBibMedium;
    QLabel *lblRBib1;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_4;
    QFrame *line_6;
    QLabel *lblRBibBound;
    QLabel *lblMinRatioRBib;
    QLabel *lblMaxRatioRBib;
    QFrame *line_2;
    QLabel *lblRBibPercentOfDrink;
    QSpinBox *spLBibPercentOfDrink_2;
    QLabel *lblPercentOfDrinkBoundaries_2;
    QFrame *line_3;
    QLabel *lblRBibAirpump;
    QDoubleSpinBox *spRBibAirpump;
    QFrame *line_8;
    QWidget *tabInstant;
    QWidget *gridLayoutWidget_3;
    QGridLayout *tbw2;
    QLabel *lblInst3;
    QDoubleSpinBox *spCanGramMild;
    QLabel *lblInst1;
    QLabel *lblInstBound;
    QDoubleSpinBox *spCanGramStrong;
    QLabel *lblInst2;
    QDoubleSpinBox *spCanGramMedium;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblCanMax;
    QLabel *lblCanMin;
    QLabel *lblInstRTDBase;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *lblOrder;
    QLabel *lblRecipeName;
    QComboBox *cboRecipe;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnRestoreDefault;
    QPushButton *btnSetDefault;
    QPushButton *btnSave;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lblOrderTXT;
    QMenuBar *menubar;

    void setupUi(QMainWindow *WBSDDrink_Window)
    {
        if (WBSDDrink_Window->objectName().isEmpty())
            WBSDDrink_Window->setObjectName(QStringLiteral("WBSDDrink_Window"));
        WBSDDrink_Window->resize(1072, 600);
        centralwidget = new QWidget(WBSDDrink_Window);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 20, 1021, 571));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        gridLayout->setContentsMargins(20, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(gridLayoutWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayoutWidget_2 = new QWidget(tab);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 761, 301));
        tbw0 = new QGridLayout(gridLayoutWidget_2);
        tbw0->setSpacing(20);
        tbw0->setObjectName(QStringLiteral("tbw0"));
        tbw0->setContentsMargins(10, 10, 10, 10);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        lblRTDMax = new QLabel(gridLayoutWidget_2);
        lblRTDMax->setObjectName(QStringLiteral("lblRTDMax"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lblRTDMax->sizePolicy().hasHeightForWidth());
        lblRTDMax->setSizePolicy(sizePolicy);

        horizontalLayout_7->addWidget(lblRTDMax);

        label_4 = new QLabel(gridLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_7->addWidget(label_4);


        tbw0->addLayout(horizontalLayout_7, 0, 3, 1, 1);

        lblRTDBound = new QLabel(gridLayoutWidget_2);
        lblRTDBound->setObjectName(QStringLiteral("lblRTDBound"));
        sizePolicy.setHeightForWidth(lblRTDBound->sizePolicy().hasHeightForWidth());
        lblRTDBound->setSizePolicy(sizePolicy);

        tbw0->addWidget(lblRTDBound, 0, 0, 1, 1);

        lblRTD2 = new QLabel(gridLayoutWidget_2);
        lblRTD2->setObjectName(QStringLiteral("lblRTD2"));

        tbw0->addWidget(lblRTD2, 2, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        lblRTDMin = new QLabel(gridLayoutWidget_2);
        lblRTDMin->setObjectName(QStringLiteral("lblRTDMin"));
        sizePolicy.setHeightForWidth(lblRTDMin->sizePolicy().hasHeightForWidth());
        lblRTDMin->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lblRTDMin);

        label_3 = new QLabel(gridLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);


        tbw0->addLayout(horizontalLayout_5, 0, 2, 1, 1);

        lblRTD1 = new QLabel(gridLayoutWidget_2);
        lblRTD1->setObjectName(QStringLiteral("lblRTD1"));

        tbw0->addWidget(lblRTD1, 1, 0, 1, 1);

        lbl_s = new QLabel(gridLayoutWidget_2);
        lbl_s->setObjectName(QStringLiteral("lbl_s"));
        lbl_s->setLayoutDirection(Qt::RightToLeft);
        lbl_s->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        tbw0->addWidget(lbl_s, 1, 4, 1, 1);

        lblRTD3 = new QLabel(gridLayoutWidget_2);
        lblRTD3->setObjectName(QStringLiteral("lblRTD3"));

        tbw0->addWidget(lblRTD3, 3, 0, 1, 1);

        lbl_m = new QLabel(gridLayoutWidget_2);
        lbl_m->setObjectName(QStringLiteral("lbl_m"));
        lbl_m->setLayoutDirection(Qt::RightToLeft);
        lbl_m->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        tbw0->addWidget(lbl_m, 2, 4, 1, 1);

        lbl_l = new QLabel(gridLayoutWidget_2);
        lbl_l->setObjectName(QStringLiteral("lbl_l"));
        lbl_l->setLayoutDirection(Qt::RightToLeft);
        lbl_l->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        tbw0->addWidget(lbl_l, 3, 4, 1, 1);

        spRTDSmall = new QDoubleSpinBox(gridLayoutWidget_2);
        spRTDSmall->setObjectName(QStringLiteral("spRTDSmall"));
        spRTDSmall->setDecimals(1);

        tbw0->addWidget(spRTDSmall, 1, 2, 1, 1);

        spRTDMedium = new QDoubleSpinBox(gridLayoutWidget_2);
        spRTDMedium->setObjectName(QStringLiteral("spRTDMedium"));
        spRTDMedium->setDecimals(1);

        tbw0->addWidget(spRTDMedium, 2, 2, 1, 1);

        spRTDLarge = new QDoubleSpinBox(gridLayoutWidget_2);
        spRTDLarge->setObjectName(QStringLiteral("spRTDLarge"));
        spRTDLarge->setDecimals(1);

        tbw0->addWidget(spRTDLarge, 3, 2, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayoutWidget_2 = new QWidget(tab_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(10, 20, 905, 271));
        tbw1 = new QVBoxLayout(verticalLayoutWidget_2);
        tbw1->setObjectName(QStringLiteral("tbw1"));
        tbw1->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        line_5 = new QFrame(verticalLayoutWidget_2);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_5);

        lblLBibBound = new QLabel(verticalLayoutWidget_2);
        lblLBibBound->setObjectName(QStringLiteral("lblLBibBound"));

        horizontalLayout_3->addWidget(lblLBibBound);

        lblMinRatioLBib = new QLabel(verticalLayoutWidget_2);
        lblMinRatioLBib->setObjectName(QStringLiteral("lblMinRatioLBib"));

        horizontalLayout_3->addWidget(lblMinRatioLBib);

        lblMaxRatioLBib = new QLabel(verticalLayoutWidget_2);
        lblMaxRatioLBib->setObjectName(QStringLiteral("lblMaxRatioLBib"));

        horizontalLayout_3->addWidget(lblMaxRatioLBib);

        line = new QFrame(verticalLayoutWidget_2);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        lblPercentofDrink = new QLabel(verticalLayoutWidget_2);
        lblPercentofDrink->setObjectName(QStringLiteral("lblPercentofDrink"));

        horizontalLayout_3->addWidget(lblPercentofDrink);

        spLBibPercentOfDrink = new QSpinBox(verticalLayoutWidget_2);
        spLBibPercentOfDrink->setObjectName(QStringLiteral("spLBibPercentOfDrink"));

        horizontalLayout_3->addWidget(spLBibPercentOfDrink);

        lblPercentOfDrinkBoundaries = new QLabel(verticalLayoutWidget_2);
        lblPercentOfDrinkBoundaries->setObjectName(QStringLiteral("lblPercentOfDrinkBoundaries"));

        horizontalLayout_3->addWidget(lblPercentOfDrinkBoundaries);

        line_4 = new QFrame(verticalLayoutWidget_2);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_4);

        lblLBibAirpump = new QLabel(verticalLayoutWidget_2);
        lblLBibAirpump->setObjectName(QStringLiteral("lblLBibAirpump"));

        horizontalLayout_3->addWidget(lblLBibAirpump);

        spLBibAirpump = new QDoubleSpinBox(verticalLayoutWidget_2);
        spLBibAirpump->setObjectName(QStringLiteral("spLBibAirpump"));
        spLBibAirpump->setDecimals(0);
        spLBibAirpump->setMinimum(30);
        spLBibAirpump->setSingleStep(1);

        horizontalLayout_3->addWidget(spLBibAirpump);

        line_7 = new QFrame(verticalLayoutWidget_2);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_7);


        gridLayout_4->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        lblLBib3 = new QLabel(verticalLayoutWidget_2);
        lblLBib3->setObjectName(QStringLiteral("lblLBib3"));

        gridLayout_4->addWidget(lblLBib3, 1, 0, 1, 1);

        lblLBib2 = new QLabel(verticalLayoutWidget_2);
        lblLBib2->setObjectName(QStringLiteral("lblLBib2"));

        gridLayout_4->addWidget(lblLBib2, 2, 0, 1, 1);

        spLBibMild = new QDoubleSpinBox(verticalLayoutWidget_2);
        spLBibMild->setObjectName(QStringLiteral("spLBibMild"));
        spLBibMild->setDecimals(1);
        spLBibMild->setSingleStep(0.5);

        gridLayout_4->addWidget(spLBibMild, 1, 1, 1, 1);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setPointSize(14);
        label->setFont(font);

        gridLayout_4->addWidget(label, 0, 0, 1, 1);

        spLBibStrong = new QDoubleSpinBox(verticalLayoutWidget_2);
        spLBibStrong->setObjectName(QStringLiteral("spLBibStrong"));
        spLBibStrong->setDecimals(1);
        spLBibStrong->setSingleStep(0.5);

        gridLayout_4->addWidget(spLBibStrong, 3, 1, 1, 1);

        spLBibMedium = new QDoubleSpinBox(verticalLayoutWidget_2);
        spLBibMedium->setObjectName(QStringLiteral("spLBibMedium"));
        spLBibMedium->setDecimals(1);
        spLBibMedium->setSingleStep(0.5);

        gridLayout_4->addWidget(spLBibMedium, 2, 1, 1, 1);

        lblLBib1 = new QLabel(verticalLayoutWidget_2);
        lblLBib1->setObjectName(QStringLiteral("lblLBib1"));

        gridLayout_4->addWidget(lblLBib1, 3, 0, 1, 1);


        tbw1->addLayout(gridLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        spRBibMild = new QDoubleSpinBox(verticalLayoutWidget_2);
        spRBibMild->setObjectName(QStringLiteral("spRBibMild"));
        spRBibMild->setDecimals(1);
        spRBibMild->setSingleStep(0.5);

        gridLayout_5->addWidget(spRBibMild, 1, 1, 1, 1);

        lblRBib3 = new QLabel(verticalLayoutWidget_2);
        lblRBib3->setObjectName(QStringLiteral("lblRBib3"));

        gridLayout_5->addWidget(lblRBib3, 1, 0, 1, 1);

        lblRBib2 = new QLabel(verticalLayoutWidget_2);
        lblRBib2->setObjectName(QStringLiteral("lblRBib2"));

        gridLayout_5->addWidget(lblRBib2, 2, 0, 1, 1);

        spRBibStrong = new QDoubleSpinBox(verticalLayoutWidget_2);
        spRBibStrong->setObjectName(QStringLiteral("spRBibStrong"));
        spRBibStrong->setDecimals(1);
        spRBibStrong->setSingleStep(0.5);

        gridLayout_5->addWidget(spRBibStrong, 3, 1, 1, 1);

        spRBibMedium = new QDoubleSpinBox(verticalLayoutWidget_2);
        spRBibMedium->setObjectName(QStringLiteral("spRBibMedium"));
        spRBibMedium->setDecimals(1);
        spRBibMedium->setSingleStep(0.5);

        gridLayout_5->addWidget(spRBibMedium, 2, 1, 1, 1);

        lblRBib1 = new QLabel(verticalLayoutWidget_2);
        lblRBib1->setObjectName(QStringLiteral("lblRBib1"));

        gridLayout_5->addWidget(lblRBib1, 3, 0, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        line_6 = new QFrame(verticalLayoutWidget_2);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::VLine);
        line_6->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_6);

        lblRBibBound = new QLabel(verticalLayoutWidget_2);
        lblRBibBound->setObjectName(QStringLiteral("lblRBibBound"));

        horizontalLayout_4->addWidget(lblRBibBound);

        lblMinRatioRBib = new QLabel(verticalLayoutWidget_2);
        lblMinRatioRBib->setObjectName(QStringLiteral("lblMinRatioRBib"));

        horizontalLayout_4->addWidget(lblMinRatioRBib);

        lblMaxRatioRBib = new QLabel(verticalLayoutWidget_2);
        lblMaxRatioRBib->setObjectName(QStringLiteral("lblMaxRatioRBib"));

        horizontalLayout_4->addWidget(lblMaxRatioRBib);

        line_2 = new QFrame(verticalLayoutWidget_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_2);

        lblRBibPercentOfDrink = new QLabel(verticalLayoutWidget_2);
        lblRBibPercentOfDrink->setObjectName(QStringLiteral("lblRBibPercentOfDrink"));

        horizontalLayout_4->addWidget(lblRBibPercentOfDrink);

        spLBibPercentOfDrink_2 = new QSpinBox(verticalLayoutWidget_2);
        spLBibPercentOfDrink_2->setObjectName(QStringLiteral("spLBibPercentOfDrink_2"));

        horizontalLayout_4->addWidget(spLBibPercentOfDrink_2);

        lblPercentOfDrinkBoundaries_2 = new QLabel(verticalLayoutWidget_2);
        lblPercentOfDrinkBoundaries_2->setObjectName(QStringLiteral("lblPercentOfDrinkBoundaries_2"));

        horizontalLayout_4->addWidget(lblPercentOfDrinkBoundaries_2);

        line_3 = new QFrame(verticalLayoutWidget_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_3);

        lblRBibAirpump = new QLabel(verticalLayoutWidget_2);
        lblRBibAirpump->setObjectName(QStringLiteral("lblRBibAirpump"));

        horizontalLayout_4->addWidget(lblRBibAirpump);

        spRBibAirpump = new QDoubleSpinBox(verticalLayoutWidget_2);
        spRBibAirpump->setObjectName(QStringLiteral("spRBibAirpump"));
        spRBibAirpump->setDecimals(0);
        spRBibAirpump->setMinimum(30);
        spRBibAirpump->setSingleStep(1);

        horizontalLayout_4->addWidget(spRBibAirpump);

        line_8 = new QFrame(verticalLayoutWidget_2);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::VLine);
        line_8->setFrameShadow(QFrame::Sunken);

        horizontalLayout_4->addWidget(line_8);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 1, 1, 1);


        tbw1->addLayout(gridLayout_5);

        tabWidget->addTab(tab_2, QString());
        tabInstant = new QWidget();
        tabInstant->setObjectName(QStringLiteral("tabInstant"));
        gridLayoutWidget_3 = new QWidget(tabInstant);
        gridLayoutWidget_3->setObjectName(QStringLiteral("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(20, 20, 661, 251));
        tbw2 = new QGridLayout(gridLayoutWidget_3);
        tbw2->setObjectName(QStringLiteral("tbw2"));
        tbw2->setHorizontalSpacing(12);
        tbw2->setVerticalSpacing(20);
        tbw2->setContentsMargins(11, 11, 11, 11);
        lblInst3 = new QLabel(gridLayoutWidget_3);
        lblInst3->setObjectName(QStringLiteral("lblInst3"));

        tbw2->addWidget(lblInst3, 1, 0, 1, 1);

        spCanGramMild = new QDoubleSpinBox(gridLayoutWidget_3);
        spCanGramMild->setObjectName(QStringLiteral("spCanGramMild"));
        spCanGramMild->setDecimals(1);
        spCanGramMild->setSingleStep(0.5);

        tbw2->addWidget(spCanGramMild, 1, 1, 1, 1);

        lblInst1 = new QLabel(gridLayoutWidget_3);
        lblInst1->setObjectName(QStringLiteral("lblInst1"));

        tbw2->addWidget(lblInst1, 3, 0, 1, 1);

        lblInstBound = new QLabel(gridLayoutWidget_3);
        lblInstBound->setObjectName(QStringLiteral("lblInstBound"));
        sizePolicy1.setHeightForWidth(lblInstBound->sizePolicy().hasHeightForWidth());
        lblInstBound->setSizePolicy(sizePolicy1);

        tbw2->addWidget(lblInstBound, 0, 0, 1, 1);

        spCanGramStrong = new QDoubleSpinBox(gridLayoutWidget_3);
        spCanGramStrong->setObjectName(QStringLiteral("spCanGramStrong"));
        spCanGramStrong->setDecimals(1);
        spCanGramStrong->setSingleStep(0.5);

        tbw2->addWidget(spCanGramStrong, 3, 1, 1, 1);

        lblInst2 = new QLabel(gridLayoutWidget_3);
        lblInst2->setObjectName(QStringLiteral("lblInst2"));

        tbw2->addWidget(lblInst2, 2, 0, 1, 1);

        spCanGramMedium = new QDoubleSpinBox(gridLayoutWidget_3);
        spCanGramMedium->setObjectName(QStringLiteral("spCanGramMedium"));
        spCanGramMedium->setDecimals(1);
        spCanGramMedium->setSingleStep(0.5);

        tbw2->addWidget(spCanGramMedium, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        tbw2->addItem(verticalSpacer, 4, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lblCanMax = new QLabel(gridLayoutWidget_3);
        lblCanMax->setObjectName(QStringLiteral("lblCanMax"));

        horizontalLayout_2->addWidget(lblCanMax);

        lblCanMin = new QLabel(gridLayoutWidget_3);
        lblCanMin->setObjectName(QStringLiteral("lblCanMin"));

        horizontalLayout_2->addWidget(lblCanMin);

        lblInstRTDBase = new QLabel(gridLayoutWidget_3);
        lblInstRTDBase->setObjectName(QStringLiteral("lblInstRTDBase"));

        horizontalLayout_2->addWidget(lblInstRTDBase);


        tbw2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        label_5 = new QLabel(gridLayoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        tbw2->addWidget(label_5, 1, 2, 1, 1);

        label_6 = new QLabel(gridLayoutWidget_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        tbw2->addWidget(label_6, 2, 2, 1, 1);

        label_7 = new QLabel(gridLayoutWidget_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        tbw2->addWidget(label_7, 3, 2, 1, 1);

        tbw2->setColumnStretch(0, 1);
        tbw2->setColumnStretch(1, 1);
        tbw2->setColumnStretch(2, 1);
        tabWidget->addTab(tabInstant, QString());

        verticalLayout->addWidget(tabWidget);


        gridLayout->addLayout(verticalLayout, 2, 0, 1, 3);

        lblOrder = new QLabel(gridLayoutWidget);
        lblOrder->setObjectName(QStringLiteral("lblOrder"));

        gridLayout->addWidget(lblOrder, 1, 0, 1, 1);

        lblRecipeName = new QLabel(gridLayoutWidget);
        lblRecipeName->setObjectName(QStringLiteral("lblRecipeName"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lblRecipeName->sizePolicy().hasHeightForWidth());
        lblRecipeName->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lblRecipeName, 0, 0, 1, 1);

        cboRecipe = new QComboBox(gridLayoutWidget);
        cboRecipe->setObjectName(QStringLiteral("cboRecipe"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cboRecipe->sizePolicy().hasHeightForWidth());
        cboRecipe->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(cboRecipe, 0, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        btnRestoreDefault = new QPushButton(gridLayoutWidget);
        btnRestoreDefault->setObjectName(QStringLiteral("btnRestoreDefault"));

        horizontalLayout->addWidget(btnRestoreDefault);

        btnSetDefault = new QPushButton(gridLayoutWidget);
        btnSetDefault->setObjectName(QStringLiteral("btnSetDefault"));
        btnSetDefault->setAutoDefault(false);
        btnSetDefault->setDefault(false);

        horizontalLayout->addWidget(btnSetDefault);

        btnSave = new QPushButton(gridLayoutWidget);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setAutoDefault(false);
        btnSave->setDefault(false);

        horizontalLayout->addWidget(btnSave);

        btnCancel = new QPushButton(gridLayoutWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));
        btnCancel->setFlat(false);

        horizontalLayout->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 3, 1, 1);

        lblOrderTXT = new QLabel(gridLayoutWidget);
        lblOrderTXT->setObjectName(QStringLiteral("lblOrderTXT"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lblOrderTXT->setFont(font1);

        gridLayout->addWidget(lblOrderTXT, 1, 2, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setColumnStretch(0, 1);
        WBSDDrink_Window->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WBSDDrink_Window);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1072, 21));
        WBSDDrink_Window->setMenuBar(menubar);
#ifndef QT_NO_SHORTCUT
        lblPercentofDrink->setBuddy(spLBibPercentOfDrink);
        lblLBib3->setBuddy(spLBibStrong);
        lblLBib2->setBuddy(spLBibMedium);
        lblLBib1->setBuddy(spLBibMild);
        lblRBib3->setBuddy(spRBibStrong);
        lblRBib2->setBuddy(spRBibMedium);
        lblRBib1->setBuddy(spRBibMild);
        lblInst3->setBuddy(spCanGramMild);
        lblInst1->setBuddy(spCanGramStrong);
        lblInst2->setBuddy(spCanGramMedium);
        lblRecipeName->setBuddy(cboRecipe);
#endif // QT_NO_SHORTCUT

        retranslateUi(WBSDDrink_Window);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(WBSDDrink_Window);
    } // setupUi

    void retranslateUi(QMainWindow *WBSDDrink_Window)
    {
        WBSDDrink_Window->setWindowTitle(QApplication::translate("WBSDDrink_Window", "Drink settings 1-1", 0));
        lblRTDMax->setText(QApplication::translate("WBSDDrink_Window", "Max:", 0));
        label_4->setText(QApplication::translate("WBSDDrink_Window", "-", 0));
        lblRTDBound->setText(QApplication::translate("WBSDDrink_Window", "Boundaries", 0));
        lblRTD2->setText(QApplication::translate("WBSDDrink_Window", "Volume medium (ml):", 0));
        lblRTDMin->setText(QApplication::translate("WBSDDrink_Window", "Min:", 0));
        label_3->setText(QApplication::translate("WBSDDrink_Window", "-", 0));
        lblRTD1->setText(QApplication::translate("WBSDDrink_Window", "Volume small (ml):", 0));
        lbl_s->setText(QApplication::translate("WBSDDrink_Window", "-", 0));
        lblRTD3->setText(QApplication::translate("WBSDDrink_Window", "Volume large (ml):", 0));
        lbl_m->setText(QApplication::translate("WBSDDrink_Window", "-", 0));
        lbl_l->setText(QApplication::translate("WBSDDrink_Window", "-", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("WBSDDrink_Window", "RTD Volume", 0));
        lblLBibBound->setText(QApplication::translate("WBSDDrink_Window", "Boundaries", 0));
        lblMinRatioLBib->setText(QApplication::translate("WBSDDrink_Window", "Min:", 0));
        lblMaxRatioLBib->setText(QApplication::translate("WBSDDrink_Window", "Max:", 0));
        lblPercentofDrink->setText(QApplication::translate("WBSDDrink_Window", "Percent of drink:", 0));
        lblPercentOfDrinkBoundaries->setText(QApplication::translate("WBSDDrink_Window", "Min:Max:", 0));
        lblLBibAirpump->setText(QApplication::translate("WBSDDrink_Window", "Airpump (%):", 0));
        lblLBib3->setText(QApplication::translate("WBSDDrink_Window", "Mixing ratio mild:", 0));
        lblLBib2->setText(QApplication::translate("WBSDDrink_Window", "Mixing ratio normal:", 0));
        label->setText(QApplication::translate("WBSDDrink_Window", "Left BiB", 0));
        lblLBib1->setText(QApplication::translate("WBSDDrink_Window", "Mixing ratio strong:", 0));
        lblRBib3->setText(QApplication::translate("WBSDDrink_Window", "Mixing ratio mild:", 0));
        lblRBib2->setText(QApplication::translate("WBSDDrink_Window", "Mixing ratio normal:", 0));
        lblRBib1->setText(QApplication::translate("WBSDDrink_Window", "Mixing ratio strong:", 0));
        label_2->setText(QApplication::translate("WBSDDrink_Window", "Right BIB", 0));
        lblRBibBound->setText(QApplication::translate("WBSDDrink_Window", "Boundaries", 0));
        lblMinRatioRBib->setText(QApplication::translate("WBSDDrink_Window", "Min:", 0));
        lblMaxRatioRBib->setText(QApplication::translate("WBSDDrink_Window", "Max:", 0));
        lblRBibPercentOfDrink->setText(QApplication::translate("WBSDDrink_Window", "Percent of drink:", 0));
        lblPercentOfDrinkBoundaries_2->setText(QApplication::translate("WBSDDrink_Window", "Min:Max:", 0));
        lblRBibAirpump->setText(QApplication::translate("WBSDDrink_Window", "Airpump (%):", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("WBSDDrink_Window", "Ratio Setting", 0));
        lblInst3->setText(QApplication::translate("WBSDDrink_Window", "Grams mild:", 0));
        lblInst1->setText(QApplication::translate("WBSDDrink_Window", "Grams strong:", 0));
        lblInstBound->setText(QApplication::translate("WBSDDrink_Window", "Boundaries", 0));
        lblInst2->setText(QApplication::translate("WBSDDrink_Window", "Grams normal:", 0));
        lblCanMax->setText(QApplication::translate("WBSDDrink_Window", "Max:", 0));
        lblCanMin->setText(QApplication::translate("WBSDDrink_Window", "Min:", 0));
        lblInstRTDBase->setText(QApplication::translate("WBSDDrink_Window", "RTD Base:", 0));
        label_5->setText(QApplication::translate("WBSDDrink_Window", "-", 0));
        label_6->setText(QApplication::translate("WBSDDrink_Window", "-", 0));
        label_7->setText(QApplication::translate("WBSDDrink_Window", "-", 0));
        tabWidget->setTabText(tabWidget->indexOf(tabInstant), QApplication::translate("WBSDDrink_Window", "Instant compartment", 0));
        lblOrder->setText(QApplication::translate("WBSDDrink_Window", "Ingredient order", 0));
        lblRecipeName->setText(QApplication::translate("WBSDDrink_Window", "Recipe name", 0));
        btnRestoreDefault->setText(QApplication::translate("WBSDDrink_Window", "Restore from default", 0));
        btnSetDefault->setText(QApplication::translate("WBSDDrink_Window", "Set as default", 0));
        btnSave->setText(QApplication::translate("WBSDDrink_Window", "&Save", 0));
        btnCancel->setText(QApplication::translate("WBSDDrink_Window", "Close", 0));
        lblOrderTXT->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WBSDDrink_Window: public Ui_WBSDDrink_Window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBSDDRINK_WINDOW_H
