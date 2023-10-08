#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int h, x, y;
        cin >> h >> x >> y;
        int n = 0;
        while (n * x + y < h)
            n++;
        cout << n + 1 << endl;
    }
}
