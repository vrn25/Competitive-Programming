#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;cin>>t;
 while(t--){
     int n;cin>>n;
     vector<int>v;
     for(int i=0;i<n;i++){
         int x;cin>>x;v.push_back(x);
     }
     vector<int>one;
     vector<int>two;
     vector<int>zero;
     for(int i=0;i<n;i++){
         if(v[i]%3==0)
            zero.push_back(v[i]);
        else if(v[i]%3==1)
            one.push_back(v[i]);
        else if(v[i]%3==2)
            two.push_back(v[i]);
     }
     int k=min(one.size(),two.size());
     cout<<zero.size()+k+floor((one.size()-k)/3)+floor((two.size()-k)/3)<<endl;
 }
 
}