#include <iostream>
#include <vector>
#include "IntermediateFactory.h"

using namespace std;

void main()
{
	vector<Object*> ObjectArray;
	cout << "This project is an INTERMEDIATE factory" << endl;
	cout << "Took me about 2 hours to create?" << endl;
	cout << "Running Method 1 and method 2" << endl;
	cout << endl;
	cout << endl;
	cout << "Starting Method 1." << endl;
	cout << endl;
	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create("Enemy"));
	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create("Enemy"));
	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create("Enemy"));

	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create("GameObject"));

	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create("Hero"));

	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create("Triangle"));

	cout << endl;
	cout << endl;

	for each (Object* obj in ObjectArray)
	{
		obj->Update();
	}

	cout << endl;
	cout << endl;

	cout << "Method 1 Over" << endl;
	cout << endl;
	cout << endl;

	for each (Object * var in ObjectArray)
	{
		delete var;
		var = NULL;
	}
	ObjectArray.clear();
	cout << "Starting Method 2" << endl;


	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create(LibraryObjects::Enemy));
	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create(LibraryObjects::Enemy));
	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create(LibraryObjects::Enemy));
	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create(LibraryObjects::Enemy));

	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create(LibraryObjects::GameObject));

	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create(LibraryObjects::Hero));

	ObjectArray.push_back(IntermediateFactory::GetInstance()->Create(LibraryObjects::Triangle));

	cout << endl;
	cout << endl;

	for each (Object* obj in ObjectArray)
	{
		obj->Update();
	}

	cout << endl;
	cout << endl;

	cout << "Method 2 Over" << endl;
	cout << endl;
	cout << endl;

	cout << endl;
	cout << endl;
	int input;
	cin >> input;
}