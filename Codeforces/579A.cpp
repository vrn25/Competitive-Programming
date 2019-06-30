#include<bits/stdc++.h>
using namespace std;
int main(){
 long long n;cin>>n;
 int count=0;
 while(n){
     if(n%2){
         n--;
         count++;
     }
     else{
         n/=2;
     }
 }
 cout<<count;
}