#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int a , b;
    cin >> a >> b;
    int g  = __gcd(a,b);
    set<int> st;
    for (int i = 1; i*i <= g ; ++i) {
        if ( g%i == 0)
        {
            st.insert(i);
            st.insert(g/i);
        }
    }
    int n;
    cin >> n;
    while (n--)
    {
        int l , r;
        cin >> l >> r;
        auto it = st.upper_bound(r);
        if ( it ==  st.begin())
            cout << -1  << endl;
        else
        {
            it--;
            if ( *it >= l)
                cout << *it << endl;
            else
                cout << -1 << endl;
        }
    }

    return 0;
}