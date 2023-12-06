#include <bits/stdc++.h>

using namespace std;

using ll = long long;

const int mod = 1e9+7;
int main() {
    int n, k; cin >> n >> k;
    vector <int> fs;
    for (int i = 2; i*i <= n; i++) {
        while(n%i == 0) {
            fs.push_back(i);
            n/=i;
        }
    }
    if (n > 1) fs.push_back(n);
    if (fs.size() < k) cout << -1;
    else {
        while(fs.size() > k) fs[fs.size()-2]*=fs.back(), fs.pop_back();
        for (auto &i : fs) cout << i <<  ' ';
    }
    return 0;
}
