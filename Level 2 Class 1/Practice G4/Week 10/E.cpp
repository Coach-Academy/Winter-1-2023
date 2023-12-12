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
    while (t--){
        int n;
        cin >> n;
        ll sum =0;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            sum += x;
        }
        ll rem = sum%n;
        cout << rem * ( n-rem) << endl;
    }

    return 0;
}