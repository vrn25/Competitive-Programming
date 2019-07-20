#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int find_rem(string k,int n){
    int res=0;
    for(int i=0;i<k.size();i++)
        res=(res*10 + int(k[i]) - '0')%n;
    return res;
}

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string k;cin>>k;
        int rem=find_rem(k,n);
        if(rem){
            if(rem == n-rem)
                cout<<2*rem-1<<endl;
            else
                cout<<2*min(rem,n-rem)<<endl;   
        }
        else{
            cout<<"0"<<endl;
        }
    }
}