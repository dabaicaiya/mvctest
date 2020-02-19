#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mvcTest.h"

class mvcTest : public QMainWindow
{
	Q_OBJECT

public:
	mvcTest(QWidget *parent = Q_NULLPTR);

private:
	Ui::mvcTestClass ui;
};
