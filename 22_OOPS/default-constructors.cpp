#include <iostream>
using namespace std;

class ClassName {
    int age;
    string name;

public:
    // default constructors
    ClassName() {
        cout <<"constructors is called. object being created\n";
    }

};
int main() {
    ClassName obj;

    return 0;
}
