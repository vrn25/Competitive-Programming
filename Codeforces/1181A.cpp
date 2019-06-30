#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int main(){
    ll s,m,pc;cin>>s>>m>>pc;
    ll sr=s%pc; ll mr=m%pc;
    ll sq=s/pc; ll mq=m/pc;
    if(sr+mr<pc){
        cout<<sq+mq<<" "<<"0";
    }
    else{
        ll margin=min(sr,mr)-(sr+mr)%pc;
        if(margin<0){
            cout<<sq+mq<<" "<<"0";
        }
        else{
            ll extra=pc/(max(sr,mr)+margin);
            cout<<sq+mq+extra<<" "<<margin;
        }
    }
}