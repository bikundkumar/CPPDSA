#include <iostream>
#include <string>
using namespace std;

int main() {
    string st = "DSA C++";

    // find lenth of string
    cout << st.length() << endl;

    // access value of string
    cout << st.at(2) << endl;

    // print substrings
    cout << st.substr(0,st.length()) << endl;

    // find word in string index
    cout << st.find("C") << endl;

    return 0;
}
