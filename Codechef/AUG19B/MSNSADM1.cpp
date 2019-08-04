#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;cin>>t;
	while(t--){
	    int n;cin>>n;
	    int pos[n],neg[n];
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        pos[i] = 20 * x;
	    }
	    for(int i=0;i<n;i++){
	        int x;cin>>x;
	        neg[i] = 10 * x;
	    }
	    for(int i=0;i<n;i++){
	        if(pos[i] - neg[i] > 0)
	            pos[i] = pos[i] - neg[i];
	        else
	            pos[i] = 0;
	    }
	    int max = INT_MIN;
	    for(int i=0;i<n;i++){
	        if(pos[i] > max)
	            max = pos[i];
	    }
	    cout<<max<<endl;
	}
}
