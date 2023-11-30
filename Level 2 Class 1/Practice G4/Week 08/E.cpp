#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    ll ans = 1e17;
    for (int mask = 0; mask < (1 << 10); ++mask) {

        ll num =0, ones=0 , zeros=0;
        for (int i = 0; i < 10; ++i) {
            num*=10;
            if ( (1 << i) & mask)
                num+=7 , ones++;
            else num += 4 ,zeros++;


            if( num >= n && zeros == ones)
            {
                ans = min( ans, num);
            }
        }
    }
    cout << ans << endl;
    return 0;
}
