#pragma once
#include "GameObject.h"
class Hero :
	public GameObject
{
public:
	Hero();
	~Hero();

	void Update();
	void Init();

	void PrintHero();
};

