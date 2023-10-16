#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        vector <int> a(n);
        for (auto &i : a) cin >> i;
        for (int i = 0; k && i+1 < n; i++) {
            if (a[i] > k) a[i]-=k, a.back()+=k, k = 0;
            else k-=a[i], a.back()+=a[i], a[i] = 0;
        }
        for (auto &i : a) cout << i << ' ';
        cout << '\n';
    }
    return 0;
}
