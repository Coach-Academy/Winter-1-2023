#include <bits/stdc++.h>

using namespace std;

int arr[1000000 + 1][10];

int f(int n) {
    int prod = 1;
    while (n > 0) {
        if (n % 10 == 0) {
            n /= 10;
            continue;
        }
        prod = prod * (n % 10);
        n /= 10;
    }
    return prod;
}

int g(int n) {
    if (n < 10)
        return n;

    return g(f(n));
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for (int x = 1; x <= 1000000; ++x) {
        arr[x][g(x)] = 1;
    }
    for (int k = 1; k <= 9; ++k) {
        for (int i = 1; i <= 1000000; ++i) {
            arr[i][k] += arr[i - 1][k];
        }
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        int ans = arr[r][k] - arr[l - 1][k];
        cout << ans << endl;
    }
}
