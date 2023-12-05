#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    string s; cin >> s;
    int gaps = (int)s.size()-1;
    ll ans = 0;
    for (int msk = 0; msk < (1<<gaps); msk++) {
        string cur;
        cur.push_back(s[0]);
        for (int i = 0; i < gaps; i++) {
            if (msk>>i&1) {
                ans+=stoll(cur);
                cur.clear();
            }
            cur.push_back(s[i+1]);
        }
        ans+=stoll(cur);
    }
    cout << ans << '\n';
    return 0;
}
