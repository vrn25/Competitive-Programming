#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fun(ll n,ll dp[]){
    ll k = n/2 + n/3 + n/4;
    
    if(dp[n]!=-1)
        return dp[n];
    
    if(k<=n){
        dp[n] = n;
        return n;
    }
    dp[n/2] = fun(n/2,dp);
    dp[n/3] = fun(n/3,dp);
    dp[n/4] = fun(n/4,dp);
    return max(n/2,dp[n/2]) + max(n/3,dp[n/3]) + max(n/4,dp[n/4]);
}
int main(){
    ll n;
    while(cin>>n){
        ll dp[n+1];
        memset(dp,-1,sizeof(dp));
        cout<<fun(n,dp)<<endl;    
    }
}