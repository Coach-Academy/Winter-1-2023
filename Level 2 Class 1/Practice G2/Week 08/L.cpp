#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    int xo = 0;
    vector <int> a(n);
    for (auto &i : a) cin >> i, xo^=i;
    for (auto &i : a) cout << (xo^i) << ' ';
    cout << '\n';
    return 0;
}
