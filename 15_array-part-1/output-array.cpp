#include <iostream>
using namespace std;

int main() {
  int arr[10] = {2,4,6,3,6,26};
  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
