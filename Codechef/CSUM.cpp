#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    vector<ll>v;
	    for(ll i=0;i<n;i++){
	        ll x;cin>>x;v.pb(x);
	    }
	    sort(v.begin(),v.end());
	    vector<ll>::iterator p=v.begin(),q=v.end()-1;
	    int flag=0;
	    while(p!=q){
	        if(*p+*q==k){
	            cout<<"Yes\n";
	            flag=1;
	            break;
	        }
	        else if(*p+*q<k){
	            p++;
	        }
	        else
	            q--;
	    }
	    if(flag==0)
	        cout<<"No\n";
	}
}