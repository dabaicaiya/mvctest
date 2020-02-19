#include "mvcTest.h"
#include"InitProject.h"
#include"ObjectFactory.h"
mvcTest::mvcTest(QWidget *parent)
	: QMainWindow(parent)
{
	//ui.setupUi(this);

	InitProject *init =new InitProject();
	init->rejisterFactory();


	QObject *o=ObjectFactory::createObject("QPushButton");

	cout << o->metaObject()->className();



	


}
