#include <iostream>
using namespace std;

class ClassName {
public:
    int age;
    string name;

    // Define Destructor
    ~ClassName() {
        cout <<"deleting object\n";
    }
};
int main() {
    ClassName obj;

    return 0;
}
