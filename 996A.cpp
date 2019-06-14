#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int count=0;
    vector<int>v{1,5,10,20,100};
    while(n){
        if(n>=100){
            int k=n/100;
            n=n-100*k;
            count=count+k;
        }
        else{
            vector<int>::iterator q;
            q=lower_bound(v.begin(),v.end(),n);
            if(*q==n){
                n=0;
                count=count+1;
            }
            else{
                q--;
                int x=*q;
                int k=n/x;
                n=n-x*k;
                count=count+k;
            }
        }
    }
    cout<<count;
}