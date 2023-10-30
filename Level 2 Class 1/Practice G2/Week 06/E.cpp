#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    string s; cin >> s;
    int frq[3]{}, have[3]{}, price[3]{};
    map <char, int> mp{{'B', 0}, {'S', 1}, {'C', 2}};
    for (auto &i : s) frq[mp[i]]++;
    for (auto &i : have) cin >> i;
    for (auto &i : price) cin >> i;
    long long r; cin >> r;
    long long st = 0, en = 1e14;
    while(st <= en) {
        ll mi = (st+en)/2;
        ll need = 0;
        for (int i = 0; i < 3; i++) {
            need+=max(0LL, mi*frq[i]-have[i])*price[i];
        }
        if (need <= r) st = mi+1;
        else en = mi-1;
    }
    cout << st-1 << '\n';
    return 0;
}
