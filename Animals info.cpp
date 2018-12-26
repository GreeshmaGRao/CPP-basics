#include "pch.h"
#include <iostream>
#include <cstring>
using namespace std;
struct Animals {
	char name[100];
	char type[50];
	char colour[20];
	int age;
};

int main()
{
	struct Animals Animal1;
	struct Animals Animal2;
	strcpy_s(Animal1.name, "Tiger");
	strcpy_s(Animal1.type, "Wild Animal");
	strcpy_s(Animal1.colour, "Black and yellow");
	Animal1.age = 5;

	strcpy_s(Animal2.name, "Dog");
	strcpy_s(Animal2.type, "Pet Animal");
	strcpy_s(Animal2.colour, "Golden");
	Animal2.age = 10;

	cout << "Name of an animal is:" << Animal1.name<<endl;
	cout << "Animal type is:" << Animal1.type<<endl;
	cout << "Animal colour is:" << Animal1.colour<<endl;
	cout << "Animal age is:" << Animal1.age<<endl;

	cout << "Name of an animal is:" << Animal2.name<<endl;
	cout << "Animal type is:" << Animal2.type<<endl;
	cout << "Animal colour is:" << Animal2.colour<<endl;
	cout << "Animal age is:" << Animal2.age<<endl;

}