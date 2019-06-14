#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++){
     int x;cin>>x;v.push_back(x);
 }
 if(is_sorted(v.begin(),v.end()))
    cout<<v.size();
 else{
 int k=log2(n);
 int t=k-1,i,j;
 for(i=0;i<t;i++){
     for(j=0;j<pow(2,k);j=j+pow(2,t-i)){
         if(is_sorted(v.begin()+j,v.begin()+j+pow(2,t-i)))
            {
                break;
            }
     }
     if(j!=pow(2,k))
        break;
 }
 if(i==t){
     cout<<"1";
 }
 else{
     cout<<pow(2,t-i);
 }
}
}