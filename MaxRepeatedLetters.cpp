//write a c++ program to find a word in a given string that has the highest number of repeated letter 
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

#include <unordered_map>

int countMaxRepeatedLetters(const string &word){
    unordered_map<char, int> freq;
    int maxcount=0;

    for(char c: word){
        if(isalpha(c)){
            freq[c]++;
            maxcount=max(maxcount,freq[c]);
        }
    }
    return maxcount;
}
string findword(const string &input){
    istringstream iss(input);
    string word,result;
    int maxrepeated=0;
    while (iss>> word){
        int repeated;
    }

}

//given the string str, the task is to reverse the order of the given string . note that str may contain leading or trailing dots or multiple dotseg: i like this program very much o/p: much.very program this like i 