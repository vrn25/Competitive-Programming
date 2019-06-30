#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    vector<long long>v;
    for(int i=0;i<n;i++){
        long long x;cin>>x;
        v.push_back(x);
    }
    vector<long long>::iterator p=v.begin();
    int max=-1;
    while(p!=v.end()){
        int count=1;
        while(p!=v.end()-1 && *p <= *(p+1)){
            count++;
            p++;
        }
        if(count>max)
            max=count;
        p++;
    }
    cout<<max;
}