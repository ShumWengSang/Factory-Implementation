#pragma once
#include "Objects_Enum.h"
#include "Object.h"
#include <map>
#include <string>

class Inter_Hero : public Hero
{
public:
	static Object * Create() { return new Inter_Hero(); }
};

class Inter_Enemy : public Enemy
{
public:
	static Object * Create() { return new Inter_Enemy(); }
};

class Inter_Triangle : public Triangle
{
public:
	static Object * Create() { return new Triangle(); }
};

class Inter_GameObject : public GameObject
{
public:
	static Object * Create() { return new GameObject(); }
};

// Create function pointer called CreateFn
typedef Object* ( *CreateFn)(void);

class IntermediateFactory
{
private:
	//*************Method 1****************************************

	//Map that contains string and the function pointer
	typedef std::map<std::string, CreateFn> FactoryMap;
	FactoryMap m_FactoryMap;
public:
	IntermediateFactory() {
		Register("Triangle", &Inter_Triangle::Create);
		Register("Enemy", &Inter_Enemy::Create);
		Register("Hero", &Inter_Hero::Create);
		Register("GameObject", &Inter_GameObject::Create);
	};
	~IntermediateFactory() { m_FactoryMap.clear(); }

	static IntermediateFactory * GetInstance()
	{
		static IntermediateFactory instance; //Guranteed to be destroyed
		return &instance;
	}

	//We don't want people accidentally setting the singleton to a new instance
	IntermediateFactory(IntermediateFactory const&) = delete;
	void operator=(IntermediateFactory const&) = delete;

public :
	void Register(const std::string& name, CreateFn fn)
	{
		m_FactoryMap[name] = fn;
	}

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

	//***********************Method 2**********************************
public:
	Object * Create(LibraryObjects::Objects id)
	{
		switch (id)
		{
		case LibraryObjects::Enemy:
			return Inter_Enemy::Create();
			break;
		case LibraryObjects::GameObject:
			return Inter_GameObject::Create();
			break;
		case LibraryObjects::Hero:
			return Inter_Hero::Create();
			break;
		case LibraryObjects::Triangle:
			return Inter_Triangle::Create();
			break;
		default:
			return new GameObject();
		}
	}
};

