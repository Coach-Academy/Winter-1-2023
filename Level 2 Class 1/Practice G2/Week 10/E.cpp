#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        long long sm = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            sm+=x;
        }
        cout << 1LL*(n-sm%n)*(sm%n) << '\n';
    }
    return 0;
}
