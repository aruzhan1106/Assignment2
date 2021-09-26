#include <iostream>
#include <vector>
#include "Person.h"
using namespace std;

int luckiestPerson(vector <Person> &p);
void changeLuck(vector <Person>& p, int index1, int index2);
int main()
{
    vector <Person> people;
    srand((unsigned int)time(NULL));
    people.push_back(Person("Kayla", 43, rand() % 100));
    people.push_back(Person("John", 30, rand()%100));
    people.push_back(Person("Kate", 15, rand() % 100));
    people.push_back(Person("Jeremy", 60, rand() % 100));
    people.push_back(Person("Jess", 24, rand() % 100));
    for (unsigned int i = 0; i < people.size(); i++) {
        people[i].printPerson();
    }
    cout << "\nThe luckiest person in this group is " << people[luckiestPerson(people)].getName()<<endl;
    cout << "\nSwapping the luck of first and fifth person" << endl;
    changeLuck(people,0,4);
    for (unsigned int i = 0; i < people.size(); i++) {
        people[i].printPerson();
    }
    cout << "\n";
    Person *person = new Person("Steven",13,rand()%100);
    person->printPerson();
    delete person;
}
int luckiestPerson(vector <Person> &p) {
    int luckiest = p.at(0).getLuck();
    int indexOfLuckiest = 0;
    for (unsigned int i = 1; i < p.size(); i++)
        if (p.at(i).getLuck() > luckiest) {
            luckiest = p.at(i).getLuck();
            indexOfLuckiest = i;
        }
    return indexOfLuckiest;
}
void changeLuck(vector <Person> &p, int index1, int index2){
    int luck1 = p[index1].getLuck();
    int luck2 = p[index2].getLuck();
    p[index1].setLuck(luck2);
    p[index2].setLuck(luck1);
}