/********************************************************************************
** Form generated from reading UI file 'wbsd_clone.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WBSD_CLONE_H
#define UI_WBSD_CLONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_wbsdclone
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QProgressBar *progressBar;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QFrame *line;
    QLabel *label_7;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnd;
    QPushButton *btnr;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnlang;
    QPushButton *btnlang_2;
    QPushButton *btn_backup;
    QPushButton *btn_restore;
    QLabel *label_4;
    QPushButton *btn_clear;
    QFrame *line_2;
    QFrame *line_3;
    QFrame *line_4;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QFrame *line_8;
    QFrame *line_9;
    QFrame *line_10;
    QFrame *line_11;
    QFrame *line_12;
    QFrame *line_13;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *wbsdclone)
    {
        if (wbsdclone->objectName().isEmpty())
            wbsdclone->setObjectName(QStringLiteral("wbsdclone"));
        wbsdclone->resize(532, 465);
        centralwidget = new QWidget(wbsdclone);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 50, 1969, 465));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(20, 10, 20, 30);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 1, 1, 1);

        progressBar = new QProgressBar(gridLayoutWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 3, 0, 1, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        QFont font;
        font.setPointSize(8);
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_6);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font);
        label_7->setTextFormat(Qt::PlainText);
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setWordWrap(false);

        verticalLayout_3->addWidget(label_7);


        gridLayout->addLayout(verticalLayout_3, 1, 3, 1, 1);

        plainTextEdit = new QPlainTextEdit(gridLayoutWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(plainTextEdit, 1, 0, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 6, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(12);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnd = new QPushButton(gridLayoutWidget);
        btnd->setObjectName(QStringLiteral("btnd"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnd->sizePolicy().hasHeightForWidth());
        btnd->setSizePolicy(sizePolicy2);
        btnd->setMinimumSize(QSize(0, 60));
        btnd->setMaximumSize(QSize(16777215, 60));

        verticalLayout->addWidget(btnd);

        btnr = new QPushButton(gridLayoutWidget);
        btnr->setObjectName(QStringLiteral("btnr"));
        sizePolicy2.setHeightForWidth(btnr->sizePolicy().hasHeightForWidth());
        btnr->setSizePolicy(sizePolicy2);
        btnr->setMinimumSize(QSize(0, 60));
        btnr->setMaximumSize(QSize(16777215, 60));

        verticalLayout->addWidget(btnr);


        gridLayout->addLayout(verticalLayout, 1, 2, 1, 1);

        progressBar_3 = new QProgressBar(gridLayoutWidget);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(progressBar_3->sizePolicy().hasHeightForWidth());
        progressBar_3->setSizePolicy(sizePolicy3);
        progressBar_3->setValue(0);

        gridLayout->addWidget(progressBar_3, 5, 0, 1, 1);

        progressBar_2 = new QProgressBar(gridLayoutWidget);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        sizePolicy3.setHeightForWidth(progressBar_2->sizePolicy().hasHeightForWidth());
        progressBar_2->setSizePolicy(sizePolicy3);
        progressBar_2->setValue(0);

        gridLayout->addWidget(progressBar_2, 6, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        btnlang = new QPushButton(gridLayoutWidget);
        btnlang->setObjectName(QStringLiteral("btnlang"));
        sizePolicy2.setHeightForWidth(btnlang->sizePolicy().hasHeightForWidth());
        btnlang->setSizePolicy(sizePolicy2);
        btnlang->setMinimumSize(QSize(0, 60));
        btnlang->setMaximumSize(QSize(16777215, 60));

        verticalLayout_2->addWidget(btnlang);

        btnlang_2 = new QPushButton(gridLayoutWidget);
        btnlang_2->setObjectName(QStringLiteral("btnlang_2"));
        sizePolicy2.setHeightForWidth(btnlang_2->sizePolicy().hasHeightForWidth());
        btnlang_2->setSizePolicy(sizePolicy2);
        btnlang_2->setMinimumSize(QSize(0, 60));
        btnlang_2->setMaximumSize(QSize(16777215, 60));

        verticalLayout_2->addWidget(btnlang_2);


        gridLayout->addLayout(verticalLayout_2, 1, 1, 1, 1);

        btn_backup = new QPushButton(gridLayoutWidget);
        btn_backup->setObjectName(QStringLiteral("btn_backup"));

        gridLayout->addWidget(btn_backup, 8, 1, 1, 1);

        btn_restore = new QPushButton(gridLayoutWidget);
        btn_restore->setObjectName(QStringLiteral("btn_restore"));

        gridLayout->addWidget(btn_restore, 8, 2, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        gridLayout->addWidget(label_4, 8, 3, 1, 1);

        btn_clear = new QPushButton(gridLayoutWidget);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setMaximumSize(QSize(120, 16777215));
        btn_clear->setLayoutDirection(Qt::LeftToRight);
        btn_clear->setAutoDefault(false);

        gridLayout->addWidget(btn_clear, 8, 0, 1, 1);

        line_2 = new QFrame(gridLayoutWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_2, 2, 0, 1, 1);

        line_3 = new QFrame(gridLayoutWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_3, 2, 1, 1, 1);

        line_4 = new QFrame(gridLayoutWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_4, 2, 2, 1, 1);

        line_5 = new QFrame(gridLayoutWidget);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_5, 2, 3, 1, 1);

        line_6 = new QFrame(gridLayoutWidget);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_6, 7, 0, 1, 1);

        line_7 = new QFrame(gridLayoutWidget);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_7, 7, 1, 1, 1);

        line_8 = new QFrame(gridLayoutWidget);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_8, 7, 2, 1, 1);

        line_9 = new QFrame(gridLayoutWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_9, 7, 3, 1, 1);

        line_10 = new QFrame(gridLayoutWidget);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_10, 0, 0, 1, 1);

        line_11 = new QFrame(gridLayoutWidget);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_11, 0, 1, 1, 1);

        line_12 = new QFrame(gridLayoutWidget);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_12, 0, 2, 1, 1);

        line_13 = new QFrame(gridLayoutWidget);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line_13, 0, 3, 1, 1);

        wbsdclone->setCentralWidget(centralwidget);
        menubar = new QMenuBar(wbsdclone);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 532, 21));
        wbsdclone->setMenuBar(menubar);
        statusbar = new QStatusBar(wbsdclone);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        wbsdclone->setStatusBar(statusbar);

        retranslateUi(wbsdclone);

        QMetaObject::connectSlotsByName(wbsdclone);
    } // setupUi

    void retranslateUi(QMainWindow *wbsdclone)
    {
        wbsdclone->setWindowTitle(QApplication::translate("wbsdclone", "MainWindow", 0));
        label_3->setText(QApplication::translate("wbsdclone", "recipe", 0));
        label_6->setText(QApplication::translate("wbsdclone", "This function is used to clone or upload \n"
"machine setting from one to another. Database\n"
"contains \342\200\234drink button settings (recipe under button),\n"
" configuration, eco settings, \342\200\246 It does not clone\n"
"counter info and recipe settings (volume,ratio)", 0));
        label_7->setText(QApplication::translate("wbsdclone", "This function is used to clone or upload\n"
" machine recipes from one to another.\n"
"When cloning the recipes,  the machine \n"
"recipes will be copied to the computer. \n"
"When uploading machine recipes,the \n"
"the drink settings will be overwriten", 0));
        label_2->setText(QApplication::translate("wbsdclone", "backup&restore", 0));
        btnd->setText(QApplication::translate("wbsdclone", "upload database\n"
" to dispenser", 0));
        btnr->setText(QApplication::translate("wbsdclone", "upload machine recipes\n"
"  to dispenser", 0));
        label->setText(QApplication::translate("wbsdclone", "database", 0));
        btnlang->setText(QApplication::translate("wbsdclone", "clone database \n"
" from dispenser", 0));
        btnlang_2->setText(QApplication::translate("wbsdclone", "clone machine recipes\n"
"  from  dispenser", 0));
        btn_backup->setText(QApplication::translate("wbsdclone", "Backup", 0));
        btn_restore->setText(QApplication::translate("wbsdclone", "Restore", 0));
        label_4->setText(QApplication::translate("wbsdclone", " This function is only used to recovery\n"
" customer setting after update firmware.\n"
"The backup file (only for update from MCB SW \n"
"<0.99 to MCB SW 1.10)includes counters, \n"
"button layout, configuration,cleaning settings,\n"
" eco settings and display settings.\n"
"Please note that instant milk recipes will have to be reprogrammed.", 0));
        btn_clear->setText(QApplication::translate("wbsdclone", "Clear Text", 0));
    } // retranslateUi

};

namespace Ui {
    class wbsdclone: public Ui_wbsdclone {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WBSD_CLONE_H
