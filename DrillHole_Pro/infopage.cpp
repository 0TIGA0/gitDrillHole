#include "infopage.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>

InfoPage::InfoPage(QWidget *parent) : QWidget(parent)
{
    lithologyButton=new QPushButton(QObject::tr("地层信息"));
    drillButton=new QPushButton(QObject::tr("钻孔信息"));
    lit_dirButton=new QPushButton(QObject::tr("钻孔分层信息"));
    v_drillButton=new QPushButton(QObject::tr("虚拟钻孔信息"));
    v_lit_dirButton=new QPushButton(QObject::tr("虚拟钻孔分层信息"));
    QVBoxLayout *partlayout=new QVBoxLayout;
    partlayout->addWidget(lithologyButton);
    partlayout->addWidget(drillButton);
    partlayout->addWidget(lit_dirButton);
    partlayout->addWidget(v_drillButton);
    partlayout->addWidget(v_lit_dirButton);
    QHBoxLayout *mainlayout=new QHBoxLayout;
    mainlayout->addWidget(new QLabel(QObject::tr("zhanwei")),8);
    mainlayout->addLayout(partlayout,2);
    this->setLayout(mainlayout);

}
