#include <iostream>
using namespace std;

class Animal {
public:
    string color;
    
    void eat() {
        cout <<"eating\n";
    }  
};

class Dog{
public:
    string name = "Sher";

    void braking() {
        cout <<"barking\n";
    }
};

class Fish : public Dog , public Animal {
    void tail() {
        cout << "tail wag\n";
    }
} ;

int main() {
    Fish derive;

    derive.eat();
}