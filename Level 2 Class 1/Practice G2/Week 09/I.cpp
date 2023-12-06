#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1073741824;
const int N = 1e6+1;
int divs[N]; // divs[i] = #divisors of i
void pre() {
    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j+=i) {
            divs[j]++;
        }
    }
}

int main() {
    pre();
    int a, b, c; cin >> a >> b >> c;
    int ans = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                ans+=divs[i*j*k];
                ans%=mod;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}
