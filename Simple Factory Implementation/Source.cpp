#include <iostream>
#include "SimpleFactory.h"
#include <vector>
using namespace std;


void main()
{
	vector<Object*> ObjectArray;
	cout << "This project uses a simple factory. Creation time is about an hour or so. " << endl;

	cout << "So lets create some objects and test them to see if factory works" << endl;
	cout << endl;
	cout << endl;

	ObjectArray.push_back(SimpleFactory::GetInstance()->Create(LibraryObjects::Enemy));
	ObjectArray.push_back(SimpleFactory::GetInstance()->Create(LibraryObjects::Enemy));
	ObjectArray.push_back(SimpleFactory::GetInstance()->Create(LibraryObjects::Enemy));
	ObjectArray.push_back(SimpleFactory::GetInstance()->Create(LibraryObjects::Enemy));

	ObjectArray.push_back(SimpleFactory::GetInstance()->Create(LibraryObjects::GameObject));

	ObjectArray.push_back(SimpleFactory::GetInstance()->Create(LibraryObjects::Hero));

	ObjectArray.push_back(SimpleFactory::GetInstance()->Create(LibraryObjects::Triangle));

	cout << endl;
	cout << endl;

	for each (Object* obj in ObjectArray)
	{
		obj->Update();
	}

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