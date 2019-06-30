#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define f0 for(int i=0;i<n;i++)
#define fx for(int i=x;i<=n;i++)
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    unordered_set<ll>s; int count=0;
	    f0{
	        ll x;cin>>x;
	        s.insert(x);
	        count++;
	    }
	    if(count==s.size())
	        cout<<"No\n";
	    else
	        cout<<"Yes\n";
	}
}