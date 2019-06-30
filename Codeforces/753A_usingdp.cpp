#include<bits/stdc++.h>
using namespace std;
int solve(int n,bool check[],int dp[]){
    if(dp[n]!=-1)
        return dp[n];
    if(n==0){
        dp[n]=0;
        return 0;
    }
    int res=-1000;
    for(int i=1;i<=n;i++){
        if(check[i]==false){
            check[i]=true;
            res=max(res,solve(n-i,check,dp)+1);
        }
    }
    dp[n]=res;
    return res;
}

int main(){
    int n;cin>>n;
    bool check[n+1];
    memset(check,false,sizeof(check));
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    int k=solve(n,check,dp);
    cout<<k<<endl;
    for(int i=1;i<k;i++)
        cout<<i<<" ";
    cout<<n-(k*(k-1))/2;
    
}