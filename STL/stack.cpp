#include <stack>
#include <iostream>
using namespace std;

void stacks() {
    stack <int> st;
    st.push(1);     // {1}
    st.push(2);     // {2, 1}
    st.push(3);     // {3, 2, 1}
    st.push(3);     // (3, 3, 2, 1)
    st.emplace(5);  // {5, 3, 3, 2, 1}

    cout << st.top() << endl;  // print 5

    st.pop();        // {3, 3, 2, 1}
    
    cout << st.top() << endl;   // 3

    cout << st.size() << endl;  // 4

    cout << st.empty() << endl;

}

int main() {
    stacks();
}