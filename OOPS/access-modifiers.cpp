#include <iostream>
using namespace std;

class hide {
private:
    string name1 = "Bikund Kumar";  
public:
    string name2 = "Bikund Kumar";  
protected:
    string name3 = "Bikund Kumar"; 

};

int main() {
    hide obj;

    // cout << obj.name1 << endl;   // this is not print 
    // cout << obj.name2 << endl;
    // cout << obj.name3 << endl;   // this is not print  
}