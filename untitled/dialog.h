#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>


class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
};

#endif // DIALOG_H
