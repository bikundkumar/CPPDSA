#include <iostream>
using namespace std;

// Base Class
class Animal {
    public:
    string color;

    void eat() {
        cout <<"eat\n";
    }
};
// Derived Class 
class Dog : public Animal {
    public:
    int age;

    void name() {
        cout <<"Sher\n";
    }
};
int main() {
    Dog obj1;

    obj1.color = "black";
    obj1.age = 3;

    cout << obj1.age << endl;     // print Dog age
    cout << obj1.color << endl;   // print color
    obj1.eat();
    obj1.name();


    return 0;
}
