#include<iostream>
using namespace std;

int binToDec(int n){
    int binCount=1;
    int num=0;
    while(n>0){
        int r= n%10;
        num+=r*binCount;
        binCount*=2;
        n=n/10;
    }
    return num;
}

int main(){
    int testCases;
    cout<<"Enter how many number you want to convert";
    cin>>testCases;
    for(int i=0;i<testCases;i++){
        int num;
        cin>>num;
        cout<<binToDec(num);
       }
}