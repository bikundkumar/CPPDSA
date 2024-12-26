#include <iostream>
#include <string>
using namespace std;

class ClassName {
    private:
    int age;
    string name;
    int cgpa = 6;

    public:
    // Setter
    void setage(int newAge) {
        age = newAge;
    }
    void setname(string newname) {
        name = newname;
    }

    // Getter
    int getAge() {
        return age;
    }
    string getname() {
        return name;
    }
    int getcgpa() {
        return cgpa;
    }
};
int main() {
    ClassName obj;
    obj.setage(19);
    obj.setname("Bikund Kumar");

    cout << obj.getAge() << endl;
    cout << obj.getname() << endl;
    cout << obj.getcgpa() << endl;

    return 0;
}
