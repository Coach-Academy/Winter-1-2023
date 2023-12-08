#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
const int N = 1e6+7;
vector <int> prime(N,1);
void pre() {
    for (int i = 2; i < N; ++i) {
        if (prime[i]) {
            for (ll j = 1ll * i * i; j < N; j += i) {
                prime[j] = 0;
            }
        }
    }

}
int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string s;
    pre();
    while (cin >> s)
    {
        int sum = 0;
        for (int i = 0; i < s.size(); ++i) {
            if ( s[i] >= 'a' && s[i]<='z')
            {
                sum += (s[i] - 'a' )+1;
            }
            else
            {
                sum += ( s[i] -'A') + 27;
            }
        }
        if ( prime[sum])
            cout << "It is a prime word.\n";
        else
            cout << "It is not a prime word.\n";
    }
    return 0;
}