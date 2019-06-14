#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;cin>>s;
    int k=count(s.begin(),s.end(),'a');
    if(k>s.size()/2){
        cout<<s.size();
    }
    else{
        cout<<2*k-1;
    }
}