#include <bits/stdc++.h>

using namespace std;

#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) + (m) - 1) / (m))
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define EPS 1e-9
constexpr int INF = 1 << 30, Mod = 1e9 + 7;
constexpr ll LINF = 1LL << 62;
#define PI acos(-1)
template < typename T = int > using Pair = pair < T, T >;
vector < string > RET = {"NO", "YES"};

template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}

template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) { 
    for (const T &x : v) out << x << ' '; 
    return out;
}

ll l, r;
vector < ll > luckies;

void build(ll curr){
    if(curr > r * 10) return;
    luckies.push_back(curr);
    // add 4 to the end of the current number
    build(curr * 10 + 4);
    // add 7 to the end of the current number
    build(curr * 10 + 7);
}

ll next(ll x){
    return *lower_bound(all(luckies), x);
}

void Solve(){
    cin >> l >> r;
    build(0);
    sort(all(luckies));
    ll ans = 0;
    while(l <= r){
        ll nxt = next(l);
        ans += nxt * (min(nxt, r) - l + 1);
        l = nxt + 1;
    }
    cout << ans << "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    // cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
        // cout << "Case " << tc << ": ";
        Solve();
    }
    return 0;
}