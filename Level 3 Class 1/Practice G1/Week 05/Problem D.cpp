#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 2e3 + 3;
int n;
ll dist[N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int tc; cin >> tc;
    while (tc--) {
        int m; cin >> n >> m;
        for (int i = 1; i <= n; ++i)
            dist[i] = 1e18;
        vector<tuple<int, int, int>> es(m);
        for (auto &[w, u, v] : es) {
            cin >> u >> v >> w;
            dist[v] = min(dist[v], 1ll * w);
        }
        bool is_inf = false;
        for (int i = 0; not is_inf and i < n; ++i) {
            for (auto [w, u, v] : es) {
                if (dist[u] + w < dist[v]) {
                    if (i + 1 == n) {
                        is_inf = true; break;
                    }
                    dist[v] = dist[u] + w;
                }
            }
        }
        if (is_inf) cout << "-inf\n";
        else cout << *min_element(dist + 1, dist + n + 1) << '\n';
    }
    return 0;
}