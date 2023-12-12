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
    while (t--){
        int n,a,b;
        cin >> n >> a >> b;
        if ( a == 1)
        {
            if ((n-1)%b == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        else
        {
            ll x = 1;
            while (x <= n)
            {
                if ( (n-x)%b == 0)
                {
                    cout << "Yes\n";
                    break;
                }
                else
                    x*=a;
            }
            if ( x > n)
                cout << "No\n";
        }
    }

    return 0;
}