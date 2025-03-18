#include <vector>
#include <iostream>
using namespace std;

void Vectors() {
    // Declaration of vector 

    // vector<int> v;

    // v.push_back(1);
    // v.emplace_back(2);

    // vector<pair<int, int>> vec;

    // vec.push_back({1, 2});
    // vec.emplace_back(1, 2);

    // vector<int> v(5, 100);  //  {100, 100, 100, 100, 100}

    // vector<int> v(5);  // {0, 0, 0, 0, 0}

    // vector<int> v1(5, 20);    // {20, 20, 20, 20, 20}
    // v1 vector ko copy kar liya hai v2 me 
    // vector<int> v2(v1);       // {20, 20, 20, 20, 20}  

    // Access element in vector 

    // vector<int> v = {10, 20, 30, 15};

    // vector<int>::iterator it = v.begin();

    // it++;
    // cout << *(it) << endl;

    // it = it + 2;
    // cout << *(it) << endl;

    // vector<int>::iterator it = v.end();
    // cout << *(it) << endl;

    // cout << v[2] << endl;    // jaise array me element ko print karte hai same esa hai vector.

    // cout << v.back() << endl;     // element ke last value ko print karta hai 

    // Print vector using loop 

    // for (auto it : v) {
    //     cout << it << " ";
    // }
    // cout << endl;

    // Deletion of vector

    // vector<int> v = {10, 20, 30, 15};

    // v.erase(v.begin()+1);  // after delete 20  {10, 30, 15}

    // vector<int> v = {10, 20, 50, 55, 60, 70};

    // v.erase(v.begin() + 1, v.begin() + 2);
    // for (auto it : v) {
    //     cout << it << " ";
    // }
    // cout << endl;

}

int main() {
    Vectors();
}