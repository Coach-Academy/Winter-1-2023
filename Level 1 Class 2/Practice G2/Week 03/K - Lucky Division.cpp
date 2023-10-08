#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 4; i <= n; ++i) {
        bool lucky = true;
        int tmp = i;
        while (tmp > 0) {
            int lastDigit = tmp % 10;
            if (lastDigit != 7 and lastDigit != 4)
                lucky = false;
            tmp /= 10;
        }
        if (lucky) {
            if (n % i == 0) {
                cout << "YES\n";
                return 0;
            }
        }
    }
    cout << "NO\n";
}
