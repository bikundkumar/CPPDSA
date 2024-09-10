#include <iostream>
using namespace std;

void odd_even(int num) {
  if (num % 2 == 0) {
    cout <<"Even num : " << num << endl;
  }
  else {
    cout <<"Odd num : " << num << endl;
  }
}

int main() {
  int num;
  cout <<"enter num : ";
  cin >> num;

  odd_even(num);

  return 0;
}
