#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<long long>v;
    for(long long i=0;i<n;i++){
        long long x;cin>>x;v.push_back(x);
    }
    vector<int>track;
    int count=1;
    for(long long i=0;i<n;i++){
        if(i==n-1){
            if(v[i]<v[i-1]){
                continue;
            }
            else{
                track.push_back(count);
                continue;
            }
        }
        if(v[i]<=v[i+1]){
            count++;
        }
        else{
            track.push_back(count);
            count=1;
        }
    }
    cout<<*max_element(track.begin(),track.end());
}