#include <QObject>
#include "wbsdbasewindow.h"
#include "wbsd_serial_port.h"
#include "qdebug.h"
#include "stringmessage.h"

/*modify by Lee 11-03-2014
add the function to get and set the state from table tb_state


*/
WBSDBaseWindow::WBSDBaseWindow(QWidget *parent)
	: QMainWindow(parent)
{

    connect(wbsd_SERIAL_PORT::itsInstance,SIGNAL(gotMessage(Message)),this,SLOT(gotMessage(Message)));
    connect(wbsd_SERIAL_PORT::itsInstance,SIGNAL(connectionStatusChanged(int,StringMessage)),this,SLOT(connectionStatusChanged(int,StringMessage)));
    curtUnitTmp =0;
    _crtMachineUnit = UNIT_Other;
}


WBSDBaseWindow::~WBSDBaseWindow()
{

}

void WBSDBaseWindow::connectToMessages(QObject *aWindow){
    connect(this ,SIGNAL(transferMessage(Message)),aWindow,SLOT(gotMessage(Message)));
    connect(this ,SIGNAL(newConnectionStatus(int,StringMessage)),aWindow,SLOT(connectionStatusChanged (int,StringMessage)));
}
void WBSDBaseWindow::disconnectToMessages(QObject *aWindow){
    disconnect(aWindow,SLOT(gotMessage(Message)));
    disconnect(aWindow,SLOT(connectionStatusChanged (int,StringMessage)));
}


bool WBSDBaseWindow::event(QEvent *event)
{
    if(event->type() == QEvent::NonClientAreaMouseButtonPress)
    {

            wbsd_SERIAL_PORT::instance()->setWincheck(true);

    }
    if(event->type() == QEvent::NonClientAreaMouseButtonRelease)
    {
        wbsd_SERIAL_PORT::instance()->setWincheck(false);
    }
    QMainWindow::event(event);
}

void WBSDBaseWindow::setwincheck(bool a)
{
    wbsd_SERIAL_PORT::instance()->setWincheck(a);
}


void WBSDBaseWindow::connectionStatusChanged (int aStatus,StringMessage aMSG){
    emit newConnectionStatus(aStatus,aMSG);
}



int WBSDBaseWindow::addMessageToQue(Message aMsg){
	//QString qsss=QString("Add message %1 queryQUE before:%2").arg(aMsg.getMsg().toHex().length()).arg(queryQue.length());
    //qDebug () << qsss;
	return wbsd_SERIAL_PORT::instance()->addMessageToQue(aMsg);
}



void WBSDBaseWindow::gotMessage(Message aMsg){
	//qDebug() << "Got message:" << aMsg.getMsg().toHex();

	emit transferMessage(aMsg);

//	if (queryQue.length()==0)
//		this->setCursor(Qt::ArrowCursor);
}

