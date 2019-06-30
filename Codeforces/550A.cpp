#include<bits/stdc++.h>
#define pb push_back
#define ll long long
using namespace std;
int main(){
    string s;cin>>s;
    int flag1=0,flag2=0;
    vector<pair<int,int>>dp1,dp2;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='A' && s[i+1]=='B'){
            flag1=1;
            dp1.pb(make_pair(i,i+1));
        }
    }
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='B' && s[i+1]=='A'){
            flag2=1;
            dp2.pb(make_pair(i,i+1));
        }
    }
    if(flag1==1 && flag2==1){
        for(int i=0;i<dp1.size();i++){
            for(int j=0;j<dp2.size();j++){
                if(dp1[i].first!=dp2[j].second && dp1[i].second!=dp2[j].first){
                    cout<<"YES";
                    return 0;
            }
        }
    }
        cout<<"NO";
    }
    else
        cout<<"NO";
}