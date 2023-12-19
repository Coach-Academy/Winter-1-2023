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
    int n, m;
    cin >> n >> m;
    vector < ll > a(n);
    vector < pair < ll, int > > to_search;
    ll total_sum = 0, mx_sum = -LINF;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        total_sum += a[i];
        mx_sum = max(mx_sum, total_sum);
        if(to_search.empty() || to_search.back().first < total_sum)
            to_search.emplace_back(total_sum, i);
    }
    while(m--){
        ll x, total_time = 0;
        cin >> x;
        if(mx_sum <= 0){
            cout << -1 << " ";
            continue;
        }
        if(x > mx_sum){
            ll cycles = ceil(x - mx_sum, total_sum);
            total_time += cycles * n;
            x -= cycles * total_sum;
        }
        auto it = lower_bound(all(to_search), make_pair(x, 0));
        cout << total_time + it -> second << " ";
    }
    cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int test_cases = 1;
    cin >> test_cases;
    for(int tc = 1; tc <= test_cases; tc++){
        // cout << "Case #" << tc << ": ";
        Solve();
    }
    return 0;
}