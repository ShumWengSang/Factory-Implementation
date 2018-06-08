#include "GameObject.h"



GameObject::GameObject() : id(count++)
{
	Init();
}


GameObject::~GameObject()
{
}

void GameObject::Update()
{
	std::cout << "Gameobject " << std::to_string(id) << " is updating." << std::endl;
}

void GameObject::Init()
{
	std::cout << "Gameobject " << std::to_string(id) << " has inited." << std::endl;
}

Vector3D& GameObject::getPos()
{
	return Pos;
}

void GameObject::SetPos(const Vector3D& vector)
{
	//Deep copy
	this->Pos = Vector3D(vector);
}
int GameObject::count = 0;