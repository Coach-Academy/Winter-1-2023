#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int c[3], a[5];
        for (auto &i : c) cin >> i;
        for (auto &i : a) cin >> i;
        c[0]-=a[0], c[1]-=a[1];
        a[3]-=max(0, c[0]);
        a[4]-=max(0, c[1]);
        c[2]-=max(0, a[2])+max(0, a[3])+max(0, a[4]);
        cout << (*min_element(c, c+3) < 0 ? "NO\n" : "YES\n");
    }
    return 0;
}
