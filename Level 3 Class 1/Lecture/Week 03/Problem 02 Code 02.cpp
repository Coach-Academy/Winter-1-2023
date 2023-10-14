// https://vjudge.net/problem/SPOJ-MST
// using struct
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

struct edge{
    int u, v, c;
    edge(int u, int v, int c):u(u), v(v), c(c){}
    bool operator < (edge& other) {
        return c < other.c;
    }
};

vector<edge> edges;
ll kruskal(int n, int m) {
    init(n);
    ll cost = 0;
    sort(edges.begin(), edges.end());
    for (int i = 0; i < m; ++i) {
        int u, v , c;
        u = edges[i].u;
        v = edges[i].v;
        c = edges[i].c;
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
        edges.push_back(edge(u, v, c));
    }
    cout << kruskal(n, m) << "\n";
    return 0;
}