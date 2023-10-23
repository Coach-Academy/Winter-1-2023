#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector <int> pref(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> pref[i];
        if (i) pref[i]+=pref[i-1];
    }
    int mn = 2e9, idx;
    for (int i = 0; i+k-1 < n; i++) {
        if (pref[i+k-1]-(i ? pref[i-1] : 0) < mn) {
            mn = pref[i+k-1]-(i ? pref[i-1] : 0);
            idx = i+1;
        }
    }
    cout << idx << '\n';
    return 0;
}
