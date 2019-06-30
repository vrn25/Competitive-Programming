#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int q;cin>>q;
    int dp1[s.size()-1];
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1])
            dp1[i]=1;
        else
            dp1[i]=0;
    }
    int dp2[s.size()];
    dp2[0]=0;
    dp2[1]=dp1[0];
    for(int i=2;i<s.size();i++)
        dp2[i]=dp2[i-1]+dp1[i-1];
    
    while(q--){
        int a,b;cin>>a>>b;
        if(b-2==a-1){
            if(dp1[a-1])
                cout<<"1"<<endl;
            else
            cout<<"0"<<endl;
        }
        else
        cout<<dp2[b-1]-dp2[a-1]<<endl;
    }
    
}