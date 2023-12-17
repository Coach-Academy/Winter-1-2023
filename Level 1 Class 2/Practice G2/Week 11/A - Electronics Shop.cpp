#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int b, n, m;
    cin >> b >> n >> m;
    vector<int> keyboards(n), usb(m);
    for (int i = 0; i < n; ++i) {
        cin >> keyboards[i];
    }
    for (int i = 0; i < m; ++i) {
        cin >> usb[i];
    }
    sort(keyboards.begin(), keyboards.end(), greater<>());
    sort(usb.begin(), usb.end());
    int ans = -1;
    for (int i = 0; i < n; ++i) {
        int x = keyboards[i], y = b - x;
        int mx = -1;
        for (int j = 0; j < m; ++j) {
            if (mx <= usb[j] and usb[j] <= y)
                mx = usb[j];
            else break;
        }
        if (x + mx <= b and mx != -1)
            ans = max(x + mx, ans);
    }
    cout << ans << endl;

}
