#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum = 0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    if(arr[0]>sum/2){
        cout<<"1"<<endl<<"1";
        return 0;
    }
    int mini = arr[0];
    vector<int>track;
    track.push_back(1);
    for(int i=1;i<n;i++){
        if(arr[0] >= 2*arr[i]){
            mini += arr[i];
            track.push_back(i+1);
        }
    }
    if(mini > sum/2){
        cout<<track.size()<<endl;
        for(int i=0;i<track.size();i++)
            cout<<track[i]<<" ";
    }
    else{
        cout<<"0";
    }
}