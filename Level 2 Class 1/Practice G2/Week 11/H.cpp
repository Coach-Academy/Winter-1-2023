#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    cout << 2-(r1 == r2)-(c1 == c2) << ' ';

    if ((r1+c1)%2 != (r2+c2)%2) cout << "0 ";
    else {
        cout << 2-(abs(r1-r2) == abs(c1-c2)) << ' ';
    }

    cout << max(abs(r2-r1), abs(c2-c1)) << '\n';
    return 0;
}
