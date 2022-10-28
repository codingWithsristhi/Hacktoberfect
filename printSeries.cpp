#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int count=0;
    for(int i=1;i<=10000;i++){
        int x=(3*i)+2;
        if(count==n1){
            break;
        }
        if(x%2!=0){
            cout<<x<<endl;
        }
        count++;
    }
    return 0;
}