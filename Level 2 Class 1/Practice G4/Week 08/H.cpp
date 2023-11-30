#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    ll sum =0;
    string s;
    cin >> s;
    int n  = s.size() -1;
    for (int mask = 0; mask < (1 << (n)); ++mask) {
        ll num = 0;
        for (int i = 0; i < s.size(); ++i) {
            num*=10;
            num+= (s[i] -'0');
            if ((1 << i) & mask)
            {
                sum += num;
                num = 0;
            }
        }
        sum += num;
    }
    cout << sum << endl;
    return 0;
}
