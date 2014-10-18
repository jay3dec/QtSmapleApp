#include "calwidget.h"
#include "ui_calwidget.h"

CalWidget::CalWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalWidget)
{
    ui->setupUi(this);
}

CalWidget::~CalWidget()
{
    delete ui;
}

void CalWidget::on_btnAdd_clicked()
{
    QString input1,input2;
    int result;
    QString qString = NULL;

    input1 = ui->txtNum1->text();
    input2 = ui->txtNum2->text();


    int isNumber1 = input1.toInt();
    int isNumber2 = input2.toInt();

    if(isNumber1 && isNumber2){
        result = input1.toInt()+input2.toInt();
        qString = QString::number(result);
        ui->lblResult->setText(qString);
    }
    else{
        qString = QString::fromStdString("Enter Valid Numbers");
        ui->lblResult->setText(qString);
    }

}

void CalWidget::on_btnSub_clicked()
{
    QString input1,input2;
    int result;
    QString qString = NULL;

    input1 = ui->txtNum1->text();
    input2 = ui->txtNum2->text();


    int isNumber1 = input1.toInt();
    int isNumber2 = input2.toInt();

    if(isNumber1 && isNumber2){
        result = input1.toInt()-input2.toInt();
        qString = QString::number(result);
        ui->lblResult->setText(qString);
    }
    else{
        qString = QString::fromStdString("Enter Valid Numbers");
        ui->lblResult->setText(qString);
    }
}

void CalWidget::on_btnMul_clicked()
{
    QString input1,input2;
    int result;
    QString qString = NULL;

    input1 = ui->txtNum1->text();
    input2 = ui->txtNum2->text();


    int isNumber1 = input1.toInt();
    int isNumber2 = input2.toInt();

    if(isNumber1 && isNumber2){
        result = input1.toInt()*input2.toInt();
        qString = QString::number(result);
        ui->lblResult->setText(qString);
    }
    else{
        qString = QString::fromStdString("Enter Valid Numbers");
        ui->lblResult->setText(qString);
    }
}

void CalWidget::on_btnDiv_clicked()
{
    QString input1,input2;
    float result;
    QString qString = NULL;

    input1 = ui->txtNum1->text();
    input2 = ui->txtNum2->text();


    float isNumber1 = input1.toFloat();
    float isNumber2 = input2.toFloat();

    if(isNumber1 && isNumber2){
        result = input1.toFloat() / input2.toFloat();
        qString = QString::number(result);
        ui->lblResult->setText(qString);
    }
    else{
        qString = QString::fromStdString("Enter Valid Numbers");
        ui->lblResult->setText(qString);
    }
}
