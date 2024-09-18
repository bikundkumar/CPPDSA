#include <iostream>
using namespace std;

int main() {
    int a;
    char b;
    float c;
    double d;
    bool e;
    string f;

    int *ptr = &a;
    char *ptr1 = &b;
    float *ptr2 = &c;
    double *ptr3 = &d;
    bool *ptr4 = &e;
    string *ptr5 = &f;

    cout <<"size of int pointer : " << sizeof(ptr)<<" bytes" << endl;
    cout <<"size of char pointer : " << sizeof(ptr1)<<" bytes" << endl;
    cout <<"size of float pointer : " << sizeof(ptr2)<<" bytes" << endl;
    cout <<"size of double pointer : " << sizeof(ptr3)<<" bytes" << endl;
    cout <<"size of bool pointer : " << sizeof(ptr4)<<" bytes" << endl;
    cout <<"size of string pointer : " << sizeof(ptr5)<<" bytes" << endl;

    return 0;
}