#include "Person.h"

Person::Person() {}
Person::Person(string name, int age, int luck):name(name),age(age),luck(luck) {}
void Person::printPerson() {
	cout <<"Name: " << getName() << ", age: " << getAge() << ", luck:" << getLuck() << endl;
}
