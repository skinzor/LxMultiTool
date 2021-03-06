#ifndef DIALOGRECOVERY_H
#define DIALOGRECOVERY_H

#include <QDialog>
#include <QDirIterator>
#include <QMessageBox>
#include <QProcess>
#include <QCloseEvent>
#include <QDesktopServices>
#include "deviceconnection.h"

namespace Ui {
class DialogRecovery;
}

class DialogRecovery : public QDialog
{
    Q_OBJECT

public:
    explicit DialogRecovery(QWidget *parent = 0);
    ~DialogRecovery();

private slots:
    void processOutput();

    void processFinished(int exitCode);

    void on_flashButton_clicked();

    void on_exploreButton_clicked();

    void on_tableWidget_itemClicked();

    void on_actionRefresh_triggered();

    void on_actionDelete_triggered();

    void on_bootButton_clicked();

private:
    Ui::DialogRecovery *ui;
    bool busy = false;
    void getFiles();
    void closeEvent(QCloseEvent *event);
};

#endif // DIALOGRECOVERY_H
