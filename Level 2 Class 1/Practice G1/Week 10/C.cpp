#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork()
{
    int n;
    cin >> n;
    int winner = 0;
    int a[n][5];
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < 5; ++j) {
            cin >> a[i][j];
            if ( a[winner][j] > a[i][j])
                cnt++;
        }
        if ( cnt >= 3 )
        {
            winner = i;
        }
    }
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < 5; ++j) {
            if ( a[winner][j] > a[i][j])
                cnt++;
        }
        if ( cnt >= 3 )
        {
            winner = -1;
            break;
        }
    }
    if ( winner == -1)
        cout << -1 << endl;
    else
        cout << winner+1 << endl;
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