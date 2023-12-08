#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
// generate primes
const int N = 2e5+7;
vector<int> primes  ;
vector <bool> prime(N,1);
void pre()
{
    prime[0] = prime[1] = 0;
    for (int i = 2; i <N; ++i) {
       if ( prime[i])
       {
           primes.push_back(i);
           for (ll j = 1ll*i*i; j < N; j+=i) {
               prime[j] = 0;
           }
       }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    pre();
    int n,m;
    cin >>  n >> m;
    int a[n][m];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
            int nxt = *lower_bound(primes.begin(), primes.end(), a[i][j]);
            a[i][j] = nxt  - a[i][j];
        }
    }
    int ans = 1e8;
    for (int i = 0; i < n; ++i) {
        int sum =0;
        for (int j = 0; j < m; ++j) {
            sum += a[i][j];
        }
        ans = min( ans, sum);
    }

    for (int j = 0; j < m; ++j) {
        int sum = 0 ;
        for (int i = 0; i < n; ++i) {
               sum += a[i][j];
        }
        ans  = min( ans, sum);
    }

    cout << ans << endl;
    return 0;
}