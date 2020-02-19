#include "InitProject.h"
#include"ObjectFactory.h"
#include<qlistwidget.h>
#include<qpushbutton.h>
void InitProject::rejisterFactory()
{

	ObjectFactory::registerClass<QPushButton>();
	ObjectFactory::registerClass<QListWidget>();

}
InitProject::InitProject() {


}