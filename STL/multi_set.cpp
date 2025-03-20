#include <set>
#include <iostream>
using namespace std;

void Multi_Set() {
    // Everything is same as set
    // only stores duplicate elements also

    multiset <int> ms;
    ms.insert(1);   // {1}
    ms.insert(1);   // {1, 1}
    ms.insert(1);   // {1, 1, 1}

    ms.erase(1);    // all 1's erased

    int cnt = ms.count(1);
    cout << cnt << endl;

    // only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), ms.find(1)+2);
}

int main() {
    Multi_Set();
}