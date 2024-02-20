#include <bits/stdc++.h>

using namespace std;

array <int, 3> exgcd(int x, int y) {
    if (y == 0) return {x, 1, 0};
    auto [g, a1, b1] = exgcd(y, x%y);
    return {g, b1, a1-b1*(x/y)};
}

int modInv(int x, int m) {
    auto [g, a, b] = exgcd(x, m);
    if (g > 1) return -1;
    while (a < 0) a+=m;
    a%=m;
    return a;
}

int main() {
    cout << modInv(4, 8) << '\n';
    return 0;
}
