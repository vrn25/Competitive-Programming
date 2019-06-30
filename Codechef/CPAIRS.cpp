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
	    vector<ll>v;
	    f0{
	        ll x;cin>>x;
	        v.pb(x);
	    }
	    vector<ll>ans;
	    vector<ll>even;
	    f0{
	        if(v[i]%2==0)
	            even.pb(i);
	    }
	    if(even.size()==0){
	        cout<<"0";
	        return 0;
	    }
	    int count=0;
	    for(int i=even[0];i<n;i++){
	        if(v[i]%2)
	            count++;
	    }
	    ans.pb(count);
	    for(int i=1;i<even.size();i++){
	        ans.pb(ans[i-1]-(even[i]-even[i-1]-1));
	    }
	    cout<<accumulate(ans.begin(),ans.end(),0)<<endl;
	}
}