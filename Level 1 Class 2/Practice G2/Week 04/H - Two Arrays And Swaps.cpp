#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        while (k--) {
            int mn = INT_MAX, mnPos = 0, mx = INT_MIN, mxPos = 0;
            for (int i = 0; i < n; ++i) {
                if (mn > a[i]) {
                    mn = a[i];
                    mnPos = i;
                }
                if (mx < b[i]) {
                    mx = b[i];
                    mxPos = i;
                }
            }
            if (mx - mn > 0) {
                a[mnPos] = mx;
                b[mxPos] = mn;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += a[i];
        }
        cout << sum << endl;

    }
}
