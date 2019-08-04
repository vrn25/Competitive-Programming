#include<bits/stdc++.h>
using namespace std;
#define ll long long;
#define m 998244353;
int main(){
    int w,h;cin>>w>>h;
    int loop = w+h;
    int ans = 1;
    while(loop--){
        ans *= 2;
        ans %= m;
    }
    cout<<ans;
}