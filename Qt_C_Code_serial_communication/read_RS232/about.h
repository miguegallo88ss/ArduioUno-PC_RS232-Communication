/*      GHN= Git Hub Naranjo
****************************************************************************
DATE    : MARK        : RISK    : COMMENT
100318  : GHN_00_00   : L       : First edit to track files adits


****************************************************************************
*/

#ifndef ABOUT_H
#define ABOUT_H

#include <QDialog>
#include <QTextStream>
#include "iostream"

namespace Ui {
class About;
}

class About : public QDialog
{
    Q_OBJECT

public:
    explicit About(QWidget *parent = nullptr);
    ~About();

private slots:
    void on_about_ok_button_clicked();

private:
    Ui::About *ui;
};

#endif // ABOUT_H
