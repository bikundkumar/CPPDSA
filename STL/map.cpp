#include <map>
#include <iostream>
using namespace std;

void Map() {
        // Declaration of map
        // map<int, int> mpp;

        // mpp[1] = 2;  // Insert key-value pair (1, 2)
        // cout << mpp[1] << endl;  // Prints 2
    
        // mpp.emplace(3, 1);      // Insert key-value pair (3, 1)
        // cout << mpp[3] << endl; // print 1 (value of key 3)

        // mpp.insert({2, 4});     // Insert key-value pair (2, 4)
        // cout << mpp[2] << endl; // Prints 4 (value of key 2)

        // map <int, pair<int, int>> mpp;

        map <pair<int, int>, int> mpp;

        mpp[{2, 3}] = 10;

        // cout << mpp[{2, 3}] << endl;    // print 10

        for (auto it : mpp) {
            cout << it.first << " " << it.second << endl;
        }
}

int main() {
    Map();
}