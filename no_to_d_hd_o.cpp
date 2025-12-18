//Write a program in C++ to convert a decimal number to Binary, Hexadecimal, Octal

#include <iostream>
#include <string>
#include <bitset>
#include <sstream>
using namespace std;

string decimaltobinary(int decimal){
    string binary=bitset<32>(decimal).to_string();
    binary.erase(0,binary.find_first_not_of('0'));
    return binary.empty() ? "0" : binary;
}
string decimaltohexa(int decimal){
    stringstream ss;
    ss << hex <<uppercase <<decimal;
    return ss.str();
}
string decimaltooct(int decimal){
    stringstream ss;
    ss<<oct<<decimal;
    return ss.str();
}
int main(){
    int decimal;
    cout <<"Enter a decimal number: ";
    cin >> decimal;
    string binary= decimaltobinary(decimal);
    string hexa= decimaltohexa(decimal);
    string octa=decimaltooct(decimal);

    cout <<"Binary: "<<binary<<endl;
    cout <<"Hexa: " <<hexa<<endl;
    cout <<"Octa: "<<octa<<endl;
    return 0;
}