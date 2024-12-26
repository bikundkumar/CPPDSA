#include <iostream>
using namespace std;

class ClassName {
public:
    int age;
    string name;

    // Parameterized Constructor
    ClassName(int age, string name) {
       this -> age = age;
       this -> name = name;
    }

    // Custom Copy Constructor
    ClassName(ClassName &original) {
        cout << "custom copy constructor called\n";
        age = original.age;
        name = original.name;
    }
};
int main() {
    ClassName obj1(19,"Bikund Kumar");

    ClassName obj2(obj1); // Copy constructor called

    cout << obj2.age << endl;
    cout << obj2.name << endl;

    return 0;
}
