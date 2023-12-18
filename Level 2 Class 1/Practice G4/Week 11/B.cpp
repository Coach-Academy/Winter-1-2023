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
         int l ,r ;
         cin >> l >> r;
         int b = r/2 +1;
         if ( b >= l)
             cout << r % b << endl;
         else
             cout << r%l << endl;

    }

    return 0;
}