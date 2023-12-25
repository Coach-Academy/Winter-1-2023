#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <vector <int> > mat(n, vector <int> (n));
        for (int i = 0; i < n; i++) {
            mat[i][i] = 1;
            if (i+1 < n) mat[i][i+1] = 1;
        }
        mat[0][n-1] = mat[n-1][0] = 1;
        for (auto &i : mat) {
            for (auto &j : i) cout << j << ' ';
            cout << '\n';
        }
    }
    return 0;
}
