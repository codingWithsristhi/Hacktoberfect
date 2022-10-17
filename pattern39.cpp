/*
5
45
345
2345
12345
*/

#include<iostream>
using namespace std;

int main(){
    
    for(int i=1;i<=5;i++){
        int x=6;
        for(int j=1;j<=i;j++){
            cout<<x-i;
            x++;
        }
        printf("\n");
    }

    return 0;
}