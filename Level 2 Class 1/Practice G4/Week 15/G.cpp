#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,m;
    cin >> n  >> m;
    vector<int> baskets;
    int mid = (m+1)/2;
    baskets.push_back(mid);
    if (m%2 == 0)
    {
        int cnt = 1;
        for (int i = 1; i < m; ++i) {
            baskets.push_back(mid + cnt);
            if ( cnt  > 0)
                cnt = -cnt;
            else
                cnt = -cnt + 1;
        }
    }
    else
    {
        int cnt = -1;
        for (int i = 1; i < m; ++i) {
            baskets.push_back(mid + cnt);
            if ( cnt  < 0)
                cnt = -cnt;
            else
                cnt = -cnt -1;
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << baskets[i%m] << endl;
    }
    return 0;
}