#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n; cin >> n;
    int on = n;
    vector <int> a;
    while(n--) {
        int x; cin >> x;
        if (!a.empty() && a.back() == x) continue;
        a.push_back(x);
    }
    n = (int)a.size();
    vector <vector <int>> pos(on+1);
    for (int i = 0; i < n; i++) {
        pos[a[i]].push_back(i);
    }
    vector <int> nxt(n, n);
    for (int i = 0; i <= on; i++) {
        for (int j = 1; j < pos[i].size(); j++) {
            nxt[pos[i][j-1]] = pos[i][j];
        }
    }
    int ans = 0, lst1 = -1, lst2 = -1;
    for (int i = 0; i < n; i++) {
        if (lst1 == -1) {
            ans++, lst1 = i;
        }
        else if (a[lst1] == a[i]) {
            lst1 = i;
        }
        else if (lst2 == -1) {
            ans++, lst2 = i;
        }
        else if (a[lst2] == a[i]) {
            lst2 = i;
        }
        else if (nxt[lst1] < nxt[lst2]) {
            lst2 = i, ans++;
        }
        else {
            lst1 = i, ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
