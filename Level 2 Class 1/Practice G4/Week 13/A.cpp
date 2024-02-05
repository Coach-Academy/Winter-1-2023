#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
void doWork()
{
    int n;
    cin >> n;
    int f[100] = {};
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        f[x]++;
    }
    for (int i = 0; i < 100; ++i) {
        cout << f[i] << " ";
    }
    cout << endl;
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t=1;
    //cin >> t;
    while (t--)
    {
        doWork();
    }
    return 0;
}