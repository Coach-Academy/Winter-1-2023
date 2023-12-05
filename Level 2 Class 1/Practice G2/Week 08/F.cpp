#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    string s1, s2; cin >> s1 >> s2;
    int tot = 0, ops = 0;
    for (int msk = 0; msk < (1<<s1.size()); msk++) {
        bool invalid = false;
        string cur = s2;
        for (int i = 0; i < s2.size(); i++) {
            if (msk>>i&1) {
                if (cur[i] == '-') invalid = true;
                cur[i] = '+';
            }
            else {
                if (cur[i] == '+') invalid = true;
                cur[i] = '-';
            }
        }
        if (invalid) continue;
        tot++;
        int dist1 = 0, dist2 = 0;
        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] == '+') dist1++;
            else dist1--;
            if (cur[i] == '+') dist2++;
            else dist2--;
        }
        if (dist1 == dist2) ops++;
    }
    cout << fixed << setprecision(10) << 1.0*ops/tot << '\n';
    return 0;
}
