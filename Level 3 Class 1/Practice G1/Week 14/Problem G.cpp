// G - Blood Cousins
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5, P = 17;

int n;
int in_time[N], out_time[N], depth[N], order;
vector<int> g[N], depth_os[N];

void dfs(int u) {
    depth_os[depth[u]].push_back(in_time[u] = order++);
    for (int v : g[u]) {
        depth[v] = depth[u] + 1;
        dfs(v);
    }
    out_time[u] = order++;
}

int up[P][N];
void build() {
    for (int p = 1; p < P; ++p)
        for (int i = 1; i <= n; ++i)
            up[p][i] = up[p - 1][up[p - 1][i]];
}

int raise(int x, int k) {
    for (int p = 0; p < P; ++p)
        if ((k >> p) & 1)
            x = up[p][x];
    return x;
}

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cin >> n;
    vector<int> roots;
    for (int p, i = 1; i <= n; ++i) {
        cin >> p;
        if (p == 0) {
            roots.push_back(i);
        } else {
            g[p].push_back(i);
            up[0][i] = p;
        }
    }
    build();
    for (int root : roots)
        dfs(root);
    int q; cin >> q;
    for (int node, jump; q--; ) {
        cin >> node >> jump;
        int ancestor = raise(node, jump);
        if (ancestor < 1) {
            cout << "0 "; continue;
        }
        vector<int> &ds = depth_os[depth[node]];
        int lf = upper_bound(ds.begin(), ds.end(), in_time[ancestor]) - ds.begin();
        int rt = upper_bound(ds.begin(), ds.end(), out_time[ancestor]) - ds.begin();
        cout << max(0, rt - lf - 1) << ' ';
    }
    return 0;
}