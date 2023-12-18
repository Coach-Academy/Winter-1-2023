#include <bits/stdc++.h>

using namespace std;

using ll = long long;

string convertBase(ll n, int base) {
    string res;
    while(n) {
        res = to_string(n%base)+res;
        n/=base;
    }
    return res;
}

ll getDecimal(string num, int base) {
    ll res = 0, pw = 1;
    for (int i = (int)num.size()-1; ~i; i--) {
        res+=(num[i]-'0')*pw;
        pw*=base;
    }
    return res;
}

int main() {
    int q; cin >> q;
    while(q--) {
        ll n; cin >> n;
        auto ter = convertBase(n, 3);
        bool need = false;
        for (int i = ter.size()-1; ~i; i--) {
            if (ter[i] == '2') need = true;
            if (need && ter[i] == '0') {
                ter[i] = '1', need = false;
                for (int j = i+1; j < ter.size(); j++) ter[j] = '0';
            }
        }
        if (need) ter = "1"+string(ter.size(), '0');
        cout << getDecimal(ter, 3) << '\n';
    }
    return 0;
}
