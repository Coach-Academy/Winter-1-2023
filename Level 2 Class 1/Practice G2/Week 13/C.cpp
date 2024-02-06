#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto &i: a) cin >> i;
        sort(a.begin(), a.end());
        int ans = 1;
        for (int i = n-1; ~i; i--) {
            if (a[i] > i+1) continue;
            ans = i+2;
            break;
        }
        cout << ans << '\n';
    }
    return 0;
}
