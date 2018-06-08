#pragma once
#include <map>
#include "Object.h"
#include <string>
#include "Objects_Enum.h"

class AdvancedFactory
{
public:

	static AdvancedFactory * GetInstance()
	{
		static AdvancedFactory instance; //Guranteed to be destroyed
		return &instance;
	}

public:
	template <typename T>
	void Register(const char* name)
	{
		m_CreateFuncs[name] = &CreateFunc<T>;
	}
private:
	template <typename T>
	static Object* CreateFunc()
	{
		return new T;
	}
private:
	typedef Object * (*CreateFn)(void);
	typedef std::map<std::string, CreateFn> FactoryMap;
	FactoryMap m_FactoryMap;

};