#include <bits/stdc++.h>

using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;

    int ans = fib(n - 1) + fib(n - 2);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    cout << fib(n) << endl;
}
