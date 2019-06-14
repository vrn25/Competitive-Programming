#include<bits/stdc++.h>
using namespace std;

int fib(int n,vector<int>v){
	if(v[n]!=-1)
		return v[n];
	else
	{
	if(n==1 || n==2)
		v[n]=1;
	else{
		int result=fib(n-1)+fib(n-2);
		v[n]=result;
	}	
	return v[n];
}
}


int main(){
	int n;cin>>n;
	vector<int>v(n+1,-1);
	for(int i=1;i<=n;i++){
		cout<<fib(i,v)<<" ";
	}
}