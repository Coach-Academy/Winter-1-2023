#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 302;
int n, dist[N][N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> dist[i][j];
    int k; cin >> k;
    for (int u, v, w; k--; ) {
        cin >> u >> v >> w;
        if (w < dist[u][v])
            dist[u][v] = dist[v][u] = w;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                dist[i][j] = min(dist[i][j], dist[i][u] + dist[u][v] + dist[v][j]);
                dist[i][j] = min(dist[i][j], dist[i][v] + dist[u][v] + dist[u][j]);
            }
        }
        ll sum = 0;
        for (int i = 1; i <= n; ++i)
            for (int j = i + 1; j <= n; ++j)
                sum += dist[i][j];
        cout << sum << ' ';
    }
    return 0;
}