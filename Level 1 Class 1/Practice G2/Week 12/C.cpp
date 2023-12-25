#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll to_int(string s) {
    ll num = 0;
    for (int i = 0; i < s.size(); ++i) {
        num += s[i] - '0';
    }
    return num;
}

int f(ll n) {
    if (n < 10)return n;
    ll sum = 0;
    ll tmp = n;
    while (tmp) {
        sum += tmp % 10;
        tmp /= 10;
    }
    return f(sum);
}

int main() {
    TEKA
    int k;
    string s;
    cin >> s >> k;
    ll n = to_int(s) * k;
    cout << f(n);
    return 0;
}

