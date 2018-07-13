#ifndef IMGPAGE_H
#define IMGPAGE_H

#include <QWidget>
#include <QPushButton>

class ImgPage : public QWidget
{
    Q_OBJECT
public:
    explicit ImgPage(QWidget *parent = nullptr);

private:
    QPushButton *display_drillButton;   //钻孔显示与关闭
    QPushButton *display_traceButton;   //孔迹线显示与关闭
    //........根据功能添加..........

signals:

public slots:
};

#endif // IMGPAGE_H
