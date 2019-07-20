#include <bits/stdc++.h>
#define fr(i,n) for(int i=0;i<n;i++)
#define fri(i,l,u) for(int i = (l); i < (u); i++)
#define frd(i,u,l) for(int i = (u); i > (l); i--)
#define testc int t; cin >> t; while(t--)
#define offsync ios_base::sync_with_stdio(false);
#define set0(a) memset(a,0,sizeof(a))
#define setneg(a) memset(a,-1,sizeof(a))
#define M 1000000007
#define N 100000
#define pb push_back
#define mp make_pair
#define vit vector<int>::iterator
#define sit string::iterator
#define pii pair<int, int>
#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vs vector<string>
#define st string

using namespace std;
int main(){
    offsync;
    int n,k;cin>>n>>k;
    int arr[n];
    fr(i,n){
        cin>>arr[i];
    }
    int dp[n-1];
    fri(i,0,n-1){
        dp[i]=arr[i]+arr[i+1];
    }
    int inc,count=0;
    fri(i,0,n-1){
        if(k>dp[i]){
            inc=k-dp[i];
            arr[i+1]+=inc;
            dp[i+1]+=inc;
            count+=inc;
        }
    }
    cout<<count<<"\n";
    fr(i,n){
        cout<<arr[i]<<" ";
    }
}