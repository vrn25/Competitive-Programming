#include<bits/stdc++.h>
using namespace std;
int main(){
 long long a,b,x,y;
 cin>>a>>b>>x>>y;
 long long k=__gcd(x,y);
 x=x/k; y=y/k;
 cout<<min(a/x,b/y);
}