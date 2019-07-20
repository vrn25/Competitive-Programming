#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define mp make_pair
using namespace std;
int find_min(int arr[],int n){
    int mi=arr[0],idx=0;
    for(int i=0;i<n;i++){
        if(arr[i]<mi){
            mi=arr[i];
            idx=i;
        }
    }
    return idx;
}
 
int main(){
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++){
        arr[i]=(arr[i]>=0)?(-arr[i]-1):arr[i];;
    }
    if(n%2){
        int idx_min=find_min(arr,n);
        arr[idx_min]=-arr[idx_min]-1;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}