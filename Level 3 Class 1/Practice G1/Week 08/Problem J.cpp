#include <iostream>
using namespace std;

const int N = 102;

int n, a[N], b[N], dp[N];

int main() {
    ios::sync_with_stdio(false); cout.tie(0); cin.tie(0);
    int tc; cin >> tc;
    while (tc--) {
        cin >> n;
        for (int i = 1; i <= n; ++i)
            cin >> a[i] >> b[i];
        for (int i = 1; i <= n; ++i) {
            int sum = 0;
            dp[i] = 2e9;
            for (int j = i; j > 0; --j) {
                sum += a[j];
                dp[i] = min(dp[i], dp[j - 1] + (sum + 10) * b[i]);
            }
        }
        cout << dp[n] << '\n';
    }
    return 0;
}