#include<bits/stdc++.h>
#define pb push_back
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		bool check[n];
		memset(check,true,sizeof(check));
		vector<pair<string,string>>v;
		for (int i = 0; i < n; ++i)
		{
			string s1;cin>>s1;
			string s2;cin>>s2;
			v.pb(make_pair(s1,s2));
		}
		vector<string>vnew;
		for (int i = 0; i < n; ++i)
		{
			vnew.pb(v[i].first);
		}
		for (int i = 0; i < n; ++i)
		{
				int x=count(vnew.begin(),vnew.end(),vnew[i]);
				if(x>1){
					check[i]=false;
				}
		}
		for (int i = 0; i < n; ++i)
		{
			if(check[i])
				cout<<v[i].first<<endl;
			else
				cout<<v[i].first<<" "<<v[i].second<<endl;
		}
	}
}