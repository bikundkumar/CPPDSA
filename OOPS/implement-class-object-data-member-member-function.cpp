#include <iostream>
using namespace std;

class Student {
public:
    // Data Member 
    string name = "Bikund Kumar";
    int roll_No;

    // Member Functions
    void getRoll_No() {
        cout <<"231117000290\n";
    }

    void attendence() {
        cout <<"75%\n";
    }
    void cgpa() {
        cout <<"5.5\n";
    }

};

int main() {
    Student obj;

    cout << obj.name << endl;

    obj.getRoll_No();
    obj.attendence();
    obj.cgpa();

    return 0;
} 
