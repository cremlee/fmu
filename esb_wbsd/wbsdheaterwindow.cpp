#include "wbsdheaterwindow.h"
#include "ui_wbsdheaterwindow.h"
#include "qdebug.h"
#include "wbsdchildwindow.h"
#include "application.h"
#define Kelly
WBSDHeaterWindow::WBSDHeaterWindow(WBSDBaseWindow *parent) :
    WBSDChildWindow(parent),
    ui(new Ui::WBSDHeaterWindow)
{
    static const char* back[] = {
        QT_TRANSLATE_NOOP("back_heater", "Back")
    };

    ui->setupUi(this);

    menuBack = new QAction(Application::translate("back_heater",back[0]), this);
		menuBack->setEnabled(true);

    ui->menubar->addAction(menuBack);
    connect( menuBack, SIGNAL(triggered()), this, SLOT(on_menuBack_triggered()));

    /*Lee.li Modify 2014-9-24

    */
    myTimer=new QTimer(this);
    myTimer->setSingleShot(true);
    ParameterMsg msg4(Message::MCB,Message::DP,0);
    msg4.getWord();
    itsBaseWindow->addMessageToQue(msg4);

	updateData();
    ui->centralwidget->setLayout(ui->verticalLayout);
#ifndef Kelly
    ui->label_6->setVisible(false);
    ui->lbl_av10->setVisible(false);
#endif
}

WBSDHeaterWindow::~WBSDHeaterWindow()
{
    myTimer->stop();
    myTimer->deleteLater();
    myTimer =0;
    delete ui;
}

void WBSDHeaterWindow::closeEvent(QCloseEvent *)
{
    emit iclose();

}

void WBSDHeaterWindow::on_menuBack_triggered()
{
    this->close();

}

void WBSDHeaterWindow::connectionStatusChanged(int aStatus,StringMessage aMSG)
{
    itsBaseWindow->disconnectToMessages(this);
    if(aStatus<20)
    {
        this->close();
        this->deleteLater();
    }
}

void WBSDHeaterWindow::on_heaterRelay_pressed()
{
    ParameterMsg message1(Message::MCB,Message::DV,2);
    ParameterMsg message2(Message::MCB,Message::DV,15);
    message1.setBit(10,1);
    message2.setBit(3,1);
    itsBaseWindow->addMessageToQue(message1);
    itsBaseWindow->addMessageToQue(message2);
}

void WBSDHeaterWindow::on_heaterRelay_released()
{
    ParameterMsg message1(Message::MCB,Message::DV,2);
    ParameterMsg message2(Message::MCB,Message::DV,15);
    message1.setBit(10,0);
    message2.setBit(3,0);
    itsBaseWindow->addMessageToQue(message2);
    itsBaseWindow->addMessageToQue(message1);
}

void WBSDHeaterWindow::on_cooler_pressed()
{
    ParameterMsg message1(Message::MCB,Message::DV,2);
    ParameterMsg message2(Message::MCB,Message::DV,15);
    message1.setBit(10,1);
    message2.setBit(1,1);
    itsBaseWindow->addMessageToQue(message1);
    itsBaseWindow->addMessageToQue(message2);
}

void WBSDHeaterWindow::on_cooler_released()
{
    ParameterMsg message1(Message::MCB,Message::DV,2);
    ParameterMsg message2(Message::MCB,Message::DV,15);
    message1.setBit(10,0);
    message2.setBit(1,0);
    itsBaseWindow->addMessageToQue(message2);
    itsBaseWindow->addMessageToQue(message1);
}

void WBSDHeaterWindow::updateData()
{
#ifdef Kelly
    ParameterMsg msg6(Message::MCB,Message::AV,3);
    msg6.getFloat();
    itsBaseWindow->addMessageToQue(msg6);

    ParameterMsg msg7(Message::MCB,Message::DV,21);
    msg7.getWord();
    itsBaseWindow->addMessageToQue(msg7);
#endif
    ParameterMsg msg1(Message::MCB,Message::AV,0);
    ParameterMsg msg2(Message::MCB,Message::AV,1);
    ParameterMsg msg3(Message::MCB,Message::AV,2);
    msg1.getFloat();
    msg2.getFloat();
    msg3.getFloat();
    itsBaseWindow->addMessageToQue(msg1);
    itsBaseWindow->addMessageToQue(msg2);
    itsBaseWindow->addMessageToQue(msg3);

    ParameterMsg msg5(Message::MCB,Message::AP,4);
    msg5.getFloat();
    itsBaseWindow->addMessageToQue(msg5);


}
void WBSDHeaterWindow::gotMessage(Message aMsg)
{
    int aVal;
    Message::qtype atype=aMsg.getType();
    switch (atype){
    case (Message::REPLY_DB):
        switch ((unsigned char)aMsg.getBoard()){
        case Message::MCB:
            switch ((unsigned char)aMsg.getDataBaseType())
            {
            case Message::DV:
                switch (aMsg.getParameters().at(3)) {
                case 21:
                    aVal = aMsg.getDataUInt();
                    kellyvalue1 = aVal;
                    //ui->lbl_av10->setText(QString("Dv21Bit7=%1,AV3=%2").arg(kellyvalue1).arg(kellyvalue2));

                break;
                default:
                    break;
                }
            case Message::DP:
                switch (aMsg.getParameters().at(3)) {
                case (0):
                    aVal=aMsg.getDataUInt();
                    //qDebug()<<"(0x8000 & aVal) >> 15"<<((0x8000 & aVal) >> 15);
                    itsBaseWindow->setUnitTmp((0x8000 & aVal) >> 15);
                    /*modify by Lee  c/f  */
                    break;
                default:
                    break;
                }
            case Message::AP:
                if(aMsg.getParameters().at(3) == 4)
                {
                    if(itsBaseWindow->getUnitTmp() == 0)
                    {
                        ui->lb_rfsetpoint->setText(QString("%1 °C").arg(aMsg.getDataFloat()));
                    }else
                    {
                       ui->lb_rfsetpoint->setText(QString("%1 °F").arg(aMsg.getDataFloat()));
                    }
                }
            case Message::AV:
                switch(aMsg.getParameters().at(3)){
                case 3:
                    kellyvalue2 = aMsg.getDataFloat();
                    //ui->lbl_av10->setText(QString("DP26Bit4=%1,AV3=%2").arg(kellyvalue1).arg(kellyvalue2));
                    break;
                case 0:
                    if(itsBaseWindow->getUnitTmp() == 0)
                    {
                        ui->lblBoilerTempTop->setText(QString("%1 °C").arg(aMsg.getDataFloat()));
                    }else
                    {
                        ui->lblBoilerTempTop->setText(QString("%1 °F").arg(aMsg.getDataFloat()));
                    }
                    break;
                case 1:
                    if(itsBaseWindow->getUnitTmp() == 0)
                    {
                        ui->lblBoilerTempMid->setText(QString("%1 °C").arg(aMsg.getDataFloat()));
                    }else
                    {
                        ui->lblBoilerTempMid->setText(QString("%1 °F").arg(aMsg.getDataFloat()));
                    }
                    //ui->lblBoilerTempMid->setText(QString("%1 C").arg(aMsg.getDataFloat()));
                    break;
                case 2:
                    if(itsBaseWindow->getUnitTmp() == 0)
                    {
                        ui->lblCoolboxTemp->setText(QString("%1 °C").arg(aMsg.getDataFloat()));
                    }else
                    {
                        ui->lblCoolboxTemp->setText(QString("%1 °F").arg(aMsg.getDataFloat()));
                    }
                    //ui->lblCoolboxTemp->setText(QString("%1 C").arg(aMsg.getDataFloat()));
                    if (myTimer!=0)
                        myTimer->singleShot(500,this,SLOT(updateData()));
                    break;
                default:
                    break;
                }
            }
        }
    }
}
