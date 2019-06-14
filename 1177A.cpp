#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    if(n<=9)
        cout<<n;
    else if(n<=189){
        int q=n-9;
        if(n%2==0){
            int w=10+(q/2);
            string s=to_string(w);
            cout<<s[0];
        }
        else{
            int w=10+(q/2 -1);
            string s=to_string(w);
            cout<<s[1];
        }
    }
    else if(n<=2889){
        int q=n-189;
        if(n%3==0){
            int w=100+(q/3 -1);
            string s=to_string(w);
            cout<<s[2];
        }
        else if(n%3==1){
            int w=100+(q/3);
            string s=to_string(w);
            cout<<s[0];
        }
        else{
            int w=100+(q/3);
            string s=to_string(w);
            cout<<s[1];
        }
    }
    else if(n<=38889){
        int q=n-2889;
        if(n%4==0){
            int w=1000+(q/4);
            string s=to_string(w);
            cout<<s[2];
        }
        else if(n%4==1){
            int w=1000+(q/4 -1);
            string s=to_string(w);
            cout<<s[3];
        }
        else if(n%4==2){
            int w=1000+(q/4);
            string s=to_string(w);
            cout<<s[0];
        }
        else{
            int w=1000+(q/4);
            string s=to_string(w);
            cout<<s[1];
        }
    }
}