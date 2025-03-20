#include <queue>
#include <iostream>
using namespace std;

void Queue() {
    queue <int> q;

    q.push(1);      // {1}
    q.push(2);      // {2}
    q.emplace(4);   // {1, 2, 4}

    q.back() += 5;  

    cout << q.back() << endl;   // print 9 = 4 + 5

    // q is {1, 2, 9} 
    cout << q.front() << endl;  // print 1

    q.pop();  // {2, 9}

    cout << q.front() << endl;  // print 2 because 1 is delete 

}

int main() {
    Queue();
}