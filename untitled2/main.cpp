#include "widget.h"
#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    Dialog d;
    if(d.exec() == QDialog::Accepted)   //判断dialog执行结果

       {
          w.show();                    //如果按下了“进入主界面”按钮，则进入主界面
          return a.exec();

       }

    else return 0;
}
