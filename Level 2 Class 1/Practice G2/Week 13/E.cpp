#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    sort(a.begin(), a.end());
    cout << a.back() << ' ';
    for (int i = 1; i+1 < n; i++) cout << a[i] << ' ';
    cout << a[0] << '\n';
    return 0;
}
