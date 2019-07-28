#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}



class Widget : public QWidget
{
    void changeMoney(int n);
    int money {0};

    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_s10_clicked();

    void on_s50_clicked();

    void on_s100_clicked();

    void on_s500_clicked();

    void on_pbCoffee_clicked();

    void on_pbTea_clicked();

    void on_pbCoke_clicked();

    void on_reset_clicked();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
