// Coin Combinations I
// https://cses.fi/problemset/task/1635
#include <bits/stdc++.h>
using namespace std;
 
const int N = 102, S = 1e6 + 6, MOD = 1e9 + 7;
 
int dp[S], coins[N];
 
int main() {
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; ++i)
        cin >> coins[i];
    dp[0] = 1;
    for (int sum = 0; sum <= x; ++sum)
        for (int i = 0; i < n; ++i)
            if (coins[i] <= sum)
                (dp[sum] += dp[sum - coins[i]]) %= MOD;
    cout << dp[x] << '\n';
    return 0;
}
