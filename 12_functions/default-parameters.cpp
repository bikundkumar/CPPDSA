#include <iostream>
using namespace std;

int d(int num1, int num2 = 5) {
  int sum = num1 + num2;
  return sum;
}

int main() {
  int num1;
  int num2;
  cin >> num1;
  int a = d(num1);

  cout <<"add : " << a << endl;

  return 0;
}
