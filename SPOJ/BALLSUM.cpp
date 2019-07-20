#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll gcd(ll a, ll b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}

int main() {
    while(1){
        ll n,k;cin>>n>>k;
        if(n==-1 && k==-1)
            return 0;
        ll t=k-1;
        ll deno=(n*(n-1))/2;
        ll num;
        if(t%2)
            num=(t*t-1)/4;
        else
            num=(t*t)/4;
            
        if(num==deno){
            cout<<"1"<<endl;
            continue;
        }
        if(num==0){
            cout<<"0"<<endl;
            continue;
        }
            
        ll GCD=gcd(num,deno);
        num=num/GCD;
        deno=deno/GCD;
        cout<<num<<"/"<<deno<<endl;
    }
}