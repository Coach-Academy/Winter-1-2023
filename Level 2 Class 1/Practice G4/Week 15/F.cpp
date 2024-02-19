#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n,s,t;
    cin >> n>> s >> t;
    int cnt =0;
    int a[n+1];
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    int start = s;
    while (s != t)
    {
        cnt++;
        s = a[s];
        if ( s == start)
            break;
    }
    if (s == t)
        cout << cnt ;
    else
        cout << -1 ;
    return 0;
}