#pragma once
#include "SimpleFactory.h"

SimpleFactory::SimpleFactory()
{

}

Object * SimpleFactory::Create(LibraryObjects::Objects id)
{
	switch (id)
	{
	case LibraryObjects::Enemy:
		return new Enemy();
		break;
	case LibraryObjects::GameObject:
		return new GameObject();
		break;
	case LibraryObjects::Hero:
		return new Hero();
		break;
	case LibraryObjects::Triangle:
		return new Triangle();
		break;
	default:
		return new GameObject();
	}
}