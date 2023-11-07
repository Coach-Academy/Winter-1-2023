#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n, m;
vector <int> a, taken;
pair<int, vector <int>> go(int idx = 0, int sm = 0)
{
    if (idx == m) {
        if (sm <= n) return {n-sm, taken};
        else return {2e9, taken};
    }
    pair<int, vector <int>> ret = {2e9, {}};
    taken.push_back(a[idx]);
    ret = min(ret, go(idx+1, sm+a[idx]));
    taken.pop_back();
    ret = min(ret, go(idx+1, sm));
    return ret;
}

int main() {
    while(cin >> n) {
        cin >> m;
        a.resize(m);
        for (auto &i : a) cin >> i;
        auto [dif, vec] = go();
        int sm = 0;
        for (auto &i : vec) sm+=i, cout << i << ' ';
        cout << "sum:" << sm << '\n';
    }
    return 0;
}
