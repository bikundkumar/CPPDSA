#include <iostream>
using namespace std;

// Base Class
class Animal {
    public:

    void eat() {
        cout <<"eat\n";
    }
    void breathe() {
        cout <<"breathe\n";
    }
};
// Derived class 1
class Mammal : public Animal{
    public:

    string bloodtype = "warm";
};
// Derived class 2
class Dog : public Mammal {
    public:

    void tailwag() {
        cout <<"a dog wags its tail\n";
    }
};
int main() {
    Dog obj1;

    obj1.eat();
    cout << obj1.bloodtype << endl;
    obj1.tailwag();
    obj1.breathe();

    return 0;
}
