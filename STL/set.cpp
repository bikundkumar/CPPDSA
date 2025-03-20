#include <set>
#include <iostream>
using namespace std;

void Set() {
    set <int> st;
    st.insert(1);   // {1}
    st.emplace(2);  // {1, 2}
    st.insert(2);   // {1, 2} 
    st.insert(4);   // {1, 2, 4}
    st.insert(3);   // {1, 2, 3, 4}
    
    // {1, 2, 3, 4,}
    auto it = st.find(2);
    cout << *it << endl;    // print 2

    st.erase(4);    // delete 4 

    int cnt = st.count(3);
    cout << cnt << endl;
}

int main() {
    Set();
}