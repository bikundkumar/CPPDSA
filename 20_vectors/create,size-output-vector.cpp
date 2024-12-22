#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare an empty vector 
    vector <int> vec1;

    // Check the size of the vector
    cout << vec1.size() << endl;

    // print element 
    for (int i = 0; i < vec1.size(); i++) {
        cout << vec1[i] << " ";
    }
    cout << endl;

    // Declaration and initialization vector
    vector <int> vec2 = {1,2,3,4,5};

    // Check the size of the vector
    cout << vec2.size() << endl;

    // print element 
    for (int i = 0; i < vec2.size(); i++) {
        cout << vec2[i] << " ";
    }
    cout << endl;

    // Declare and initialize vector
    vector <int> vec3 (5, 3);

    // Check the size of the vector
    cout << vec3.size() << endl;

    // print element 
    for (int i = 0; i < vec3.size(); i++) {
        cout << vec3[i] << " ";
    }
    cout << endl;


    return 0;
}