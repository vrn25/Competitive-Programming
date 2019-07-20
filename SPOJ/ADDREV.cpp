#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int n;cin>>n;
    while(n--){
        ll a,b;cin>>a>>b;
        string str1=to_string(a);
        string str2=to_string(b);
        reverse(str1.begin(),str1.end());
        reverse(str2.begin(),str2.end());
        ll first=stoi(str1);
        ll second=stoi(str2);
        string str=to_string(first+second);
        reverse(str.begin(),str.end());
        cout<<stoi(str)<<endl;
    }
}