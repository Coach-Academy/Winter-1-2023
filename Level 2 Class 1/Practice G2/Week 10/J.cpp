#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        map <int, int> frq;
        while(n--) {
            int i; cin >> i, i = (k-i%k)%k;
            if (i) frq[i]++;
        }
        long long ans = 0;
        while(!frq.empty()) {
            int x = 0;
            auto it = frq.lower_bound(x);
            while(it != frq.end()) {
                auto &[val, f] = *it;
                ans += val - x + 1;
                x = val + 1;
                if (f > 1) f--;
                else frq.erase(it);
                it = frq.lower_bound(x);
            }
            if (!frq.empty()) ans+=k-x;
        }
        cout << ans << '\n';
    }
    return 0;
}
