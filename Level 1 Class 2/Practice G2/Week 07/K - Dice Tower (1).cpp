#include <iostream>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        int opA = 7 - a, opB = 7 - b;
        if (a == x or b == x or opA == x or opB == x) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
