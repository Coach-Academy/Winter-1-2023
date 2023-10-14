#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string magnet, prev;
    int ans = 1;
    for (int i = 0; i < n; ++i) {
        cin >> magnet;
        if (i == 0) {
            prev = magnet;
            continue;
        }
        if (magnet != prev)
            ans++;
        prev = magnet;
    }
    cout << ans << endl;
}
