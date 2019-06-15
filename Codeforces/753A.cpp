#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    if(n==2){
        cout<<"1"<<endl<<"2";
    }
    else{
    vector<int>ans;
    vector<int>track;
    ans.push_back(1);
    track.push_back(n-1);
    for(int i=2;i<=n;i++){
        int k=track[track.size()-1]-i;
        if(k>i){
            ans.push_back(i);
            track.push_back(k);
        }
        else{
            ans.push_back(track[track.size()-1]);
            break;
        }
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
}