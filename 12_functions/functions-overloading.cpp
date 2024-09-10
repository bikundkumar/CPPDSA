#include <iostream>
using namespace std;

int sum(int a, int b) {
  return a + b;
}
double sum2(double a, double b) {
  return a + b;
}
int main() {
  int a, b;
  cin >> a >> b;
  cout <<"sum : " << sum(a,b) << endl;
  cout <<"sum : " << sum2(a,b) << endl;

  return 0;
}
