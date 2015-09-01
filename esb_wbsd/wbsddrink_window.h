#ifndef WBSDDRINK_WINDOW_H
#define WBSDDRINK_WINDOW_H

#include <QMainWindow>
#include "wbsdchildwindow.h"
#include "Recipe.h"

namespace Ui {
class WBSDDrink_Window;
}
const qreal _ozunit = 29.57;
class WBSDDrink_Window : public WBSDChildWindow
{
    Q_OBJECT
    
public:
    explicit WBSDDrink_Window(int button,WBSDBaseWindow *parent = 0);
    ~WBSDDrink_Window();
    void updateData();
    bool setTabKatCBO(int aValue,QComboBox* aCombo);
	void setEnableRTDGrp(bool aStatus);
	void setEnableLBIBGrp(bool aStatus);
	void setEnableRBIBGrp(bool aStatus);
	void setEnableInstGrp(bool aStatus);
	void setEnableButtons(bool aStatus);
	QString enableDrink(int aType);
	void reload(int button);
    void closeEvent(QCloseEvent *);
signals:
    void iclose();

public slots:
    void gotMessage(Message aMsg);
    void connectionStatusChanged(int aStatus,StringMessage aMSG);
	void on_cboRecipe_activated(int index);
	void reload();
    void tabwidgetchange(int index);

private slots:

	void on_menuBack_triggered();

    void on_btnSave_clicked();

    void on_btnCancel_clicked();

    void on_btnSetDefault_clicked();

    void on_btnRestoreDefault_clicked();

    void on_spRTDSmall_editingFinished();
    void on_spRTDSmall_valueChanged(int arg1);

    void on_spRTDMedium_editingFinished();
    void on_spRTDMedium_valueChanged(int arg1);

    void on_spRTDLarge_editingFinished();
    void on_spRTDLarge_valueChanged(int arg1);

    void on_spLBibStrong_editingFinished();
    void on_spLBibStrong_valueChanged(double arg1);

    void on_spLBibMedium_editingFinished();
    void on_spLBibMedium_valueChanged(double arg1);

    void on_spLBibMild_editingFinished();
    void on_spLBibMild_valueChanged(double arg1);

    void on_spRBibStrong_editingFinished();
    void on_spRBibStrong_valueChanged(double arg1);

    void on_spRBibMedium_editingFinished();
    void on_spRBibMedium_valueChanged(double arg1);

    void on_spRBibMild_editingFinished();
    void on_spRBibMild_valueChanged(double arg1);

    void on_spCanGramStrong_editingFinished();
    void on_spCanGramStrong_valueChanged(double arg1);

    void on_spCanGramMedium_editingFinished();
    void on_spCanGramMedium_valueChanged(double arg1);

    void on_spCanGramMild_editingFinished();
    void on_spCanGramMild_valueChanged(double arg1);

    void on_spLBibPercentOfDrink_valueChanged(double arg1);
    void on_spLBibPercentOfDrink_editingFinished();

    void on_spLBibAirpump_valueChanged(double arg1);
    void on_spLBibAirpump_editingFinished();

	void on_spRBibAirpump_valueChanged(double arg1);
    void on_spRBibAirpump_editingFinished();


private:
    QAction *menuBack;
    Ui::WBSDDrink_Window *ui;
    bool isNewDrink;
    bool isVisible;
    int itsButton;
	int itsCfg;
	Recipe *itsRecipe;
};

#endif // WBSDDRINK_WINDOW_H
