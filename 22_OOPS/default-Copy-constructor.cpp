#include <iostream>
using namespace std;

class defaultCopy {
public:
    string name;
    int age;

    // Parameterized Constructor
    defaultCopy(string name, int age) {
        this -> name = name;
        this -> age = age;
    }
};

int main() {
    defaultCopy obj1("Bikund Kumar",20);
    defaultCopy obj2(obj1);  // Default copy constructor called

    cout << obj2.name << endl;
    cout << obj2.age << endl;

    return 0;
}