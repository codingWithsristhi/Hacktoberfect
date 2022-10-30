#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a,b,c;
    float d;
    cout<<"Enter value of a b c respectively ";
    cin>>a;
    cin>>b;
    cin>>c;
    d=pow(b,2)-(4.0*a*c);
    if(d>0){
        int x1,x2;
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<min(x1,x2)<<" "<<max(x1,x2);
    }
    else if(d==0){
        int x;
        x=(-b+sqrt(d))/(2*a);
        cout<<x<<" "<<x;
    }
    return 0;
}