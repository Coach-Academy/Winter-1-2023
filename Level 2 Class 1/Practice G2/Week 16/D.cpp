#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n; cin >> n;
    long long ans = 1;
    bool ok = false;
    for (int bt = 60; ~bt; bt--) {
        if (n>>bt&1) ok = true;
        else if (ok) ans*=2;
    }
    cout << ans << '\n';
    return 0;
}
