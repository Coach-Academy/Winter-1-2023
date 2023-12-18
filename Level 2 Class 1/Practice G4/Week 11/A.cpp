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
        int k;
        cin >> k;
        int cnt =0;
        for (int i = 1;; ++i) {
            if ( i%3 == 0)
                continue;
            if( i%10 == 3)
                continue;
            cnt++;
            if ( cnt == k)
            {
                cout << i << endl;
                break;
            }
        }

    }

    return 0;
}