#include <iostream>
using namespace std;

void fac(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = fact * i;
  }
  cout << "factorial of " << n << " = " << fact << endl;
}

int main() {
  int n;
  cout <<"enter n : ";
  cin >> n;
  fac(n);

  return 0;
}
