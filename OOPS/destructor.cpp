#include <iostream>
using namespace std;

class Car  {
private:
    int account_no;
    string bank_Name;
    int *milege;
public:
    Car(int account_no, string bank_Name) {
        this -> account_no = account_no;
        this -> bank_Name = bank_Name;
        this -> milege = new int;
        *milege = 40;
    }

    // Copy Constructor
    Car(Car &original) {
        account_no = original.account_no;
        bank_Name = original.bank_Name;
        *milege = *original.milege;
    }

    // Getter
    int getAccount() {
        return account_no;
    }
    string getBank() {
        return bank_Name;
    }
    int getMilege() {
        return *milege;
    }
    // Destructor
    ~Car() {
        cout <<"delete object\n";
        delete milege;
    }

};
int main() {
    Car obj(1234, "Indian Bank");

    cout << obj.getAccount() << endl;
    cout << obj.getBank() << endl;
    cout << obj.getMilege() << endl;
 }