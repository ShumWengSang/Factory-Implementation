#include "Enemy.h"



Enemy::Enemy()
{
	Init();
}


Enemy::~Enemy()
{
}

void Enemy::Update()
{
	std::cout << "Enemy gameobject " << std::to_string(id) << " is updating." << std::endl;
}

void Enemy::Init()
{
	std::cout << "Enemy gameobject " << std::to_string(id) << " is initing." << std::endl;
}

void Enemy::ChangeAIState()
{
	if (currentState == IDLE)
	{
		currentState = SEARCHING;
	}
	else
	{
		currentState = IDLE;
	}
}