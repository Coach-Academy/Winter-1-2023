#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int N = 1e6;
bool isPrime[N];
vector <int> pr;
void pre() {
    for (int i = 2; i < N; i++) isPrime[i] = true;
    for (int i = 2; i < N; i++) {
        if (!isPrime[i]) continue;
        pr.push_back(i);
        for (ll j = 1LL*i*i; j < N; j+=i) {
            isPrime[j] = false;
        }
    }
}

int main() {
    pre();
    int n, m; cin >> n >> m;
    vector <vector <int>> mat(n, vector <int> (m));
    for (auto &i : mat) for (auto &j : i) {
        cin >> j;
        j = *lower_bound(pr.begin(), pr.end(), j)-j;
    }
    int ans = 2e9;
    for (int i = 0; i < n; i++) {
        int sm = 0;
        for (int j = 0; j < m; j++) {
            sm+=mat[i][j];
        }
        ans = min(ans, sm);
    }
    for (int i = 0; i < m; i++) {
        int sm = 0;
        for (int j = 0; j < n; j++) {
            sm+=mat[j][i];
        }
        ans = min(ans, sm);
    }
    cout << ans << '\n';
    return 0;
}
