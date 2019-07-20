#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
string a,b;
ll ans,even=0;
int main(){
    cin>>a>>b;
    for(int i=0;i<b.size();i++){
        even+=(a[i]==b[i])?0:1;
    }
    if(!(even%2))
        ans++;
    for(int i=b.size();i<a.size();i++){
        even+=(a[i]==a[i-b.size()])?0:1;
        if(!(even%2))
            ans++;
    }
    cout<<ans;
}