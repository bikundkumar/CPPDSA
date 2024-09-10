#include <iostream>
using namespace std;

int product(int a, int b) {
  return a * b;
}

int main() {
  int a, b;
  cout <<"enter a : ";
  cin >> a;
  cout <<"enter b : ";
  cin >> b;

  cout << product(a,b) << endl;

  return 0;
}
