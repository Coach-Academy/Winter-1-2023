#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &s: v)
            cin >> s;
        int i = 0;
        while (k and i < n - 1) {
            if (v[i] > 0) {
                v[i]--, v.back()++;
                k--;
            }
            else
                i++;
        }
        for (auto &s: v)
            cout << s << ' ';
        cout << endl;
    }
}
