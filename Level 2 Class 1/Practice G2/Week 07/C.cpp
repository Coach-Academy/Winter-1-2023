#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector <ll> lucky;
void go(ll cur = 0)
{
    if (to_string(cur).size() > 10) return;
    lucky.push_back(cur);
    go(cur*10+4);
    go(cur*10+7);
}

int main() {
    go();
    sort(lucky.begin(), lucky.end());
    int l, r; cin >> l >> r;
    ll ans = 0;
    int prv = l-1;
    for (auto &lc : lucky) {
        int lst = min(lc, (ll)r);
        if (prv > lst) continue;
        ans+=1LL*(lst-prv)*lc;
        prv = lst;
    }
    cout << ans << '\n';
    return 0;
}
