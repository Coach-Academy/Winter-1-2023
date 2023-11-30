#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string s,t;
    cin >>  s >> t;
    int final =0;
    for (int i = 0; i < s.size(); ++i) {
        final += ( s[i] == '+');
        final -= ( s[i] == '-');
    }
    int marks =0 , cur =0;
    for (int i = 0; i < t.size(); ++i) {
        cur += ( t[i] == '+');
        cur -= ( t[i] == '-');
        marks += ( t[i] == '?');
    }
    int cnt =0;
    for (int mask = 0; mask < ( 1<< marks); ++mask){

        int tmp = 0;
        for (int i = 0; i < marks; ++i) {
            if ( (1 << i) & mask)
                tmp ++;
            else
                 tmp--;
        }
        if ( cur + tmp == final)
            cnt++;
    }
    double ans = (1.0 * cnt) / (1.0 * ( 1<< marks));
    cout << fixed << setprecision(9) << ans << endl;
    return 0;
}
