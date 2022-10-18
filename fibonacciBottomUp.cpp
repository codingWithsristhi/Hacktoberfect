#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){

    if (n==0 || n==1){
        return n;
    }
    int dp[n+1]={0};
    
    dp[0]=0;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=dp[i-2]+dp[i-1];
    }
    return dp[n];
}


int main(){

    int n;
    cin>>n;

    cout<<fibonacci(n);

    return 0;
}