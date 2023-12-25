#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; cin >> n >> m;
    vector <vector <int>> mat(n, vector <int> (m));
    for (auto &i : mat) for (auto &j : i) cin >> j;
    vector <pair<int, int>> ops;
    vector <vector <int>> mat2(n, vector <int> (m));
    for (int i = 0; i+1 < n; i++) {
        for (int j = 0; j+1 < m; j++) {
            int cnt = 0;
            for (auto &ni : {i, i+1}) for (auto &nj : {j, j+1}) cnt+=mat[ni][nj];
            if (cnt == 4) {
                ops.push_back({i+1, j+1});
                for (auto &ni : {i, i+1}) for (auto &nj : {j, j+1}) mat2[ni][nj] = 1;
            }
        }
    }
    if (mat != mat2) cout << "-1\n";
    else {
        cout << ops.size() << '\n';
        for (auto &[x, y] : ops) cout << x << ' ' << y << '\n';
    }
    return 0;
}
