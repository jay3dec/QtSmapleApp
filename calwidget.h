#ifndef CALWIDGET_H
#define CALWIDGET_H

#include <QMainWindow>

namespace Ui {
class CalWidget;
}

class CalWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalWidget(QWidget *parent = 0);
    ~CalWidget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_btnAdd_clicked();

    void on_btnSub_clicked();

    void on_btnMul_clicked();

    void on_btnDiv_clicked();

private:
    Ui::CalWidget *ui;
};

#endif // CALWIDGET_H
