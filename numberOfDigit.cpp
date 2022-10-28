#include<bits/stdc++.h>
#include<cmath>
using namespace std;

//O(1)
int countDigits(int n){
    return floor(log10(abs(n))+1);
}
//O(n)
int numberOfDigitRec(int num){
    if(num==0){
        return 0;
    }
    return 1 + numberOfDigitRec(num/10);
}
//O(n)
int numberOfDigit(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}



int main(){

    int n,tem;
    cin>>n;
    
    cout<<countDigits(n)<<endl;

    cout<<numberOfDigit(n)<<endl;

    cout<<numberOfDigitRec(n)<<endl;

    return 0;
}