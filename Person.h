#ifndef PERSON_H
#define PERSON_H

#include<iostream>

struct Person {
    std::string name;
    int age;
};

struct PersonList {
    Person* people;
    int numPeople;
};

#endif