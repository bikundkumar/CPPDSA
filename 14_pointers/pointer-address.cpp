#include <iostream>
using namespace std;

int main() {
  int a = 40;
  int *ptr = &a;

  int **copy = &ptr;
  cout << "a : " << a << endl;
  cout << "ptr : " << &ptr << endl;
  cout << "&a : " << &a << endl;
  cout << "copy : " << copy << endl;
}
