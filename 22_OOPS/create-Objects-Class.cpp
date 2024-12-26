#include <iostream>
using namespace std;

class bikund {
    public:              // access specifier

    int age = 20;       // data member / properties / attribute
    void name() {       // member functions / methods
        cout <<"Bikund Kumar\n";
    }
}; // ends class
int main() {
    bikund obj;         // object

    cout << obj.age << endl;    // print data member
    obj.name();          // print member functions 

    return 0;
}
