//write a c++ program to change every letter in a given string with the letter following it in the alphabet(i.e a becomes b,p becomes q,z becomes a)
//write a c++ program to sort characters(numbers and punctuation symbols are not included in a string )
//write a c++ program to find a word in a given string that has the highest number of repeated letter 
#include <iostream>
#include <string>
using namespace std;
string alphabet(const string & input){
    string result=input;
    for (char &c: result){
        if(isalpha(c)){
            if(c=='z'){
                c='a';
            }
            else if(c=='Z') {
                c='Z';
            }
            else{
                c++;
            }

        }
    }
    return result;
}
int main(){
    string input;
    cout << "Enter the input: ";
    getline(cin,input);
    
    string result = alphabet(input);
    cout << "Modified string: " << result << endl;
    return 0;

}