#include <iostream>

using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    for (int testcase = 0; testcase < testCases; ++testcase) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
            cin >> b[i];


        while (k--) {
            int mx = b[0], mn = a[0], mxPos = 0, mnPos = 0;
            for (int i = 0; i < n; ++i) {
                if (b[i] > mx) {
                    mx = b[i];
                    mxPos = i;
                }
                if (a[i] < mn) {
                    mn = a[i];
                    mnPos = i;
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
