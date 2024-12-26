#include <iostream>
using namespace std;

// Base Class 1
class Animal {
    public:
    void eat() {
        cout <<"Animal eats food\n";
    }
};

// Base Class 2
class Pet {
    public:
    void play() {
        cout <<"Pet loves to play\n";
    }
};

// Derived Class 
class Dog : public Animal, public Pet{
    public:
    void bark() {
        cout <<"Dog bark\n";
    }
};

int main() {
    Dog obj;

    obj.eat();
    obj.play();
    obj.bark();

    return 0;
}