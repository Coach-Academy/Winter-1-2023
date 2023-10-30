#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    int n; cin >> n;
    vector <int> Xs(n);
    for (auto &x : Xs) cin >> x;
    sort(Xs.begin(), Xs.end());
    double st = 0, en = 1e9;
    double pos[3];
    for (int it = 0; it < 400; it++) {
        double mi = (st+en)/2;
        int i;
        for (i = 0; i < n; i++) {
            if (1.0*Xs.front()+2*mi < Xs[i]) break;
        }
        if (i == n) i--;
        int j;
        for (j = n-1; ~j; j--) {
            if (1.0*Xs.back()-2*mi > Xs[j]) break;
        }
        if (j == -1) j++;
        if (Xs[j]-Xs[i] > 2*mi) st = mi;
        else {
            en = mi;
            pos[0] = Xs.front()+mi;
            pos[1] = (Xs[j]+Xs[i])/2.0;
            pos[2] = Xs.back()-mi;
        }
    }
    cout << fixed << setprecision(6) << en << '\n';
    for (auto &i : pos) cout << i << ' ';
    return 0;
}
