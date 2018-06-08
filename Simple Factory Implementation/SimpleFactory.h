#pragma once
#include "Objects_Enum.h"
#include "Object.h"


class SimpleFactory
{
private:

public:
	SimpleFactory();

	static SimpleFactory * GetInstance()
	{
		static SimpleFactory instance; //Guranteed to be destroyed
		return &instance;
	}

public:
	//We don't want people accidentally setting the singleton to a new instance
	SimpleFactory(SimpleFactory const&) = delete;
	void operator=(SimpleFactory const&) = delete;

	Object * Create(LibraryObjects::Objects id);
};

