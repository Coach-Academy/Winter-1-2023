#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[n] , x =0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        x ^= a[i];
    }
    for (int i = 0; i < n; ++i) {
        cout << (a[i] ^x) << " ";
    }


    return 0;
}
