#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string color;
public:
    void Stop() {
        cout <<"car is stop\n";
    } 
    void Start() {
        cout <<"car is Start now\n";
    }

    Car(string brand, string color) {
        this -> brand = brand;
        this -> color = color;
    }

    // copy constructor
    Car(Car &Original) {
        cout << "copy constructor called\n";
        brand = Original.brand;
        color = Original.color;
    }
    // Getter
    string getBrand() {
        return brand;
    }
    string getColor() {
        return color;
    }
};

int main() {
    Car obj1("Volvo", "Black");

    Car obj2(obj1);

    cout << obj2.getBrand() << endl;
    cout << obj2.getColor() << endl;

}