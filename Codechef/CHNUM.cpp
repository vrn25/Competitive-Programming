#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>v;
		for (int i = 0; i < n; ++i)
		{
			int x;cin>>x;
			v.pb(x);
		}
		vector<int>neg;
		vector<int>zero;
		vector<int>pos;
		for (int i = 0; i < n; ++i)
		{
			if(v[i]<0)
				neg.pb(v[i]);
			else if(v[i]==0)
				zero.pb(v[i]);
			else
				pos.pb(v[i]);
		}
		vector<int>check;
		if(neg.size()!=0)
			check.pb(neg.size());
		if(pos.size()!=0)
			check.pb(pos.size());
		if(zero.size()!=0)
			check.pb(zero.size());

		cout<<*max_element(check.begin(),check.end())<<" ";
		cout<<*min_element(check.begin(),check.end())<<endl;
	}
}