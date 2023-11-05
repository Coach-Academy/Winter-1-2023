#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA

    ll n, x, sum=0;
    cin >> n;
    ll arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> x;
    ll ans = x / sum;
    x -= (sum * ans);
    ans*=n;

    for (int i = 0; x >= 0; i++) {
        x -= arr[i];
        ans++;
    }
    cout << ans;

    return 0;
}