#include <bits/stdc++.h>
#define fr(i,n) for(i=0;i<n;i++)
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

int min(int a, int b, int c){
	return min(min(a,b),c);
}

int EditDistance(string str1, string str2, int m, int n, int dp[][N]){
	
	if(m==0)
		return n;

	if(n==0)
		return m;

	if(dp[m][n]!=-1)
		return dp[m][n];

	if(str1[m-1]==str2[n-1])
		dp[m][n] = EditDistance(str1,str2,m-1,n-1,dp);
	else
		dp[m][n] = 1 + min(EditDistance(str1,str2,m,n-1,dp), EditDistance(str1,str2,m-1,n,dp), EditDistance(str1,str2,m-1,n-1,dp));

	return dp[m][n];
}

int main(){
	offsync;
	string str1,str2;
	cin>>str1>>str2;
	int m=str1.size(); int n=str2.size();
	int dp[m+1][N];
	setneg(dp);
	cout<<EditDistance(str1,str2,m,n,dp);
}