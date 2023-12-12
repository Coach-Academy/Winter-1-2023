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
    while (t--)
    {
        int n;
        cin >> n;
        int idx =0;
        int a[n][5];
        for (int i = 0; i < n; ++i) {
            int cnt =0;
            for (int j = 0; j < 5; ++j) {
                cin >> a[i][j];
                if ( a[idx][j] > a[i][j])
                    cnt++;
            }
            if ( cnt >= 3)
            {
                idx = i;
            }
        }

        for (int i = 0; i < n; ++i) {
            if ( idx == i)
                continue;
            int cnt =0;
            for (int j = 0; j < 5; ++j) {
                if( a[idx][j] > a[i][j])
                    cnt++;
            }
            if (cnt >= 3)
            {
                idx = -1;
                break;
            }
        }
        if ( idx == -1)
            cout << -1 << endl;
        else
            cout << idx+1 << endl;

    }

    return 0;
}