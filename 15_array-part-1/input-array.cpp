#include <iostream>
using namespace std;

int main() {
  int arr[10];
  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++) {
    cout <<"enter arr : ";
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;

  return 0;
}
