#include <bits/stdc++.h>
using namespace std;
#define TEKA ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int t;
    cin>>t;
    while(t--){
        int n,r;
        cin>>n>>r;
        set<int>s;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            s.insert(x);
        }
        vector<int>v;
        for(auto it:s){
            v.push_back(it);
        }
        int ans=0;
        for (int i = v.size()-1; i >=0 ; --i) {
            if(v[i] - ans*r > 0 ) ans++;
        }
        cout<<ans<<"\n";
    }

    return 0;
}