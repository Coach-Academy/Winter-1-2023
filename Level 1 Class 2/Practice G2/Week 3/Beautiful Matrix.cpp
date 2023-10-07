#include <iostream>

using namespace std;

int main() {
    int ans = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            int x;
            cin >> x;
            if (x == 1) {
                if (i > 2)
                    ans += i - 2;
                else
                    ans += 2 - i;
                if (j > 2)
                    ans += j - 2;
                else
                    ans += 2 - j;
            }
        }
    }
    cout << ans << endl;
}
