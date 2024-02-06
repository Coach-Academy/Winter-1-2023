#include <bits/stdc++.h>

using namespace std;

int main() {
    int frq[100]{};
    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        frq[x]++;
    }
    for (auto &i : frq) cout << i << ' ';
    return 0;
}
