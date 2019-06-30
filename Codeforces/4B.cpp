#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int main(){
    int n,h;cin>>n>>h;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        v.pb(make_pair(x,y));
    }
    int minsum=0,maxsum=0;
    for(int i=0;i<n;i++){
        minsum+=v[i].first;
    }
    for(int i=0;i<n;i++){
        maxsum+=v[i].second;
    }
    if(h>=minsum && h<=maxsum){
        cout<<"YES"<<endl;
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i]=v[i].second;
        }
        int i=0;
        while(maxsum!=h){
            if(arr[i]-1>=v[i].first){
                maxsum--;
                arr[i]-=1;
                continue;
            }
            i++;
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    }
    else
        cout<<"NO";
}