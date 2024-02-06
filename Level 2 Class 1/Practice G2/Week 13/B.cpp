#include <bits/stdc++.h>

using namespace std;

int main() {
    int s, n; cin >> s >> n;
    vector <pair<int, int>> monsters(n);
    for (auto &[x, y] : monsters) cin >> x >> y;
    sort(monsters.begin(), monsters.end());
    bool ok = true;
    for (auto &[x, y] : monsters) {
        if (x >= s) ok = false;
        s+=y;
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}
