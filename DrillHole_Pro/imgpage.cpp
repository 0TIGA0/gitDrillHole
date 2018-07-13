#include "imgpage.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>

ImgPage::ImgPage(QWidget *parent) : QWidget(parent)
{
    display_drillButton=new QPushButton(QObject::tr("zuankong"));
    display_traceButton=new QPushButton(QObject::tr("kongjixian"));
    QVBoxLayout *partlayout=new QVBoxLayout;
    partlayout->addWidget(display_drillButton);
    partlayout->addWidget(display_traceButton);
    QHBoxLayout *mainlayout=new QHBoxLayout;
    mainlayout->addWidget(new QLabel(QObject::tr("zhanwei")),8);
    mainlayout->addLayout(partlayout,2);
    this->setLayout(mainlayout);
}
