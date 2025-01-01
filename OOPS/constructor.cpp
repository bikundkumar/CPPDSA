#include <iostream>
using namespace std;

class Company {
public:
    string name;
    int turnover;
public:

    // Constructor
    Company(string name, int turnover) {
        this -> name = name;
        this -> turnover = turnover;
    }

    // Getter
    string getName() {
        return name;
    }
    int getTurnover() {
        return turnover;
    }
};

int main() {
    Company obj("Microsoft", 100000);

    cout << obj.getName() << endl;
    cout << obj.getTurnover() << endl;

}