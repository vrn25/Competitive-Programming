#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
ll op(vector<ll>&v){
    ll f,s;
    f=max(v[0],v[1]);s=min(v[0],v[1]);
    v[1]=f;
    v.erase(v.begin());
    v.pb(s);
}
int main(){
    ll n,t;cin>>n>>t;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        v.pb(x);
    }
    ll count=0;
    vector<pair<ll,ll>>ans2;
    ll ma=*max_element(v.begin(),v.end());
        while(v[0]!=ma){
            ans2.pb(mp(v[0],v[1]));
            op(v);
            count++;
        }
        
    vector<pair<ll,ll>>ans;
    for(int i=0;i<v.size()-2;i++){
        ans.pb(mp(v[0],v[1]));
        op(v);
    }
    ans.pb(mp(v[0],v[1]));
    
    while(t--){
        ll mj;cin>>mj;
        if(mj<=count){
            cout<<ans2[mj-1].first<<" "<<ans2[mj-1].second<<endl;
        }
        else{
            mj-=(count+1);
            ll k=v.size()-1;
            mj-=k*(mj/k);
            cout<<ans[mj].first<<" "<<ans[mj].second<<endl;
        }
    }
}