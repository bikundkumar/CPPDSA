#include <iostream>
using namespace std;

class Base {
public:
    virtual void hello() {
        cout <<"Hello from Base class\n";
    }

};

class Derived : public Base{
    public:

    void hello() override {
        cout <<"Hello from Derived class\n";
    }
};

int main() {
    Derived obj;;

    obj.hello();
    

    return 0;
}