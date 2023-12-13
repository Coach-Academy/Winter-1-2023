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
        int o =0, e =0;
        for (int i = 0; i < 2*n; ++i) {
            int x ;
            cin >> x;
            if ( x%2)
                o++;
            else
                e++;
        }
        if ( e == o)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}