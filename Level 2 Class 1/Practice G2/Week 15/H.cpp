#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n; cin >> n;
    for (int i = 2; 1LL*i*i <= n; i++) {
        if (n%i == 0) {
            while(n%i == 0) n/=i;
            if (n == 1) return cout << i, 0;
            return cout << 1, 0;
        }
    }
    cout << n;
    return 0;
}
