#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStackedWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QStackedWidget *pages;

public slots:
    void pageHomePageSlot();
    void pageInfoPageSlot();
    void pageImgPageSlot();
    void pageForwardSlot();
    void pageBackSlot();
};

#endif // MAINWINDOW_H
