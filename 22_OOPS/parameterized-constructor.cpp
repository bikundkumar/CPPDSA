#include <iostream>
using namespace std;

class ClassName {
public:
    int age;
    string name;

    // Parameterized Constructor
    ClassName(int newAge, string newName) {
        age = newAge;
        name = newName;
    }
};
int main() {
    ClassName obj(19,"Bikund Kumar");

    cout << obj.age << endl;
    cout << obj.name << endl;

    return 0;
}
