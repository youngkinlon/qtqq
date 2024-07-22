#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qtqq.h"

class qtqq : public QMainWindow
{
    Q_OBJECT

public:
    qtqq(QWidget *parent = nullptr);
    ~qtqq();

private:
    Ui::qtqqClass ui;
};
