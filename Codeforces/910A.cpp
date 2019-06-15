#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,d;cin>>n>>d;
    string s;
    cin>>s;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    vector<int>::iterator p=v.begin();
    int count=0;
    while(p!=v.end()){
        if(*(v.end()-1)-*p<=d){
            count++;
            cout<<count;
            return 0;
        }
        vector<int>::iterator q=p+d;
        //cout<<*q;
        int k=1;
        for(q=p+d;q!=p;q--){
            //cout<<"hi"<<endl;
            if(s[q-v.begin()]=='1'){
                p=q;count++;
                k=0;
                break;
            }
        }
        if(k==1){
            cout<<"-1";
            return 0;
        }
        else{
            continue;
        }
    }
    
}