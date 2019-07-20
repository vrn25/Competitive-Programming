#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int q;cin>>q;
        int set=0;
        int odd=0,even=0;
        while(q--){
            int x;cin>>x;
                int j=-1;
                for(int i=1;i<=set;i*=2){
                    j++;
                    int r=j^x;
                    int w=1<<r;
                    if((set & i) == i && (set & w) == 0){
                        set = set | w;
                        if(__builtin_parity(r))
                            odd++;
                        else
                            even++;
                    }
                }
                int e=1<<x;
            if(!(set & e)){
                set = set | e;
                if(__builtin_parity(x))
                    odd++;
                else
                    even++;
            }
        cout<<even<<" "<<odd<<endl;
        }        
    }
}