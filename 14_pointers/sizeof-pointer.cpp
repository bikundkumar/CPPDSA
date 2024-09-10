#include <iostream>
using namespace std;

int main() {
  int *intptr;
  float *floatptr;
  char *charptr;
  double *doubleptr;
  bool *boolptr;

  cout <<"Size of int pointer : " << sizeof(intptr) <<" bytes" << endl;
  cout <<"Size of float pointer : " << sizeof(floatptr) <<" bytes" << endl;
  cout <<"Size of char pointer : " << sizeof(charptr) <<" bytes" << endl;
  cout <<"Size of double pointer : " << sizeof(doubleptr) <<" bytes" << endl;
  cout <<"Size of bool pointer : " << sizeof(boolptr) <<" bytes" << endl;

  return 0;
}
