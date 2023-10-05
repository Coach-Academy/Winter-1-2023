#include <iostream>

using namespace std;

int main() {
    double w;
    cin >> w;

    if ((int) (w / 2.0) == (double) (w / 2.0) and w != 2) {
        cout << "YES\n";
    } else cout << "NO\n";
}
