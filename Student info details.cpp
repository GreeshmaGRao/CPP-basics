#include "pch.h"
#include <iostream>
using namespace std;
struct
{
	char name[20];
	char sub[15];
	char grade;
	char branch[5];
	int id;
    float marks;
}st_inf;

int main()
{
	float sum = 0;
    float avg;
	int n;
	cout << "Enter value of n"<<endl;
	cin >> n;
	cout << "Enter id" << endl;
	cin >> st_inf.id;
	cout << "Enter name" << endl;
	//gets(st_inf.name);
	cin >> st_inf.name;
	cout << "Enter branch" << endl;
	//gets(st_inf.branch);
	cin >> st_inf.branch;
	cout << "Enter marks obtained in 5 subjects";
	for (int i = 0; i < 5; i++)
	{
		cout << "Subject" << i + 1 << ":";
		cin >> st_inf.marks;
		sum = sum + st_inf.marks;
	}
	avg = sum / 5;
	if (avg < 50)
	{
		cout << "Grade C" << endl;
	}
	else if (avg  < 70)
	{
		cout << "Grade B" << endl ;
	}
	else if(avg<100)
	{
		cout << "Grade A" << endl ;
	}
	cout << "Student name is:" << st_inf.name<<endl;
	cout << "Branch:" << st_inf.branch << endl;
	cout << "Student ID:" << st_inf.id<<endl;
	cout << "marks obtained:" << sum <<endl ;
}