#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int h, x, y;
        cin >> h >> x >> y;
        h -= y;
        int ans = 1;
        while (h > 0) {
            h -= x;
            ans++;
        }
        cout << ans << endl;
    }
}
