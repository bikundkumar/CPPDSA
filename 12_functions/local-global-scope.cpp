#include <iostream>
using namespace std;
int ab = 45;   /*  global scope  */

void n(int num) {
  for (int i = 1; i <= num; i++) {
    cout << i << endl;
  }
  cout << ab << endl;
}

int main() {
  int num = 4;
  n(num);

  return 0;
}
