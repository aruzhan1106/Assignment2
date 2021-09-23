#pragma once
#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
	Person();
	Person(string name, int age, int luck);

	void setName(string name) { this->name = name; }
	void setAge(int age) { this->age = age; }
	void setLuck(int luck) { this->luck = luck; }

	string getName() { return this->name; }
	int getAge() { return this->age; }
	int getLuck() { return this->luck; }

	void printPerson();
private:
	string name;
	int age;
	int luck;
};

