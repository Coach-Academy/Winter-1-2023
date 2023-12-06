#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9+7;
int main() {
    int n; cin >> n;
    int frq[(int)1e3+1]{};
    for (int i = 1; i <= n; i++) {
        int cur = i;
        for (int j = 2; j*j <= cur; j++) {
            if (cur%j) continue;
            while(cur%j == 0) frq[j]++, cur/=j;
        }
        if (cur > 1) frq[cur]++;
    }
    int ans = 1;
    for (int i = 0; i <= 1e3; i++) {
        ans = 1LL*ans*(frq[i]+1)%mod;
    }
    cout << ans << '\n';
    return 0;
}
