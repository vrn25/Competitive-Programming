#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	vector<long long>v;
	while(t--){
		long long n; cin>>n;
		long long a[n];
		for(long long i=0;i<n;i++)
			cin>>a[i];
		long long min = *min_element(a, a+n);
		v.push_back(min * (n-1));
	}
	for(long long i=0;i<v.size();i++)
	    cout<<v[i]<<endl;
}