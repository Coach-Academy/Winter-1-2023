#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 102;
int n, dist[N][N];

int main() {
    ios::sync_with_stdio(false); cout.tie(nullptr); cin.tie(nullptr);
    cin >> n;
    for (int i = 1; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            string input; cin >> input;
            if (input == "x")
                dist[i][j] = dist[j][i] = INT_MAX / 2;
            else dist[i][j] = dist[j][i] = stoi(input);
        }
    }
    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
    int ans = 0;
    for (int i = 0; i < n; ++i)
        ans = max(ans, dist[0][i]);
    cout << ans << '\n';
    return 0;
}