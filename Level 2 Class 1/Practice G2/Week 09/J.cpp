#include <bits/stdc++.h>

using namespace std;

using ll = long long;
const int N = 1e8+1;
bool isNotPrime[N];
int id;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    for (int i = 2; i < N; i++) {
        if (isNotPrime[i]) continue;
        if (id%100 == 0) cout << i << '\n';
        id++;
        for (ll j = 1LL*i*i; j < N; j+=i) {
            isNotPrime[j] = true;
        }
    }
    return 0;
}
