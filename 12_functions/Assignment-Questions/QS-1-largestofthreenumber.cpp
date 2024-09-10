#include <iostream>
using namespace std;

int largest(int num1, int num2, int num3) {
  if ((num1 >= num2) && (num1 >= num3)) {
    return num1;
  }
  else if (num2 >= num3) {
    return num2;
  }
  else {
    return num3;
  }
}

int main() {
  int num1,num2,num3;
  cout <<"enter num1 : ";
  cin >> num1;
  cout <<"enter num2 : ";
  cin >> num2;
  cout <<"enter num3 : ";
  cin >> num3;

  cout << largest(num1,num2,num3) << endl;

  return 0;
}
