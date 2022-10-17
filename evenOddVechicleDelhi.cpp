#include<iostream>
using namespace std;
int main(){

    int testCases;
    cin>>testCases;
    for(int i=0;i<testCases;i++){
        int carNumber;
        cin>>carNumber;
        int sum=0;
        while(carNumber>0){
            int r=carNumber%10;
            sum+=r;
            carNumber/=10;
        }

        if(sum%2==0 && sum%4==0){
            cout<<"Yes"<<endl;
        }
        else if(sum%3==0)
            cout<<"Yes"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}