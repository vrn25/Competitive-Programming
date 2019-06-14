#include<bits/stdc++.h>
using namespace std;
int main(){
 int m,n;cin>>n>>m;
 vector<int>v;
 for(int i=0;i<n;i++){
     int x;cin>>x;v.push_back(x);
 }
 vector<string>v1;
 for(int i=0;i<m;i++){
     string s;cin>>s;v1.push_back(s);
 }
 vector<string>str;
 vector<int>ans;
 for(int i=0;i<m;i++){
     if( find(str.begin(),str.end(),v1[i])!=str.end() )
        continue;
        else{
            ans.push_back(count(v1.begin(),v1.end(),v1[i]));
            str.push_back(v1[i]);
        }
 }

 sort(v.begin(),v.end());
 sort(ans.begin(),ans.end());
 int sum1=0,sum2=0;
 
 for(int i=0;i<ans.size();i++){
     sum1=sum1+v[i]*ans[ans.size()-1-i];
 }
 for(int i=0;i<ans.size();i++){
     sum2=sum2+v[v.size()-1-i]*ans[ans.size()-1-i];
 }
cout<<sum1<<" "<<sum2;
}