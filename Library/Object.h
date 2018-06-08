#pragma once
#include "vector3D.h"
#include <iostream>
#include <string>

class Object
{
public:
	Object();

	virtual void Update() = 0;
	virtual void Init() = 0;
	
	virtual Vector3D& getPos() = 0;
};

