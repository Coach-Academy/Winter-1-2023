#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e5+7;
int vis[N];
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

   int n;
   cin >> n;
   map<int,int> mp;
    for (int i = 0,x; i < n; ++i) {
        cin >> x;
        mp[x]++;
    }
    cout << (mp.rbegin()->first -mp.begin()->first)  << " ";
    if ( mp.size() == 1)
        cout << 1ll *(mp.begin()->second)  * (mp.begin()->second-1)  / 2 << endl;
    else
        cout << 1ll * mp.begin()->second * mp.rbegin()->second << endl;
    return 0;
}