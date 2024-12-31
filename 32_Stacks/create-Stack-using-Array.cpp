#include <iostream>
using namespace std;

class Stack {
    int arr[10];
public:
    int size() {
        return sizeof (arr) / sizeof(int); 
    }
    void push(int val) {
        push(val);
    }
};

int main() {
    Stack s;

    s.push(10);

    
}