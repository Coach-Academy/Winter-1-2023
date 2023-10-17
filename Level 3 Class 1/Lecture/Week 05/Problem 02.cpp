// https://vjudge.net/problem/SPOJ-ROHAAN
#include <bits/stdc++.h>
using namespace std;

const int N = 300;
int n, dist[N][N];

void FloydWarshall() {
    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    int TC; cin >> TC;
    for (int tc = 1; tc <= TC; ++tc) {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                cin >> dist[i][j];
        FloydWarshall();
        int q, ans = 0; cin >> q;
        for (int u, v; q--; ) {
            cin >> u >> v;
            ans += dist[u][v];
        }
        cout << "Case #" << tc << ": " << ans << '\n';
    }
    return 0;
}