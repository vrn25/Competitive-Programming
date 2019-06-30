#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
	int n,q;
	cin>>n>>q;
	vector<long long>a;
	vector<long long>b;
	for (int i = 0; i < n; ++i)
	{
		long long x;cin>>x;a.pb(x);
	}
	for (int i = 0; i < n; ++i)
	{
		long long x;cin>>x;b.pb(x);
	}
	for (int i = 0; i < q; ++i)
	{
		int l,r;cin>>l>>r;
		long long sum=0;
		for (int i = l; i <= r ; ++i)
		{
			sum=sum+a[i-1]*b[i-1];
		}
		cout<<sum<<endl;
	}
}