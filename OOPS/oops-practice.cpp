#include <iostream>
#include <string>
using namespace std;

class Train {
public:
    int trainNumber;
    string trainName;
    string source;
    string destination;
    string journeyDate;
    int capacity;

    void intialize(int trainNumber, string trainName, string source, string destination, string journeyDate, int capacity) {
        this -> trainNumber = trainNumber;
        this -> trainName = trainName;
        this -> source = source;
        this -> destination = destination;
        this -> journeyDate = journeyDate;
        this -> capacity = capacity;
    }

    void inputTrainData() {
        cout <<"Enter Train Number : ";
        cin >> trainNumber;
        cin.ignore();
        cout <<"Enter Train Name : ";
        getline(cin,trainName);
        cout <<"Enter Source : ";
        getline(cin,source);
        cout <<"Enter Destination : ";
        getline(cin, destination);
        cout <<"Enter Journey Date : ";
        getline(cin, journeyDate);
        cout <<"Enter Capacity : ";
        cin >> capacity;
    }

    void DisplayData() {
        cout << trainNumber << endl;
        cout << trainName << endl;
        cout << source << endl;
        cout << destination << endl;
        cout << journeyDate << endl;
        cout << capacity << endl;
    }
};

int main() {
    Train obj;

    obj.inputTrainData();
    obj.DisplayData();
}