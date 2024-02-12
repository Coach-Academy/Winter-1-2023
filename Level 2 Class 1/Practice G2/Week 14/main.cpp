#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a%b);
}

int mpow(int a, int b) {
    if (b == 0) return 1;
    int hf = mpow(a, b/2);
    return hf*hf*(b&1 ? a : 1);
}

int mpowIterative(int a, int b) {
    int res = 1;
    while(b) {
        if (b&1) res*=a;
        a*=a, b/=2;
    }
    return res;
}

int main() {
    cout << gcd(10, 15) << ' ' << __gcd(10, 15) << '\n';
    return 0;
}
