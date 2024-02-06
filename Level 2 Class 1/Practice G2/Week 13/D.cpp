#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    bool one = false;
    while(n--) {
        int x; cin >> x;
        if (x == 1) one = true;
    }
    cout << (one ? -1 : 1) << '\n';
    return 0;
}
