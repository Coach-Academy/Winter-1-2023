#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int n;
bool isPrime[32], used[17];
vector <int> perm;
void go(int idx = 0)
{
    if (idx == n) {
        if (isPrime[perm.back()+perm.front()]) {
            cout << perm[0];
            for (int i = 1; i < n; i++) cout << ' ' << perm[i];
            cout << '\n';
        }
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (i > 1 && idx == 0) continue;
        if (!used[i]) {
            used[i] = true;
            perm.push_back(i);
            if (idx == 0 || isPrime[perm[idx]+perm[idx-1]]) go(idx+1);
            used[i] = false;
            perm.pop_back();
        }
    }
}

int main() {
    isPrime[2] = true;
    isPrime[3] = true;
    isPrime[5] = true;
    isPrime[7] = true;
    isPrime[11] = true;
    isPrime[13] = true;
    isPrime[17] = true;
    isPrime[19] = true;
    isPrime[23] = true;
    isPrime[29] = true;
    isPrime[31] = true;

    int tc = 1;
    while(cin >> n) {
        if (tc > 1) cout << '\n';
        cout << "Case "<< tc++ << ":\n";
        go();
    }
    return 0;
}
