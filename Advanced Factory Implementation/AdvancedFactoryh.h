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
		m_FactoryMap[name] = &CreateFunc<T>;
	}
private:
	template <typename T>
	static Object* CreateFunc()
	{
		return new T;
	}
public:
	Object * Create(const std::string &name)
	{
		FactoryMap::iterator it = m_FactoryMap.find(name);
		if (it != m_FactoryMap.end())
		{
			CreateFn create_animal = it->second;
			return create_animal();
		}
		return NULL;
	}
private:
	typedef Object * (*CreateFn)(void);
	typedef std::map<std::string, CreateFn> FactoryMap;
	FactoryMap m_FactoryMap;

};