#include "mvcTest.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	mvcTest w;
	w.show();
	return a.exec();
}
