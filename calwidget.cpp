#include "calwidget.h"
#include "ui_calwidget.h"

calwidget::calwidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::calwidget)
{
    ui->setupUi(this);
}

calwidget::~calwidget()
{
    delete ui;
}

void calwidget::on_btnAdd_clicked()
{
    QString input1,input2;
    int result;
    QString qString = NULL;

    // Read from input text
    input1 = ui->txtNum1->text();
    input2 = ui->txtNum2->text();


    int isNumber1 = input1.toInt();
    int isNumber2 = input2.toInt();

    // Check if numeric
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

// Sub operation click event
void calwidget::on_btnSub_clicked()
{
    QString input1,input2;
        int result;
        QString qString = NULL;

        // Read from input text
        input1 = ui->txtNum1->text();
        input2 = ui->txtNum2->text();


        int isNumber1 = input1.toInt();
        int isNumber2 = input2.toInt();

        // Check if numeric
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

// Mul operation click event
void calwidget::on_btnMul_clicked()
{
    QString input1,input2;
        int result;
        QString qString = NULL;

        // Read from input text
        input1 = ui->txtNum1->text();
        input2 = ui->txtNum2->text();


        int isNumber1 = input1.toInt();
        int isNumber2 = input2.toInt();

         // Check if numeric
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

// Div operation click event
void calwidget::on_btnDiv_clicked()
{
    QString input1,input2;
    float result;
    QString qString = NULL;

     // Read from input text
    input1 = ui->txtNum1->text();
    input2 = ui->txtNum2->text();


    float isNumber1 = input1.toFloat();
    float isNumber2 = input2.toFloat();

    // Check if numeric
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


