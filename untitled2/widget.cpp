#include "widget.h"
#include "ui_widget.h"
#include "QDialog"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    QDialog *dialog =new QDialog();

        dialog->exec();
}
