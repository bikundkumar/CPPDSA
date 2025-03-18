#include <iostream>
using namespace std;

void Pairs() {

    // pair<int, int> p = {1, 3};

    // cout << p.first << endl;
    // cout << p.second << endl;

    // pair<int, pair<int, int>> p = {1, {3, 4}};

    // cout << p.first << "\n" << p.second.second << "\n" << p.second.first << endl;

    pair<int, int> arr[] = { {1, 2}, {2, 5}, {5,1}};

    cout << arr[1].second << endl;
    cout << arr[1].first << endl;
    cout << arr[2].first << endl;
}

int main() {
    Pairs();
}