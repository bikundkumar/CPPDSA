#include <iostream>
#include <fstream>
using namespace std;

int main() {

    // open file
    ofstream outFile("telephone_list.txt");
   

    // Write the data to the file 
    outFile <<"Bikund 2017\n";
    outFile <<"Tushar 2022\n";
    outFile <<"Aashansay 2023\n";

    // Close the file
    outFile.close();
}