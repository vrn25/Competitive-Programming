#include<bits/stdc++.h>
using namespace std;
int main(){
    int up,down,un;
    cin>>up>>down>>un;
    int k=up-down;
    if(k>0){
        if(k-un>0){
            cout<<"+";
        }
        else{
            cout<<"?";
        }
    }
    else if(k==0){
        if(un==0){
            cout<<"0";
        }
        else{
            cout<<"?";
        }
    }
    else{
        if(k+un<0){
            cout<<"-";
        }
        else{
            cout<<"?";
        }
    }
}
    