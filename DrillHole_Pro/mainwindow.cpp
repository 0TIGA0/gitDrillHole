#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "homepage.h"
#include "infopage.h"
#include "imgpage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    pages = new QStackedWidget;
    HomePage *homepage=new HomePage;
    InfoPage *infopage=new InfoPage;
    ImgPage *imgpage=new ImgPage;
    pages->addWidget(homepage);
    pages->addWidget(infopage);
    pages->addWidget(imgpage);
    this->setCentralWidget(pages);

    QObject::connect(ui->actionforward,SIGNAL(triggered()),this,SLOT(pageForwardSlot()));
    QObject::connect(ui->actionback,SIGNAL(triggered()),this,SLOT(pageBackSlot()));
    QObject::connect(ui->actionhomepage,SIGNAL(triggered()),this,SLOT(pageHomePageSlot()));
    QObject::connect(ui->actioninfo_page,SIGNAL(triggered()),this,SLOT(pageInfoPageSlot()));
    QObject::connect(ui->actionimg_page,SIGNAL(triggered()),this,SLOT(pageImgPageSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//主页跳转
void MainWindow::pageHomePageSlot(){
    pages->setCurrentWidget(pages->widget(0));
}
//信息页跳转
void MainWindow::pageInfoPageSlot(){
    pages->setCurrentWidget(pages->widget(1));
}
//图像页跳转
void MainWindow::pageImgPageSlot(){
    pages->setCurrentWidget(pages->widget(2));
}
//页面前进
void MainWindow::pageForwardSlot(){
    if(pages->currentIndex()<2){
        int current=pages->currentIndex()+1;
        pages->setCurrentWidget(pages->widget(current));
    }
}
//页面后退
void MainWindow::pageBackSlot(){
    if(pages->currentIndex()>0){
        int current=pages->currentIndex()-1;
        pages->setCurrentWidget(pages->widget(current));
    }
}
