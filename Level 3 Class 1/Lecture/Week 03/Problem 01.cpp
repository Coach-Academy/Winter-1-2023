// https://vjudge.net/problem/POJ-2524
#include <iostream>
#include <numeric>
using namespace std;
typedef long long ll;
const int N = 1e5 + 5;

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

void union_sets(int u, int v) {
    u = find_set(u);
    v = find_set(v);
    if (u == v)
        return;
    if (sz[u] > sz[v])
        swap(u, v);
    parent[u] = v;
    sz[v] += sz[u];
    cnt--;
}

int main() {

    int n, m, tc = 1;
    while (cin >> n >> m, n || m) {
        init(n);
        while (m--) {
            int u, v;
            cin >> u >> v;
            --u, --v;
            union_sets(u, v);
        }
        cout << "Case " << tc++ << ": "<< cnt << "\n";
    }
    return 0;
}