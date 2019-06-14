#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int box1=0,box2=0;
    string s;cin>>s;
    string::iterator p=s.begin();
    while(p!=s.end()){
        if(*p=='S' && *(p+1)=='F')
        box1++;
        else if(*p=='F' && *(p+1)=='S')
        box2++;
        p++;
    }
    if(box1>box2)
    cout<<"YES";
    else
    cout<<"NO";
}