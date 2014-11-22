#ifndef CALWIDGET_H
#define CALWIDGET_H

#include <QMainWindow>

namespace Ui {
class calwidget;
}

class calwidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit calwidget(QWidget *parent = 0);
    ~calwidget();

private slots:
    void on_btnAdd_clicked();

    void on_btnSub_clicked();

    void on_btnMul_clicked();

    void on_btnDiv_clicked();

private:
    Ui::calwidget *ui;
};

#endif // CALWIDGET_H
