#include<bits/stdc++.h>
using namespace std;
long long fact(int n){
    if(n<=1)
        return 1;
    else return n*fact(n-1);
}
int main(){
    string sent; cin>>sent;
    string rec; cin>>rec;
    int actual_pos=0;
    for(int i=0;i<sent.size();i++){
        if(sent[i]=='+')
            actual_pos++;
        else
            actual_pos--;
    }
    int pred_pos=0;
    int unknown=0;
    for(int i=0;i<sent.size();i++){
        if(rec[i]=='+')
            pred_pos++;
        else if(rec[i]=='-')
            pred_pos--;
        else
            unknown++;
    }
    if(unknown==0){
        if(actual_pos==pred_pos)
            printf("%0.12f",double(1));
        else
            printf("%0.12f",double(0));
        return 0;
    }
    int dev=actual_pos-pred_pos;
    if(dev>=(-unknown) && dev<=unknown){
        if(!((unknown-dev)%2)){
            int second=(unknown-abs(dev))/2;
            int first=abs(dev)+second;
            long long result=fact(unknown)/(fact(first)*fact(second));
            printf("%0.12f",double(result)/(1<<unknown));
        }
        else{
            printf("%0.12f",double(0));
        }
    }
    else{
        printf("%0.12f",double(0));
    }
}