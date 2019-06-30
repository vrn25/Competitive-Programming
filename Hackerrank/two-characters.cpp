#include <bits/stdc++.h>

using namespace std;
bool check(string ans,char first,char second){
    int i;
    for(i=1;i<ans.size();i++){
        if((ans[i-1]==first && ans[i]==second) || (ans[i-1]==second && ans[i]==first))
                continue;
        else
        break;
    }
    if(i==ans.size())
    return true;
    else
    return false;
}

int alt(string s,char first, char second){
    string ans="";
    for(int i=0;i<s.size();i++){
        if(s[i]==first || s[i]==second)
            ans.push_back(s[i]);
    }
    if(check(ans,first,second)==true)
        return ans.size();
    else
    return -1;
}


int main(){
    int n;cin>>n;
    string str;cin>>str;
    if(n==1)
    cout<<"0";
    else{
    string s=str;
    std::sort(s.begin(), s.end());
    s.erase(std::unique(s.begin(), s.end()), s.end());
    
    vector<int>track;
    if(s.size()==1){
        cout<<"0";
        }
        else{
    for(int i=0;i<s.size();i++){
      for (int j = i + 1; j < s.size(); j++) {
        track.push_back(alt(str, s[i], s[j]));
      }
    }

    int k = *max_element(track.begin(), track.end());
    if (k != -1)
      cout << k;
    else
      cout << "0";
        }
    }
}