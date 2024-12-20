#include <iostream>
using namespace std;

int main() {
    // First Method 
    char first[] = "code";

    cout << first << endl;

    // Second Method 
    char second[5] = "code";

    cout << second << endl;

    // Third Method
    char third[] = {'c','o','d','e','\0'};
    
    cout << third << endl;

    // Fouth Method 
    char fouth[5] = {'c','o','d','e'};

    cout << fouth << endl;

}