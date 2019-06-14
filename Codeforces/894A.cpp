#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;cin>>s;
	vector<char>v;
    for(int i=0;i<s.size();i++){
        if(s[i]=='A' || s[i]=='Q')
            v.push_back(s[i]);
    }
    int c=0;
    vector<char>::iterator p=find(v.begin(),v.end(),'Q');
    
    while(1){
        vector<char>::iterator q=find(p,v.end(),'A');
    	while(1){
    		c=c+count(q,v.end(),'Q');
    		if(find(q+1,v.end(),'A')==v.end()){
    			break;
    		}
    		else{
    			q=find(q+1,v.end(),'A');continue;
    		}
    	}
    	if(find(p+1,v.end(),'Q')==v.end())
    		break;
    	else{
    		p=find(p+1,v.end(),'Q');continue;
    	}
    }
    cout<<c;
}