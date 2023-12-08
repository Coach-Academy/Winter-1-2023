#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
// generate primes
const int N = 1e6+7;
vector <int> prime(N,0);
vector<int> k[11];
void pre()
{
    prime[0] = prime[1] = 0;
    for (int i = 2; i <N; ++i) {
       if ( prime[i] == 0)
       {
           for (int j = i; j < N; j+=i) {
               prime[j]++;
           }
       }
    }


    for (int i = 1; i < N; ++i) {
        k[prime[i]].push_back(i);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    pre();
    int q;
    cin >> q;
    while (q--)
    {
        int l , r , n;
        cin >> l >> r >> n;
        // k[n]
        int idxr = upper_bound(k[n].begin(),  k[n].end(),r)-k[n].begin() - 1;
        int idxl = lower_bound(k[n].begin(),  k[n].end(),l) - k[n].begin();
        int len = idxr - idxl + 1;
        cout << len << endl;
    }
    return 0;
}