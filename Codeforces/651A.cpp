#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;cin>>a>>b;
    if(a==1&&b==1){
        cout<<"0";
    }
    else{
    int count=0;
    while(a!=0 && b!=0){
        if(a>=b){
            b++;a=a-2;
        }
        else{
            a++;b=b-2;
        }
        count++;
    }
    cout<<count;
}
}