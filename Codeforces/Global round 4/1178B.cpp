#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    string s;
    cin>>s;
    ll n = s.size();
    vector<ll>v;
    for(ll i=0;i<n-1;i++){
        if(s[i]=='v' && s[i+1]=='v'){
            v.push_back(i);
        }
    }
    if(v.size()>0){
    ll os[v.size()-1];
    for(ll i=0;i<v.size()-1;i++){
        ll count = 0;
        for(ll j=v[i];j<=v[i+1];j++){
            if(s[j]=='o')
                count++;
        }
        os[i] = count;
    }
    ll pref[v.size()-1];
    pref[0] = os[0];
    for(ll i=1;i<v.size()-1;i++){
        pref[i] = pref[i-1] + os[i];
    }
    ll sum = 0;
    for(ll i=0;i<v.size()-1;i++)
        sum += pref[i];
    ll res[v.size()-1];
    res[0] = sum;
    for(ll i=1;i<v.size()-1;i++){
        res[i] = res[i-1] - os[i-1] * (v.size()-i);
    }
    ll ans=0;
    for(ll i=0;i<v.size()-1;i++)
        ans+=res[i];
    cout<<ans;
    }
    else{
        cout<<"0";
    }
}