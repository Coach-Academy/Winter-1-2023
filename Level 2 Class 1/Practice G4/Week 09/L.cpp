#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
//It is a prime word.
//It is not a prime word.
bool prime(int n)
{
    for (int i = 2; i*i <= n ; ++i) {
        if (n%i == 0)
            return 0;
    }
    return 1;
}
void solve()
{
    string s;
    while (cin >> s)
    {
      int sum =0;
        for (int i = 0; i < s.size(); ++i) {
            if ( s[i] >= 'a' && s[i] <= 'z')
            {
                sum += (s[i] - 'a')+1;
            }else
            {
                sum += ( s[i] -'A')+27;
            }
        }
       if (prime(sum))
           cout << "It is a prime word.\n";
       else
           cout << "It is not a prime word.\n";
    }
}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}