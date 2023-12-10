#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int q, t, n, idx = 1;
    cin >> q;
    set<pair<int, int>> p, m;
    while (q--) {
        cin >> t;
        if (t == 1) {
            cin >> n;
            p.insert({-n, idx});
            m.insert({idx, n});
            idx++;
        } else if (t == 2) {
            auto it = m.begin();
            cout << (it->first) << " ";
            p.erase({-(it->second), it->first});
            m.erase(it);
        } else {
            auto it = p.begin();
            cout << it->second << " ";
            m.erase({it->second, -it->first});
            p.erase(it);
        }
    }

    return 0;
}