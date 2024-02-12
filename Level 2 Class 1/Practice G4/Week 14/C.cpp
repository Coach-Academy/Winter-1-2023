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
         int a,b;
         cin >> a >> b;
         if( b%a  == 0)
             cout << a << " " << b << endl;
         else
             cout << -1 << endl;
    }

    return 0;
}