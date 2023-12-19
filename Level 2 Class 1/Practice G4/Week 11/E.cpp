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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int m = std::count(s.begin(), s.end(), '?');
        if ( m == n)
        {
            for (int i = 0; i < n; ++i) {
                if (i%2)
                    cout << "B";
                else
                    cout << "R";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i < n; ++i) {
                if ( s[i] == '?' && s[i-1] != '?')
                {
                        if ( s[i-1] == 'B')
                            s[i] = 'R';
                        else
                            s[i] = 'B';
                }
            }
            for (int i = n-2; i >=0 ; --i) {
                if ( s[i] == '?' && s[i+1] != '?')
                {
                    if ( s[i+1] == 'B')
                        s[i] = 'R';
                    else
                        s[i] = 'B';
                }
            }
            cout << s << endl;
        }

    }

    return 0;
}