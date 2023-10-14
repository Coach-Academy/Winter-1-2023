// https://vjudge.net/problem/SPOJ-MST
// Using pair
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e4 + 5;

int parent[N], sz[N], cnt;

void init(int n) {
    for (int i = 0; i < n; ++i) {
        parent[i] = i;
    }
    fill(sz, sz + N, 1);
    cnt = n;
}

int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

bool union_sets(int u, int v) {
    u = find_set(u);
    v = find_set(v);
    if (u == v)
        return false;
    if (sz[u] > sz[v])
        swap(u, v);
    parent[u] = v;
    sz[v] += sz[u];
    cnt--;
    return true;
}

vector<pair<int, pair<int,int>>> edges;
ll kruskal(int n, int m) {
    init(n);
    ll cost = 0;
    sort(edges.begin(), edges.end());
    for (int i = 0; i < m; ++i) {
        int u, v, c;
        u = edges[i].second.first;
        v = edges[i].second.second;
        c = edges[i].first;
        if (union_sets(u, v))
            cost += c;
    }
    return cost;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        int u, v, c;
        cin >> u >> v >> c;
        --u, --v;
        edges.push_back({c, {u, v}});
    }
    cout << kruskal(n, m) << "\n";
    return 0;
}