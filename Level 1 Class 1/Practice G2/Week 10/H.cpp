#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        set<int>s;
        for (int i = 0; i < n; ++i) {
            int x;
            cin>>x;
            s.insert(x);
        }
        int cnt=0;
        for (int i = 0; i < m; ++i) {
            int x;
            cin>>x;
            if(s.count(x) == 1)
                cnt++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}