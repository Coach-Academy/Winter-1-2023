#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 30;
int n;
double dist[N][N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    for (int tc = 1; ; ++tc) {
        cin >> n;
        if (n == 0)
            break;
        vector<string> cur(n);
        for (string &s : cur)
            cin >> s;
        sort(cur.begin(), cur.end());
        int m; cin >> m;
        while (m--) {
            string s1, s2;
            double value;
            cin >> s1 >> value >> s2;
            int u = (int) (lower_bound(cur.begin(), cur.end(), s1) - cur.begin());
            int v = (int) (lower_bound(cur.begin(), cur.end(), s2) - cur.begin());
            dist[u][v] = value;
        }
        for (int k = 0; k < n; ++k)
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < n; ++j)
                    dist[i][j] = max(dist[i][j], dist[i][k] * dist[k][j]);
        bool yes = false;
        for (int i = 0; not yes and i < n; ++i)
            yes = (dist[i][i] > 1.0);
        cout << "Case " << tc;
        cout << (yes ? ": Yes\n" : ": No\n");
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                dist[i][j] = 0;
    }
    return 0;
}