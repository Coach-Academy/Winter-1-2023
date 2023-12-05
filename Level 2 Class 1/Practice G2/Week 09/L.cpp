#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1073741824;
const int N = 1e6+1;
bool isNotPrime[N];
ll ans[N];
void pre() {
    for (int i = 2; i*i < N; i++) {
        if (isNotPrime[i]) continue;
        for (ll j = 1LL*i*i; j < N; j+=i) {
            isNotPrime[j] = true;
        }
    }
    for (int i = 1; i < N; i++) ans[i]+=ans[i-1];
}

int main() {
    pre();
    string s;
    while(cin >> s) {
        int sm = 0;
        for (auto &i : s) {
            if (islower(i)) sm+=i-'a'+1;
            else sm+=i-'A'+27;
        }
        if (isNotPrime[sm]) cout << "It is not a prime word.\n";
        else cout << "It is a prime word.\n";
    }
    return 0;
}
