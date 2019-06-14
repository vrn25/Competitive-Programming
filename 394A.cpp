#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	string::iterator p=s.begin();
	int count=0;
	while(*p!='+'){
	    count++;
	    p++;
	}
	int a=count;
	count=0;p++;
	while(*p!='='){
	    count++;
	    p++;
	}
	int b=count;
	count=0;p++;
	while(p!=s.end()){
	    count++;
	    p++;
	}
	int c=count;
	int k=0;
	if(a+b==c){
	    
	}
	else if(a+b-1==c+1){
	    if(b==1){
	        a--;c++;
	    }
	    else{
	    b--;c++;
	}
	}
	else if(a+b+1==c-1){
	  b++;c--;
	}
	else{
	    k=1;
	}
	if(k==1){
	    cout<<"Impossible";
	}
	else{
	    for(int i=0;i<a;i++){
	        cout<<"|";
	    }
	    cout<<"+";
	    for(int i=0;i<b;i++){
	        cout<<"|";
	    }
	    cout<<"=";
	    for(int i=0;i<c;i++){
	        cout<<"|";
	    }
	}
	
}











