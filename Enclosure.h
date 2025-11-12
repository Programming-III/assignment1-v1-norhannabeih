#ifndef ENCLOSURE_H
#define ENCLOSURE_H

#include <iostream>

#include "Animal.h"
#include "instructor.h"

class Enclosure {
private:
    /**
     *
     */
    int capacity;
    Animal*a;
    int currentcount;
    int currentanimal;
    int maxanimal;

public:
    // Default constructor
    Enclosure() {
    }

    Enclosure(const char * lion, int i, const char * str);

    // Destructor
    ~Enclosure() {
        delete[] a;
    }


    void addAnimal(Animal*a) {
        if (currentanimal < maxanimal) {
            Animal[currentanimal] = a;
            currentanimal++;
        } else {
            cout << "Course is full!" << endl;
        }
    }


    void displayAnimal(){
        cout << "Capacity: " << capacity << endl;
        cout << "Animal: " *a << endl;
        cout << "Currentcount: ";
        if (currentcount == 0)
            cout << "None" << endl;
        else {
            for (int i = 0; i < currentcount; i++) {
                cout << a.Animal[i].getName();
                if (i != currentcount - 1)
                    cout << ", ";
            }
            cout << endl;
        }
    }
};

#endif
