#include<bits/stdc++.h>
using namespace std;
int main(){
 long long n;cin>>n;
 vector<int>v;
 while(n!=0){
     if(n%10==7)
     v.push_back(1);
     else
     v.push_back(0);
     n/=10;
 }
 int sum=0;
 for(int i=0;i<v.size();i++){
     sum=sum+v[i]*(1<<i);
 }
 cout<<(1<<v.size())-1+sum;
}