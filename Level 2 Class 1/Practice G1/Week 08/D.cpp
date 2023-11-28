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

void Solve(){
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector < int > v(n);
    cin >> v;
    auto is_valid = [&](const vector < int >& subset){
        int sum = 0, mx = -INF, mn = INF;
        for(auto& i : subset)
            sum += i, mx = max(mx, i), mn = min(mn, i);
        return (sum >= l && sum <= r && mx - mn >= x && sz(subset) >= 2);
    };
    int cnt_ways = 0;
    for(int mask = 0; mask < (1 << n); mask++){
        vector < int > curr_subset;
        for(int i = 0; i < n; i++)
            if((mask >> i) & 1)
                curr_subset.push_back(v[i]);
        cnt_ways += is_valid(curr_subset);
    }
    cout << cnt_ways << '\n';
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    // cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
        // cout << "Case #" << tc << ": ";
        Solve();
    }
    return 0;
}