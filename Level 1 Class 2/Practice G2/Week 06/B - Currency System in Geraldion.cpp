#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int s;
        cin >> s;
        if (s == 1) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << 1 << endl;
}
