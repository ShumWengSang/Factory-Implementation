#pragma once
#include "Object.h"

class GameObject :
	public Object
{
protected :
	int id;
	static int count;
	Vector3D Pos;
public:
	GameObject();
	~GameObject();

	void Update();
	void Init();

	Vector3D& getPos();
	void SetPos(const Vector3D& vector);

};

