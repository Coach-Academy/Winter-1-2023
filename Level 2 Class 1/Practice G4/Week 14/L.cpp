#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 2e5+7, mod = 1e9+7;


int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        vector<int> v={1};
        cin >> n;
        for (int i = 2; i*i <= n ; ++i) {
            if ( n%i ==0 )
                v.push_back(i), v.push_back(n/i);
        }
        sort(v.begin(),  v.end());
        cout << v.back() << " " << n - v.back() << endl;
    }
    return 0;
}