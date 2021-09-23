#include <iostream>
#include <vector>
#include "Person.h"
using namespace std;

int luckiestPerson(vector <Person> p);
int main()
{
    vector <Person> people;
    srand((unsigned int)time(NULL));
    people.push_back(Person("Kayla", 43, rand() % 5));
    people.push_back(Person("John", 30, rand()%5));
    people.push_back(Person("Kate", 15, rand() % 5));
    people.push_back(Person("Jeremy", 60, rand() % 5));
    people.push_back(Person("Jess", 24, rand() % 5));
    for (unsigned int i = 0; i < people.size(); i++) {
        people[i].printPerson();
    }
    cout << "\nThe luckiest person in this group is " << people[luckiestPerson(people)].getName()<<endl;
}
int luckiestPerson(vector <Person> p) {
    int luckiest = p.at(0).getLuck();
    int indexOfLuckiest = 0;
    for (unsigned int i = 1; i < p.size(); i++)
        if (p.at(i).getLuck() > luckiest) {
            luckiest = p.at(i).getLuck();
            indexOfLuckiest = i;
        }
    return indexOfLuckiest;
}