#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++){
     int x;cin>>x;v.push_back(x);
 }
 vector<pair<int,int>>v1;
 for(int i=0;i<n;i++){
     v1.push_back(make_pair(v[i],i+1));
 }
 sort(v1.begin(),v1.end());
 for(int i=0;i<n/2;i++){
     cout<<v1[i].second<<" "<<v1[n-1-i].second<<endl;
 }
 
 
}