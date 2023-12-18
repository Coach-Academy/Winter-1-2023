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
        int cnt = 0;
        for (int i = 1; i <=9; ++i) {
            ll cur = i;
            while (cur <= n)
            {
                cnt++;
                cur *= 10;
                cur +=i;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}