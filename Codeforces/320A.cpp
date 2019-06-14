#include<bits/stdc++.h>
using namespace std;
int main(){
 string s;
 cin>>s;
 string::iterator p=s.begin();
 if(*p=='4')
    cout<<"NO";
 else{
     while(p!=s.end()){
         if(*p=='4'){
             if(*(p-1)=='1' || (*(p-1)=='4' && *(p-2)=='1') ){
                 p++;continue;
             }
             else
             break;
             
     }
     else if(*p=='1')
        p++;
    else
    break;
 }
 if(p==s.end())
    cout<<"YES";
else
cout<<"NO";
}
}