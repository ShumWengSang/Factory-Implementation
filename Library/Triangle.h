#pragma once
#include "Object.h"
#include "vector3D.h"
class Triangle :
	public Object
{
private:
	int num;
	Vector3D Pos;

public:
	static int count;
	void Init();
	void Update();
	Vector3D& getPos();
	Triangle();
	~Triangle();
};
