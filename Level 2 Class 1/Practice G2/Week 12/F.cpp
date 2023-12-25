#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <int> a(n);
        for (auto &i : a) cin >> i;
        auto mx = *max_element(a.begin(), a.end());
        bool done = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == mx &&
            ((i > 0 && a[i-1] < a[i])
            || (i+1 < n && a[i+1] < a[i]))) {
                done = true;
                cout << i+1 << '\n';
                break;
            }
        }
        if (!done) cout << "-1\n";
    }
    return 0;
}
