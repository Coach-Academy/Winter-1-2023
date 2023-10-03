#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x;
        cin >> x;
        if (x <= 24)
            cout << "No\n";
        else
            cout << "Yes\n";
    }
}
