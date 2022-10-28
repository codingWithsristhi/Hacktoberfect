#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int p=0;p<n;p++)
        {
            cin>>arr[p];
        }

        sort(arr,arr+n);

    if(k>n-1) {cout<<arr[n-1]<<endl; continue;}
    else
    {
      cout<<arr[k]<<endl; continue;
    }
    }
    return 0;
}
