#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int number;
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        cin>>number;
        ans=ans^number;
        cout<<ans<<endl;

    }
    cout<<ans<<"final";
    return 0;
}
