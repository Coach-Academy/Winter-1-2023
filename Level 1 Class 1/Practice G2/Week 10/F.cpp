#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n, m, x, bulbs;
    cin >> n >> m;
    map<int, bool> mp;
    for (int i = 0; i < n; ++i) {
        cin >> bulbs;
        for (int j = 0; j < bulbs; ++j) {
            cin >> x;
            mp[x] = !mp[x];
        }
    }
    int cnt = 0;
    for (auto it: mp) {
        if (it.second == 1)cnt++;
        cout<<it.first<<" "<<it.second<<"\n";
    }
    (cnt == m) ? cout << "YES" : cout << "NO";
    return 0;
}
