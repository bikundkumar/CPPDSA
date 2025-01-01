#include <iostream>
using namespace std;

class Animal {
public:
    string color;
    
    void eat() {
        cout <<"eating\n";
    }  
};

class Dog : public  Animal {
public:
    string name = "Sher";

    void braking() {
        cout <<"barking\n";
    }
};

int main() {
    Dog derived;

    derived.color="black";
    cout << derived.color << endl;

    derived.eat();

    cout << derived.name << endl;
}