#include "Hero.h"



Hero::Hero()
{
	Init();
}


Hero::~Hero()
{
}

void Hero::Update()
{
	std::cout << "Hero Update! My id is " << std::to_string(id) << "!" << std::endl;
}

void Hero::Init()
{
	std::cout << "Hero Init! My id is " << std::to_string(id) << "!" << std::endl;
}

void Hero::PrintHero()
{
	std::cout << "I am the hero! My id is " << std::to_string(id) << "!" << std::endl;
}