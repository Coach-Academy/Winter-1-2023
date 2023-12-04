#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n,k,x;
    cin>>n>>k;
    vector<pair<int,int>>v;
    for (int i = 1; i <= n; ++i) {
        cin>>x;
        v.push_back({x,i});
    }
    sort(v.begin(), v.end());
    cout<<v.back().second;

    return 0;
}

