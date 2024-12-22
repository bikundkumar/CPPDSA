#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec1 = {1,2,3,4};

    cout << "Intial size : " << vec1.size() << ", Capacity : " << vec1.capacity() << endl;

    vec1.push_back(5);
    cout << "After 5 element - size: " << vec1.size() << ", capacity: " << vec1.capacity() << endl;

    vec1.push_back(6);
    cout << "After 6 element - size: " << vec1.size() << ", capacity: " << vec1.capacity() << endl;

    vec1.push_back(7);
    cout << "After 7 element - size: " << vec1.size() << ", capacity: " << vec1.capacity() << endl;

    vec1.push_back(8);
    cout << "After 8 element - size: " << vec1.size() << ", capacity: " << vec1.capacity() << endl;

    vec1.push_back(9);
    cout << "After 9 element - size: " << vec1.size() << ", capacity: " << vec1.capacity() << endl;

    for (int i = 0; i < vec1.size(); i++) {
        cout << vec1[i] << " ";
    }
    cout << endl;

    return 0;
}