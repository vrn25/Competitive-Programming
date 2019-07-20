#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
int main(){
    int t;cin>>t;
    float arr[t];
    int ans[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
        ans[i]=floor(arr[i]);
    }
    int net=0;
    for(int i=0;i<t;i++)
        net+=ans[i];
    int i=0;
    while(net){
        if(ceil(arr[i])!=floor(arr[i])){
            ans[i]++;net++;
        }
        i++;
    }
    for(int i=0;i<t;i++)
        cout<<ans[i]<<endl;
}