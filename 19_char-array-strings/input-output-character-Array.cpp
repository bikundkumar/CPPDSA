#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // only for Word Print example : bikund, kumar, code, cool;
    char word[10];

    cin >> word;

    cout << word << endl;

    // print for whole paragraph 
    char sentences[20];

    cin.getline(sentences, 20);

    cout << "length : " << strlen(sentences) << endl;  
    cout << sentences << endl;
}