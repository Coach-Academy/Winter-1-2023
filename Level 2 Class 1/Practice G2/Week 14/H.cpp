#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    if (count(a.begin(), a.end(), 1) == 0) return cout << 0, 0;
    long long ans = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) continue;
        int j = i+1;
        while(j < n && a[j] == 0) j++;
        if (j < n) {
            ans*=j-i;
            i = j-1;
        }
        else break;
    }
    cout << ans << '\n';
    return 0;
}
