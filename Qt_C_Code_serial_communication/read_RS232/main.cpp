/*      GHN= Git Hub Naranjo
****************************************************************************
DATE    : MARK        : RISK    : COMMENT
100318  : GHN_00_00   : L       : First edit to track files adits
100318  : GHN_00_01   : L       : Addeed Qdebug include.

****************************************************************************
*/

#include "mainwindow.h"
#include <QApplication>
#include "var.h"
#include <QString>
#include <QTextStream>
#include "iostream"
#include "stdio.h"
#include <QDebug>




int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    printf(bud_rate);
//    std::cout << bud_rate;


















    return a.exec();
}
