#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int x0, y0, x1, y1;
    cin >> x0 >> y0 >> x1 >> y1;
    int n; cin >> n;
    set<pair<int, int>> allowed;
    for (int r, a, b; n--; ) {
        cin >> r >> a >> b;
        for (; a <= b; ++a)
            allowed.emplace(r, a);
    }
    queue<pair<int, int>> q;
    q.emplace(x0, y0);
    map<pair<int, int>, int> mp;
    mp[{x0, y0}] = 0;
    while (not q.empty()) {
        auto [x, y] = q.front(); q.pop();
        if (x == x1 and y == y1)
            return cout << mp.at({x, y}) << '\n', 0;
        for (int dx = -1; dx <= +1; ++dx) {
            for (int dy = -1; dy <= +1; ++dy) {
                if (dx == 0 and dy == 0)
                    continue;
                int n_x = x + dx, n_y = y + dy;
                if (not allowed.count({n_x, n_y}) or mp.count({n_x, n_y}))
                    continue;
                mp[{n_x, n_y}] = mp.at({x, y}) + 1;
                q.emplace(n_x, n_y);
            }
        }
    }
    cout << "-1\n";
    return 0;
}