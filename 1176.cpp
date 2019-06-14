#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        if(n==1){
            cout<<"0"<<endl;continue;
        }
        int count=0;
        while(n!=1){
            if(n%30==0)
                n=n/2;
            else if(n%15==0)
                n=2*n/3;
            else if(n%10==0)
                n=n/2;
            else if(n%6==0)
                n=n/2;
            else if(n%5==0)
                n=4*n/5;
            else if(n%3==0)
                n=2*n/3;
            else if(n%2==0)
                n=n/2;
            else{
                cout<<"-1"<<endl;break;
            }
            count++;
        }
        if(n==1)
        cout<<count<<endl;
    }
}








