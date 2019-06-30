#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long>v;
    for(int i=0;i<n;i++){
        long long x;cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int q;cin>>q;
    while(q--){
        long long k;cin>>k;
        cout<<upper_bound(v.begin(),v.end(),k)-v.begin()<<endl;
    }
}