#include <iostream>
using namespace std;

class AbstractClass {
public:
    virtual void show() = 0;
};

class DerivedClass : public AbstractClass {
public:
    void show() override {
        cout <<"Hello from Derived class\n";
    }
};

int main() {
    DerivedClass obj;

    obj.show();
    
    return 0;
}