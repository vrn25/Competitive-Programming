#include<bits/stdc++.h>
using namespace std;
int main(){
 int n,m,k;
 cin>>n>>m>>k;
 vector<int>v;
 for(int i=0;i<m;i++){
     int x; cin>>x;
     v.push_back(x);
 }
 int fedor; cin>>fedor;
 int count=0;
 for(int i=0;i<m;i++){
     int res=fedor^v[i];
     int ones=0;
     while(res!=0){
         if(res%2)
            ones++;
         res/=2;
     }
     if(ones<=k)
        count++;
 }
 cout<<count;
}