#include<bits/stdc++.h>
using namespace std;
int solve(int n,int arr[],int dp[]){
    if(n<0)
        return INT_MIN;
    if(dp[n]!=-1)
        return dp[n];
    if(n==0)
        return 0;
    int res=INT_MIN;
    for(int i=0;i<3;i++){
        res=max(res,solve(n-arr[i],arr,dp)+1);
    }
    dp[n]=res;
    return dp[n];
}

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int arr[]={a,b,c};
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    cout<<solve(n,arr,dp);
}
