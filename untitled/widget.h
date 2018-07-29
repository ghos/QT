#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "dialog.h"

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();
    Dialog* d;

private:

};

#endif // WIDGET_H
