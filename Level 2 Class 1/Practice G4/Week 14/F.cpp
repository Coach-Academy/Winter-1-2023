#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
   int t;
   cin >> t;
    while (t--) {
        int l,r;
        cin >> l >> r;
        if ( l*2 <= r)
            cout  << l << " " << l*2 << endl;
        else
            cout << -1 << " " << -1 <<endl;
    }
    return 0;
}