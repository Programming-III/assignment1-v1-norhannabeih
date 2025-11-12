#include "Animal.h"
#include "Bird.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <iostream>
using namespace std;



int main() {
     Enclosure Enc1("Lion", 5, "Hungry");
    Enclosure Enc2("Parrot", 2, "Not Hungry");
    Enclosure Enc3("Snake", 3, "Hungry");



    Visitor v1("Sarah Ali", '3');


    a1.addAnimal(a1);
    a2.addAnimal(a2);

    a1.displayAnimalInfo();
    a2.displayAnimalInfo();


    // Display Instructor Info
    cout << "\nInstructor Info:" << endl;
    inst.display();

    // Display Visitor Info
    cout << "\nVisitor Info:" << endl;
    v1.display();
    cout << endl;

    return 0;
}
    
