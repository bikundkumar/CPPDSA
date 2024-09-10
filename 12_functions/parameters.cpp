#include <iostream>
using namespace std;

int sum(int num1, int num2) {
  int add = num1 + num2;
  return add;
}
int subtract(int num1,int num2) {
  int sub = num1 - num2;
  return sub;
}
int multiply(int num1,int num2) {
  int mul = num1 * num2;
  return mul;
}


int main() {
  int num1, num2;
  cin >> num1;
  cin >> num2;

  int add = sum(num1,num2);
  int sub = subtract(num1, num2);
  int mul = multiply(num1, num2);
  cout <<"sum : "<< add << endl;
  cout <<"subtract : "<< sub << endl;
  cout <<"multiply : "<< mul << endl;


  return 0;
}
