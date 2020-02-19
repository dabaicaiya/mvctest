#pragma once

#include <QByteArray>
#include <QMetaObject>
#include <QHash>

#ifndef OBJECTFACTORY_H
#define OBJECTFACTORY_H

/*类的注册工厂*/
class ObjectFactory
{
public:
	template<typename T>
	static void registerClass()
	{
		constructors().insert(T::staticMetaObject.className(), &constructorHelper<T>);
	}

	static QObject* createObject(const QByteArray& className, QObject* parent = NULL)
	{
		Constructor constructor = constructors().value(className);
		if (constructor == NULL)
			return NULL;
		return (*constructor)(parent);
	}

private:
	typedef QObject* (*Constructor)(QObject* parent);

	template<typename T>
	static T* constructorHelper(QObject* parent)
	{
		return new T(parent);
	}

	static QHash<QByteArray, Constructor>& constructors()
	{
		static QHash<QByteArray, Constructor> instance;
		return instance;
	}



};
#endif // OBJECTFACTORY_H
