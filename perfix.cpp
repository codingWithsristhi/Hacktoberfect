#include <bits/stdc++.h>
using namespace std;
	const int N = 1e5+10;
	int arr[N];
	int pf[N];
int main()
{
int n ; cin>>n;
	for (int i = 1; i <= n; ++i)
	{
		cin>>arr[i];
		pf[i]= pf[i-1]+arr[i];
	}
int q;cin>>q;
while(q--)
{
	int l;
	int r;
	cin>>l>>r;
	
	cout<<pf[r]-pf[l-1]<<endl;
}


}