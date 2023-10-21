#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 102;

int n, dist[N][N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    for (int tc = 1; ; ++tc) {
        int m, q; cin >> n >> m >> q;
        if (n == 0 and m == 0 and q == 0)
            break;
        if (tc > 1) cout << '\n';
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                dist[i][j] = INT_MAX / 2;
        for (int u, v, w, i = 0; i < m; ++i) {
            cin >> u >> v >> w;
            dist[u][v] = dist[v][u] = w;
        }
        for (int k = 1; k <= n; ++k)
            for (int i = 1; i <= n; ++i)
                for (int j = 1; j <= n; ++j)
                    dist[i][j] = min(dist[i][j], max(dist[i][k], dist[k][j]));
        cout << "Case #" << tc << '\n';
        for (int u, v; q--; ) {
            cin >> u >> v;
            if (dist[u][v] < INT_MAX / 2)
                cout << dist[u][v] << '\n';
            else cout << "no path\n";
        }
    }
    return 0;
}