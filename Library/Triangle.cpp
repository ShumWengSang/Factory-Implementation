#include "Triangle.h"


Triangle::Triangle() : num(count++)
{
	Init();
}


Triangle::~Triangle()
{
}

void Triangle::Init()
{
	std::cout << "I have just inited triangle with ID " << std::to_string(num) << std::endl;
}

void Triangle::Update()
{
	std::cout << "I am updating triangle with ID " << std::to_string(num) << std::endl;
}

Vector3D& Triangle::getPos()
{
	return Pos;
}
int Triangle::count = 0;