#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n,k;cin>>n>>k;
        long long n1=n; long long count=-1;
        while(n1!=0){
            n1=n1/k;count++;
        }
        long long c=0;
        while(count--){
            long long q=k*(n/k);
            c=c+(n-q);
            n=n/k;
            c++;
        }
        c=c+n;
        cout<<c<<endl;
    }
}