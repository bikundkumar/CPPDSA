#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int *ptr = &a;
  float b = 3;
  float *pr = &b;

  cout << &a << " = " << ptr << endl;
  cout << &b << " = " << pr << endl;
  
  
  return 0;
}
