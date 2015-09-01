#include "wbsdcleaningwindow.h"
#include "ui_wbsdcleaningwindow.h"
#include "wbsdchildwindow.h"
#include "qstring.h"
#include "qdebug.h"
#include "application.h"
#include<QMessageBox>
/*modify by Lee
 * cleaning day set Give warning and go back to old or  default setting.
 *
 */
WBSDCleaningWindow::WBSDCleaningWindow(WBSDBaseWindow *parent) :
    WBSDChildWindow(parent),
    ui(new Ui::WBSDCleaningWindow)
{
    static const char* back[] = {
        QT_TRANSLATE_NOOP("back_cleaning", "Back")
    };

    ui->setupUi(this);

    menuBack = new QAction(Application::translate("back_cleaning",back[0]), this);
		menuBack->setEnabled(true);

    ui->menubar->addAction(menuBack);
    connect( menuBack, SIGNAL(triggered()), this, SLOT(on_menuBack_triggered()));

    boardDp1BitField = 0;
    boardDp27BitField = 0;
    _cleanFlag = 0;
    updateLabels();
    updateData();
    ui->centralwidget->setLayout(ui->gridLayout);
}

WBSDCleaningWindow::~WBSDCleaningWindow()
{
    delete ui;
}

void WBSDCleaningWindow::on_menuBack_triggered()
{
    this->close();
}

void WBSDCleaningWindow::setcleanmode()
{

    //if(ui->cleanMode->count()!=0) return;
    static const char* cleaningTxt[] = {
        QT_TRANSLATE_NOOP("cleaning_txt", "Cleaning request off"),
        QT_TRANSLATE_NOOP("cleaning_txt", "Cleaning request on"),
        QT_TRANSLATE_NOOP("cleaning_txt", "Flushing request off"),
        QT_TRANSLATE_NOOP("cleaning_txt", "Flushing request on"),
        QT_TRANSLATE_NOOP("cleaning_txt", "Off"),
        QT_TRANSLATE_NOOP("cleaning_txt", "Warning"),
        QT_TRANSLATE_NOOP("cleaning_txt", "Blocked")
    };
/* modify by lee : meet with the request for instant
 * first  : get the BIB setting if there is any milk or choco in the setting do follow
 * second : generate the cleaning mode seclection.so i need a clean mode flag here . _cleanFlag   0:all selection 1:only blocked can be choosen.
 * third: after setting ,if in the generalwindow the setting had been changed ,need here to be modyfy auto??
*/
    if(_cleanFlag == 1)
    {
        ui->cleanMode->addItem(Application::translate("cleaning_txt",cleaningTxt[6]),0x2);
    }
    else{
    ui->cleanMode->addItem(Application::translate("cleaning_txt",cleaningTxt[4]),0x0);
    ui->cleanMode->addItem(Application::translate("cleaning_txt",cleaningTxt[5]),0x1);
    ui->cleanMode->addItem(Application::translate("cleaning_txt",cleaningTxt[6]),0x2);
    }

    ui->clMonday->addItem(Application::translate("cleaning_txt",cleaningTxt[0]),0x0);
    ui->clMonday->addItem(Application::translate("cleaning_txt",cleaningTxt[1]),0x1);
    ui->clTuesday->addItem(Application::translate("cleaning_txt",cleaningTxt[0]),0x0);
    ui->clTuesday->addItem(Application::translate("cleaning_txt",cleaningTxt[1]),0x1);
    ui->clWednesday->addItem(Application::translate("cleaning_txt",cleaningTxt[0]),0x0);
    ui->clWednesday->addItem(Application::translate("cleaning_txt",cleaningTxt[1]),0x1);
    ui->clThursday->addItem(Application::translate("cleaning_txt",cleaningTxt[0]),0x0);
    ui->clThursday->addItem(Application::translate("cleaning_txt",cleaningTxt[1]),0x1);
    ui->clFriday->addItem(Application::translate("cleaning_txt",cleaningTxt[0]),0x0);
    ui->clFriday->addItem(Application::translate("cleaning_txt",cleaningTxt[1]),0x1);
    ui->clSaturday->addItem(Application::translate("cleaning_txt",cleaningTxt[0]),0x0);
    ui->clSaturday->addItem(Application::translate("cleaning_txt",cleaningTxt[1]),0x1);
    ui->clSunday->addItem(Application::translate("cleaning_txt",cleaningTxt[0]),0x0);
    ui->clSunday->addItem(Application::translate("cleaning_txt",cleaningTxt[1]),0x1);
    ui->flMonday->addItem(Application::translate("cleaning_txt",cleaningTxt[2]),0x0);
    ui->flMonday->addItem(Application::translate("cleaning_txt",cleaningTxt[3]),0x1);
    ui->flTuesday->addItem(Application::translate("cleaning_txt",cleaningTxt[2]),0x0);
    ui->flTuesday->addItem(Application::translate("cleaning_txt",cleaningTxt[3]),0x1);
    ui->flWednesday->addItem(Application::translate("cleaning_txt",cleaningTxt[2]),0x0);
    ui->flWednesday->addItem(Application::translate("cleaning_txt",cleaningTxt[3]),0x1);
    ui->flThursday->addItem(Application::translate("cleaning_txt",cleaningTxt[2]),0x0);
    ui->flThursday->addItem(Application::translate("cleaning_txt",cleaningTxt[3]),0x1);
    ui->flFriday->addItem(Application::translate("cleaning_txt",cleaningTxt[2]),0x0);
    ui->flFriday->addItem(Application::translate("cleaning_txt",cleaningTxt[3]),0x1);
    ui->flSaturday->addItem(Application::translate("cleaning_txt",cleaningTxt[2]),0x0);
    ui->flSaturday->addItem(Application::translate("cleaning_txt",cleaningTxt[3]),0x1);
    ui->flSunday->addItem(Application::translate("cleaning_txt",cleaningTxt[2]),0x0);
    ui->flSunday->addItem(Application::translate("cleaning_txt",cleaningTxt[3]),0x1);

    ui->flushMode->addItem(Application::translate("cleaning_txt",cleaningTxt[4]),0x0);
    ui->flushMode->addItem(Application::translate("cleaning_txt",cleaningTxt[5]),0x1);
    ui->flushMode->addItem(Application::translate("cleaning_txt",cleaningTxt[6]),0x2);

}

bool WBSDCleaningWindow::checkCleaning()
{
    int nocleancnt=0;
    int cleancyc[14];
    cleancyc[0]=ui->clMonday->currentIndex();
    cleancyc[1]=ui->clTuesday->currentIndex();
    cleancyc[2]=ui->clWednesday->currentIndex();
    cleancyc[3]=ui->clThursday->currentIndex();
    cleancyc[4]=ui->clFriday->currentIndex();
    cleancyc[5]=ui->clSaturday->currentIndex();
    cleancyc[6]=ui->clSunday->currentIndex();
    cleancyc[7]=ui->clMonday->currentIndex();
    cleancyc[8]=ui->clTuesday->currentIndex();
    cleancyc[9]=ui->clWednesday->currentIndex();
    cleancyc[10]=ui->clThursday->currentIndex();
    cleancyc[11]=ui->clFriday->currentIndex();
    cleancyc[12]=ui->clSaturday->currentIndex();
    cleancyc[13]=ui->clSunday->currentIndex();
    for(int i=0;i<14;i++)
    {
        if(cleancyc[i] ==0)
        {
            nocleancnt++;
            if(nocleancnt>3) return false;
        }
        else
        {
            nocleancnt =0;
        }
    }
    return true;
}

bool WBSDCleaningWindow::IswarningOn()
{
    if(_cleanFlag!=1) return false;
    _crtCleancnt = ui->clMonday->currentIndex()+
            ui->clTuesday->currentIndex()+
            ui->clWednesday->currentIndex()+
            ui->clThursday->currentIndex()+
            ui->clFriday->currentIndex()+
            ui->clSaturday->currentIndex()+
            ui->clSunday->currentIndex();
    if(checkCleaning()) return false;
    /*modify by lee how to explain it*/
    QMessageBox::question(this,QObject::tr("Cleaning Setting Warning"),QObject::tr("cleaning-Setting is not correct for current setting! \nmore than 3 consecutive days of cleaning-request-off setting is not allowed!"),QMessageBox::Ok);
    return true;
}

void WBSDCleaningWindow::connectionStatusChanged(int aStatus,StringMessage aMSG){
    itsBaseWindow->disconnectToMessages(this);
    if(aStatus<20)
    {
        this->close();
        this->deleteLater();
    }
}

void WBSDCleaningWindow::updateCleanFlushRequests(int conf)
{
    ui->clMonday->setCurrentIndex((0x8000 & conf) >> 15);
    ui->clTuesday->setCurrentIndex((0x4000 & conf) >> 14);
    ui->clWednesday->setCurrentIndex((0x2000 & conf) >> 13);
    ui->clThursday->setCurrentIndex((0x1000 & conf) >> 12);
    ui->clFriday->setCurrentIndex((0x800 & conf) >> 11);
    ui->clSaturday->setCurrentIndex((0x400 & conf) >> 10);
    ui->clSunday->setCurrentIndex((0x200 & conf) >> 9);
    ui->flMonday->setCurrentIndex((0x80 & conf) >> 7);
    ui->flTuesday->setCurrentIndex((0x40 & conf) >> 6);
    ui->flWednesday->setCurrentIndex((0x20 & conf) >> 5);
    ui->flThursday->setCurrentIndex((0x10 & conf) >> 4);
    ui->flFriday->setCurrentIndex((0x8 & conf) >> 3);
    ui->flSaturday->setCurrentIndex((0x4 & conf) >> 2);
    ui->flSunday->setCurrentIndex((0x2 & conf) >> 1);
    _crtCleancnt = ui->clMonday->currentIndex()+
            ui->clTuesday->currentIndex()+
            ui->clWednesday->currentIndex()+
            ui->clThursday->currentIndex()+
            ui->clFriday->currentIndex()+
            ui->clSaturday->currentIndex()+
            ui->clSunday->currentIndex();

}

void WBSDCleaningWindow::updateCleanMode(int conf)
{
    int noItems = ui->cleanMode->count();
    int index;

    for (index=0; index<noItems; index++){
        int itemVal = ui->cleanMode->itemData(index).toInt();
        if ((conf)==itemVal) {
            ui->cleanMode->setCurrentIndex(index);
            break;
        }
    }
    QString qss=QString("RJDEBUG WBSDCleaningWindow::updateCleanMode index %1").arg(index);
    qDebug () << qss;
}

void WBSDCleaningWindow::updateFlushMode(int conf)
{
    int noItems = ui->flushMode->count();
    int index;

    for (index=0; index<noItems; index++){
        int itemVal = ui->flushMode->itemData(index).toInt();
        if ((conf)==itemVal) {
            ui->flushMode->setCurrentIndex(index);
            break;
        }
    }
    QString qss=QString("RJDEBUG WBSDCleaningWindow::updateFlushMode index %1").arg(index);
    qDebug () << qss;
}

void WBSDCleaningWindow::updateLabels()
{

}

void WBSDCleaningWindow::on_clMonday_activated(int index)
{
    qDebug () << "RJDEBUG on_clMonday_activated";
    int value = ui->clMonday->itemData(index).toInt();
   if(IswarningOn()){ui->clMonday->setCurrentIndex(1);return;}
    setBoardDP1Parameter(value, 15);
}

void WBSDCleaningWindow::on_clTuesday_activated(int index)
{
    qDebug () << "RJDEBUG on_clMonday_activated";
    int value = ui->clTuesday->itemData(index).toInt();
    if(IswarningOn()){ui->clTuesday->setCurrentIndex(1);return;}
    setBoardDP1Parameter(value, 14);
}

void WBSDCleaningWindow::on_clWednesday_activated(int index)
{
    int value = ui->clWednesday->itemData(index).toInt();
    if(IswarningOn()){ui->clWednesday->setCurrentIndex(1);return;}
    setBoardDP1Parameter(value, 13);
}

void WBSDCleaningWindow::on_clThursday_activated(int index)
{
    int value = ui->clThursday->itemData(index).toInt();
    if(IswarningOn()){ui->clThursday->setCurrentIndex(1);return;}
    setBoardDP1Parameter(value, 12);
}

void WBSDCleaningWindow::on_clFriday_activated(int index)
{
    int value = ui->clFriday->itemData(index).toInt();
    if(IswarningOn()){ui->clFriday->setCurrentIndex(1);return;}
    setBoardDP1Parameter(value, 11);
}

void WBSDCleaningWindow::on_clSaturday_activated(int index)
{
    int value = ui->clSaturday->itemData(index).toInt();
    if(IswarningOn()){ui->clSaturday->setCurrentIndex(1);return;}
    setBoardDP1Parameter(value, 10);
}

void WBSDCleaningWindow::on_clSunday_activated(int index)
{
    int value = ui->clSunday->itemData(index).toInt();
    if(IswarningOn()){ui->clSunday->setCurrentIndex(1);return;}
    setBoardDP1Parameter(value, 9);
}

void WBSDCleaningWindow::on_flMonday_activated(int index)
{
    int value = ui->flMonday->itemData(index).toInt();
    setBoardDP1Parameter(value, 7);
}

void WBSDCleaningWindow::on_flTuesday_activated(int index)
{
    int value = ui->flTuesday->itemData(index).toInt();
    setBoardDP1Parameter(value, 6);
}

void WBSDCleaningWindow::on_flWednesday_activated(int index)
{
    int value = ui->flWednesday->itemData(index).toInt();
    setBoardDP1Parameter(value, 5);
}

void WBSDCleaningWindow::on_flThursday_activated(int index)
{
    int value = ui->flThursday->itemData(index).toInt();
    setBoardDP1Parameter(value, 4);
}

void WBSDCleaningWindow::on_flFriday_activated(int index)
{
    int value = ui->flFriday->itemData(index).toInt();
    setBoardDP1Parameter(value, 3);
}

void WBSDCleaningWindow::on_flSaturday_activated(int index)
{
    int value = ui->flSaturday->itemData(index).toInt();
    setBoardDP1Parameter(value, 2);
}

void WBSDCleaningWindow::on_flSunday_activated(int index)
{
    int value = ui->flSunday->itemData(index).toInt();
    setBoardDP1Parameter(value, 1);
}

void WBSDCleaningWindow::on_cleanMode_activated(int index)
{
    int value = ui->cleanMode->itemData(index).toInt();

    QString qss=QString("RJDEBUG on_cleanMode_activated value %1").arg(value);
    qDebug () << qss;
    setBoardDP27Parameter(value, 4, 4);
}

void WBSDCleaningWindow::on_flushMode_activated(int index)
{
    int value = ui->flushMode->itemData(index).toInt();

    QString qss=QString("RJDEBUG on_flushMode_activated value %1").arg(value);
    qDebug () << qss;
    setBoardDP27Parameter(value, 4, 0);
}

// Send Board DP block 1 message. Need to add all bit data in block 1.
void WBSDCleaningWindow::setBoardDP1Parameter(int value, int bitPos)
{
    QString qs=QString("RJDEBUG WBSDCleaningWindow::setBoardDP1Parameter, value = %1, bit pos = %2").arg(value).arg(bitPos);
    qDebug () << qs;

    if (value == 1) {
        boardDp1BitField = boardDp1BitField | (value << bitPos);
    }
    else { //Value 0
        boardDp1BitField = boardDp1BitField & ~(0x01 << bitPos);
    }

    ParameterMsg message(Message::MCB,Message::DP, 1, Message::SET_PARAMETER);
	message.setBit(bitPos,value);
    itsBaseWindow->addMessageToQue(message);
}

// Send Board DP block 27 message. Need to add all bit data in block 1.
void WBSDCleaningWindow::setBoardDP27Parameter(int value, int bitLen, int offset)
{
    unsigned int val = 0;

    QString qss=QString("RJDEBUG setBoardDP27Parameter, boardDp27BitField = %1").arg(boardDp27BitField);
    qDebug () << qss;
    ParameterMsg query(Message::MCB, Message::DP, 27, Message::SET_PARAMETER);
	switch (bitLen){
	case 1:
		query.setBit(offset,value);
		break;
	case 4:
		query.setNibble(offset/4,value);
		break;
	}
    itsBaseWindow->addMessageToQue(query);
}

void WBSDCleaningWindow::updateData()
{
    qDebug() << "WBSDCleaningWindow::updateData";

    ParameterMsg msg3(Message::MCB,Message::DP,4);
    msg3.getWord();
    itsBaseWindow->addMessageToQue(msg3);
    ParameterMsg msg1(Message::MCB,Message::DP,1);
    ParameterMsg msg2(Message::MCB,Message::DP,27);
    msg1.getWord();
    msg2.getWord();
    itsBaseWindow->addMessageToQue(msg1);
    itsBaseWindow->addMessageToQue(msg2);

}

void WBSDCleaningWindow::closeEvent(QCloseEvent *)
{
    emit iclose();
}

void WBSDCleaningWindow::gotMessage(Message aMsg)
{
    unsigned int aVal;
    QByteArray data=aMsg.getData();
    unsigned int lftBib;
    unsigned int rgtBib;
    QString hex=QString(data.toHex());
    Message::qtype atype=aMsg.getType();
    switch (atype){
        case (Message::REPLY_DB):
            switch ((unsigned char)aMsg.getBoard()){
                case (Message::MCB):
                    switch ((unsigned char)aMsg.getDataBaseType()){
                        case Message::DP:
                            switch(aMsg.getParameters().at(3)){
                                case (1):
                                    aVal= 0xFFFF & aMsg.getDataUInt();
                                    boardDp1BitField = aVal;
                                    qDebug() << "WBSDCleaningWindow::gotMessage MCB:DP:1 field=" << boardDp1BitField;
                                    updateCleanFlushRequests(boardDp1BitField);
                                    break;
                                case (27):
                                    aVal= 0xFFFF & aMsg.getDataUInt();
                                    boardDp27BitField = aVal;
                                    qDebug() << "WBSDCleaningWindow::gotMessage MCB:DP:27 field=" << boardDp27BitField;
                                    updateCleanMode((0xF0 & aVal) >> 4);
                                    updateFlushMode(0xF & aVal);
                                    break;
                            case (4):
                                aVal= 0xFFFF & aMsg.getDataUInt();
                                lftBib = aVal>>12;
                                rgtBib = ((aVal>>8) & 0x0F);
                                if(lftBib == 3 || lftBib == 5 || rgtBib == 3 || rgtBib == 5)
                                {
                                    _cleanFlag =1;
                                }
                                else
                                {
                                    _cleanFlag =0;
                                }
                                setcleanmode();
                                default:
                                    break;
                            }

                    }
                    break;
                case (Message::UIB):
                    switch ((unsigned char)aMsg.getDataBaseType()){
                        case Message::DP:
                            switch (aMsg.getParameters().at(3)){
                                case (0):
                                    //aVal= 0xFFFF & aMsg.getDataUInt();
                                    //doorDp0BitField = aVal;
                                    //updateTimeFormat((0x1000 & aVal) >> 12);
                                    break;
                                default:
                                    break;
                            }
                    }
                    break;
                default:
                    break;
            }
    }
}
