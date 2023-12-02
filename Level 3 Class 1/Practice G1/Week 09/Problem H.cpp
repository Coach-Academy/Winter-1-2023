#include <bits/stdc++.h>
using namespace std;

const int N = 52, O = 12;
const double M = 1e9;
double diff[O], dist[N][N], dp[N][1 << O];
int n, p, tc = 1, store[O], visited[N][1 << O];

void floyd() {
    for (int k = 0; k <= n; ++k)
        for (int i = 0; i <= n; ++i)
            for (int j = 0; j <= n; ++j)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
}

double solve(int cur, int mask) {
    if (mask + 1 == (1 << p))
        return -dist[cur][0];
    double &ans = dp[cur][mask];
    if (visited[cur][mask] == tc)
        return ans;
    visited[cur][mask] = tc;
    ans = -1e9;
    for (int i = 0; i < p; ++i) {
        if ((mask >> i) & 1)
            continue;
        ans = max(ans, solve(cur, mask | (1 << i)));
        ans = max(ans, diff[i] - dist[cur][store[i]] + solve(store[i], mask | (1 << i)));
    }
    return ans;
}

int main() {
    // freopen("D:\\Problem Solving\\Problem Solving\\input.txt", "r", stdin);
    // freopen("D:\\Problem Solving\\Problem Solving\\output.txt", "w", stdout);
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cout << fixed << setprecision(2);
    int TC; cin >> TC;
    for (; tc <= TC; ++tc) {
        int m; cin >> n >> m;
        for (int i = 0; i <= n; ++i) {
            for (int j = 0; j <= n; ++j)
                dist[i][j] = M;
            dist[i][i] = 0; 
        }
        for (int u, v, i = 0; i < m; ++i) {
            double cost; cin >> u >> v >> cost;
            dist[u][v] = dist[v][u] = min(dist[u][v], cost);
        }
        cin >> p;
        for (int i = 0; i < p; ++i)
            cin >> store[i] >> diff[i];
        floyd();
        double ans = solve(0, 0);
        if (abs(ans) < 1e-8) cout << "Don't leave the house\n";
        else cout << "Daniel can save $" << ans << '\n';
    }
    return 0;
}