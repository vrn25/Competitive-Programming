#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>v;
    while(n!=0){
        v.pb(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
    
    while(1){
        int sum=accumulate(v.begin(),v.end(),0);
        if(sum%4==0){
            for(int i=0;i<v.size();i++)
                cout<<v[i];
            return 0;
        }
        int k=v.size()-1;
        if(v[k]+1<=9){
            v[k]+=1;
            continue;
        }
        int flag=0;
        while(v[k]+1>9){
            v[k]=0;
            if(k==0){
               v.pb(1);
               reverse(v.begin(),v.end());
               flag=1;
               break;
            }
            k--;
        }
        if(flag==0)
            v[k]+=1;
    }
}