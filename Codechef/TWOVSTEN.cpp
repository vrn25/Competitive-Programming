#include <iostream>
using namespace std;

int main() {
	int t;cin>>t;
	while(t--){
	    long long x;cin>>x;
	    if(!x)
	        cout<<"0"<<endl;
	    else if(!(x%10))
	        cout<<"0"<<endl;
	    else if(!(x%5))
	        cout<<"1"<<endl;
	    else
	        cout<<"-1"<<endl;
	}
}
