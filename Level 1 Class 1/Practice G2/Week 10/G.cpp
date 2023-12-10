#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n;
    cin>>n;
    map<string,bool>vis;
    vector<string>vec;
    for (int i = 0; i < n; ++i) {
        string s;
        cin>>s;
        vec.push_back(s);
    }
    reverse(vec.begin(), vec.end());
    for (int i = 0; i < n; ++i) {
        if(vis[vec[i]] == 0){
            cout<<vec[i]<<"\n";
            vis[vec[i]]= true;
        }
    }
    return 0;
}
