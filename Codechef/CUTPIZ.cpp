#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define f0 for(int i=0;i<n;i++)
#define f1 for(int i=1;i<n;i++)
using namespace std;
int GCD(int a,int b){
    if(a==0)
        return b;
    else    
    return GCD(b%a,a);
}
int main(){
	int t;cin>>t;
	while(t--){
	        int n;cin>>n;
	        std::vector<int>v;
	        f0{
	            int x;cin>>x;
	            v.pb(x);
	        }
	        vector<int>pieces;
	        f1{
	            pieces.pb(v[i]-v[i-1]);
	        }
	        pieces.pb(360-accumulate(pieces.begin(),pieces.end(),0));
	        
	        int result=pieces[0];
	        f1{
	            result=GCD(result,pieces[i]);
	        }
	        cout<<(360/result)-n<<endl;
	}
}