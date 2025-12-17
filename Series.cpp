//Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
#include <iostream>
#include <iostream>
using namespace std;

int main(){
    int n;
    int sum=0;

    cout << "Enter the number: ";
    cin>>n;

    if(n<=0){
        cout << "Enter a postiive number";
        return 0;
    }
    for (int i=0;i<=n;i++){
        int currentsum=0;
        for(int j=0;j<=i;j++){
            currentsum+=j;
        }
        sum+=currentsum;
        
    }
    cout<< "Sum of the series: "<<sum<<endl;


}