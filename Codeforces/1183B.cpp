#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int main(){
    int q;cin>>q;
    while(q--){
        int n;ll k;cin>>n>>k;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            v.pb(x);
        }
        ll mi=*min_element(v.begin(),v.end());
        ll check=mi+k;
        int i;
        for(i=0;i<n;i++){
            ll first=v[i]-k;
            if(first<0)
                first=v[i];
            ll second=v[i]+k;
            if(check>=first && check<=second)
                continue;
            else
                break;
        }
        if(i==n)
            cout<<check<<endl;
        else
            cout<<"-1"<<endl;
    }
}