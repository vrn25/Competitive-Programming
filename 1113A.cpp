#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,v;cin>>n>>v;
    int k=n-v;
    if(k<=0){
        cout<<n-1;
    }
    else if(k==1){
        cout<<v;
    }
    else{
        cout<<v + (k*(k+1)/2 -1);
    }
}