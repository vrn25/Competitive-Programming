#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int main(){
    string s;
    cin>>s;
    string::iterator p = s.begin(),q = s.end()-1;
    int req = s.size()/2;
    string half;
    char ch;
    int flag;
    int count = 0;
    while(1){
        if(count*2 == req){
            flag = 1;
            break;
        }
        if(count*2 == req-1){
            flag = 2;
            p++;ch = *p;
            break;
        }
        if(*p == *q){
            count++;
            half.push_back(*p);
            p++;q--;
        }
        else if(*p == *(q-1)){
            count++;
            half.push_back(*p);
            p++;q-=2;
        }
        else{
            p++;
        }
    }
    if(flag==1){
        cout<<half;
        for(int i=half.size()-1;i>=0;i--)
            cout<<half[i];
    }
    else if(flag==2){
        cout<<half<<ch;
        for(int i=half.size()-1;i>=0;i--)
            cout<<half[i];
    }    
} 