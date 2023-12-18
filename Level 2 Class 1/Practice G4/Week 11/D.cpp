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
    while(t--)
    {
         int n;
         cin >> n;
         int a[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int x = a[0];
        for (int i = 0; i < n; ++i) {
            x &= a[i];
        }
        cout << x << endl;

    }

    return 0;
}