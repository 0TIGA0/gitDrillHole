#ifndef INFOPAGE_H
#define INFOPAGE_H

#include <QWidget>
#include <QPushButton>

class InfoPage : public QWidget
{
    Q_OBJECT
public:
    explicit InfoPage(QWidget *parent = nullptr);
    QPushButton *lithologyButton;
    QPushButton *drillButton;
    QPushButton *lit_dirButton;
    QPushButton *v_drillButton;
    QPushButton *v_lit_dirButton;

signals:

public slots:
};

#endif // INFOPAGE_H
