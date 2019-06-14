#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;cin>>s;
    vector<int>v;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='R')
            v.push_back(0);
        else
            v.push_back(1);
    }
    long long sum=0;
    for(int i=n-1;i>=0;i--){
        sum=sum+v[i]*pow(2,n-1-i);
    }
    cout<<sum;
}
    