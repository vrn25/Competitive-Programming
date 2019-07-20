#include <bits/stdc++.h>
#define ll long
#define pb push_back
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll n; cin>>n;
        vector<ll>v;
        vector<ll>::iterator p;
        for(ll i=0;i<n;i++){
            ll x; cin>>x;
            v.pb(x);
        }
        ll net=0;
        for(ll i=0;i<n;i++)
            net+=v[i];
        double mean=double(net)/n;
        double req=double(net)-(n-1)*mean;
        if(ceil(req)==floor(req)){
            p=find(v.begin(),v.end(),ll(req));
            if(p!=v.end())
                cout<<p-v.begin()+1<<endl;
            else
                cout<<"Impossible"<<endl;
        }
        else{
            cout<<"Impossible"<<endl;
        }
    }
}