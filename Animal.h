#ifndef Animal_H
#define Animal_H

#include <iostream>
#include <string>
#include "Animal.h"
using namespace std;

class Animal {
private:
    string name;
    int age;
    bool isHungry;

public:
    // Default constructor
    Aniaml() {
        name = "";
        age = 0;
        isHungry = false;
    }


    Animal(string n, int i) {
        name = n;
        age = i;
        isHungry = true;
    }

    Animal();


    ~Animal() {

    }


    void setName(string n) {
        name = n;
    }
    void setId(int i) {
        age = i;
    }

    string getName() {
        return name;
    }
    int getId() {
        return age;
    }
    class Mammal : public Animal {
        public:
        Mammal() : Animal() {
            string furColor;
        }
    };

    class Bird : public Animal {
    public:
        Bird() : Animal() {
            float wingSpan;
        }
    };
    class Reptile : public Animal {
    public:
        Reptile() : Animal() {
            bool isVenomous;
        }
    };



    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "IsHungry: " << isHungry << endl;
    }
    void feed() {
        if (isHungry==true) {
            cout << "Hungry" << endl;
        }
        else {
            cout << "Unhungry" << endl;
        }
    }
};

#endif
