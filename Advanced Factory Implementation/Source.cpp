#include <iostream>
#include <vector>
#include "AdvancedFactoryh.h"

using namespace std;

void main()
{
	vector<Object*> ObjectArray;
	AdvancedFactory::GetInstance()->Register<Enemy>("Enemy");
	AdvancedFactory::GetInstance()->Register<GameObject>("GameObject");
	AdvancedFactory::GetInstance()->Register<Hero>("Hero");
	AdvancedFactory::GetInstance()->Register<Triangle>("Triangle");

	cout << "This is an advanced Factory" << endl;
	cout << "We keep all the static function inside the factory" << endl;
	cout << "Took me about 1 hours to create?" << endl;
	cout << endl;
	cout << endl;
	ObjectArray.push_back(AdvancedFactory::GetInstance()->Create("Enemy"));
	ObjectArray.push_back(AdvancedFactory::GetInstance()->Create("Enemy"));
	ObjectArray.push_back(AdvancedFactory::GetInstance()->Create("Enemy"));

	ObjectArray.push_back(AdvancedFactory::GetInstance()->Create("GameObject"));

	ObjectArray.push_back(AdvancedFactory::GetInstance()->Create("Hero"));

	ObjectArray.push_back(AdvancedFactory::GetInstance()->Create("Triangle"));

	cout << endl;
	cout << endl;

	for each (Object* obj in ObjectArray)
	{
		obj->Update();
	}

	cout << endl;
	cout << endl;

	int input;
	cin >> input;
}