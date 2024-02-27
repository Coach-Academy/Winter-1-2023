#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+2;
vector<int> f(N);
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,k,q;
    cin >> n >> k >> q;
    for (int i = 0; i < n; ++i) {
        int l , r;
        cin  >> l >> r;
        f[l]++;
        f[r+1]--;
    }
    for (int i = 1; i <= 2e5; ++i) {
        f[i] += f[i-1];
    }
    for (int i = 1; i <= 2e5 ; ++i) {
        if ( f[i] >= k)
            f[i] = 1;
        else
            f[i] =0;
        f[i] += f[i-1];
    }
    while (q--)
    {
        int a , b;
        cin >> a  >> b;
        cout << f[b] - f[a-1] << endl;
    }
    return 0;
}