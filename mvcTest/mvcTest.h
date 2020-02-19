#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mvcTest.h"
#include<iostream>
using namespace std;
class mvcTest : public QMainWindow
{
	Q_OBJECT

public:
	mvcTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::mvcTestClass ui;
};
