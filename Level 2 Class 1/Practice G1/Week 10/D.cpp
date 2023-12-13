#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

void doWork()
{
    int n,a,b;
    cin >> n >> a>> b;
    ll x = 1;
    if ( a == 1)
    {
        if ( (n-1)%b == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    else
    {
        while (x <= n)
        {
            int rem = n-x;
            if ( rem %b ==0)
            {
                cout << "Yes\n";
                return;
            }
            x *= a;
        }
        cout << "No\n";
    }
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