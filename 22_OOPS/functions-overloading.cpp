#include <iostream>
using namespace std;

class Print {
    public:

    void show(int x) {
        cout <<"int : " << x << endl;
    }
    void show(string name) {
        cout <<"string : " << name << endl;
    }
};

int main() {
    Print obj1;

    obj1.show("Bikund Kumar");
    obj1.show(20);

    return 0;
}
