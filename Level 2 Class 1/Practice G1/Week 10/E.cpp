#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork()
{
    int n;
    cin >> n;
    ll sum =0;
    for (int i = 0,x; i < n; ++i) {
        cin >> x;
        sum += x;
    }
    ll rem = sum%n;
    cout << rem * ( n-rem) << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        doWork();
    }

    return 0;
}