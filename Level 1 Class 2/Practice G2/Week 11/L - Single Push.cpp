#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        for (int i = 0; i < n; ++i)
            cin >> b[i];

        int l = 0, r = n - 1;
        int diff = 0;
        for (; l <= r;) {
            if (a[l] == b[l]) {
                l++;
            } else if (a[r] == b[r])
                r--;
            else {
                diff = b[l] - a[l];
                break;
            }
        }
        if (diff < 0)
            cout << "NO\n";
        else {
            while (l <= r) {
                a[l] += diff;
                l++;
            }
            if (a == b)
                cout << "YES\n";
            else cout << "NO\n";
        }
    }
}
