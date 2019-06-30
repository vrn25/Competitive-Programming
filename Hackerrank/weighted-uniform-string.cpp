#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;cin>>s;
    int t;cin>>t;
    vector<string>v;
    string::iterator p=s.begin(),temp;
    while(p!=s.end()){
        string str;
        str.push_back(*p);
        while(p!=s.end()-1 && *(p+1)==*(p)){
            str.push_back(*(p+1));
            p++;
        }
        v.push_back(str);
        p++;
    }
    while(t--){
        int q_weight;cin>>q_weight;
        int w=0;
        for(int i=0;i<v.size();i++){
          int k = v[i][0] - 96;
           if ((q_weight % k == 0) && (k*v[i].size() >=q_weight ) ) {
                    cout<<"Yes"<<endl;
                    w=1;
                    break;
           }
        }
    if(w==0)
    cout<<"No"<<endl;
    }
}
