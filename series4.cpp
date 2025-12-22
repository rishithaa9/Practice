#include <iostream>
using namespace std;

void pascaltriangle(int numrows){
    int i,j;
    for(i=0;i<numrows;i++){
        int value=1;
        for(j=0;j<=i;j++){
            cout << value << " ";
            value=value*(i-j)/(j+1);
        }
        cout << endl;
    }
}
int main(){
    int nummrows=8;
    cout << "Pascal triangle: " << endl;
    pascaltriangle(nummrows);

    return 0;
}