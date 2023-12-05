#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int N = 1e6+1;
int pref[11][N];
void pre() {
    for (int i = 1; i < N; i++) {
        int cur = i, cnt = 0;
        for (int j = 2; j*j <= cur; j++) {
            if (cur%j) continue;
            cnt++;
            while(cur%j == 0) cur/=j;
        }
        if (cur > 1) cnt++;
        pref[cnt][i]++;
    }
    for (int i = 0; i <= 10; i++) {
        for (int j = 1; j < N; j++) {
            pref[i][j]+=pref[i][j-1];
        }
    }
}

int main() {
    pre();
    int t; cin >> t;
    while(t--) {
        int a, b, n; cin >> a >> b >> n;
        cout << pref[n][b]-pref[n][a-1] << '\n';
    }
    return 0;
}
