#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    pair<int,int>p;
    cin>>p.first;cin>>p.second;
    vector<pair<int,int>>v;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin>>x;cin>>y;
        v.push_back(make_pair(x,y));
    }
    bool arr[p.second-p.first];
    memset(arr,true,sizeof(arr));
    for(int i=0;i<v.size();i++){
        if(v[i].first>=p.second || v[i].second<=p.first)
            continue;
        v[i].first=v[i].first-p.first;
        v[i].second=v[i].second-p.first;
        if(v[i].first<0)
        v[i].first=0;
        if(v[i].second<0)
        v[i].second=0;
        
        if(v[i].second>p.second-p.first)
            v[i].second=p.second-p.first;
        v[i].second--;
        for(int j=v[i].first;j<=v[i].second;j++){
            if(arr[j]==true)
                arr[j]=false;
        }
    }
    int count=0;
    for(int i=0;i<p.second-p.first;i++){
        if(arr[i]==true)
            count++;
    }
    cout<<count;
}