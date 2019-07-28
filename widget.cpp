#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>
#include <string>

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

void Widget::changeMoney(int n) {
    int tmp = this->money + n;
    if (tmp < 0) {
        QMessageBox msg;
        msg.information(nullptr,"Not enough money","No money");
        return;
    }
    this->money = tmp;
    ui->lcdNumber->display(this->money);
}

void Widget::on_s10_clicked()
{
  changeMoney(10);
}

void Widget::on_s50_clicked()
{
     changeMoney(50);
}

void Widget::on_s100_clicked()
{
     changeMoney(100);
}

void Widget::on_s500_clicked()
{
     changeMoney(500);
}


void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
}

void Widget::on_pbTea_clicked()
{
    changeMoney(-150);
}

void Widget::on_pbCoke_clicked()
{
    changeMoney(-200);
}

void Widget::on_reset_clicked()
{
    QMessageBox msg;
    msg.information(nullptr, "Return money ", QString::number(this->money));
}
