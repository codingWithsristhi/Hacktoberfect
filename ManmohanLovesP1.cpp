#include<iostream>
using namespace std;
/*
Given N, help Manmohan to print pattern upto N lines. For eg For N=6 , following pattern will be printed. 

1  
11  
111   
1001   
11111  
100001  
*/

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0 && j>1 && j<=(i-1)){
                printf("0");
            }
            else{
                printf("1");
            }
        }
        printf("\n");
    }

    return 0;
}