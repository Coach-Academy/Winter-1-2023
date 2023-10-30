#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    int s;
    cin >> s;
    int mn = s, mx = s;
    int ans = 0;
    for (int i = 1; i < n; ++i) {
        cin >> s;
        if (s > mx) {
            ans++;
            mx = s;
        }
        if (s < mn) {
            ans++;
            mn = s;
        }
    }
    cout << ans << endl;

}
