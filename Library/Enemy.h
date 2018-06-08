#pragma once
#include "GameObject.h"
class Enemy :
	public GameObject
{
	enum AI_State
	{
		IDLE,
		SEARCHING
	};
	AI_State currentState;
public:
	Enemy();
	~Enemy();

	void Update();
	void Init();

	void ChangeAIState();

};

