#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int h, x, y;
        cin >> h >> x >> y;
        int ans = 0;
        while (h > 0) {
            if (h - y <= 0)
                h -= y;
            else
                h -= x;
            ans++;
        }
        cout << ans << endl;
    }
}
