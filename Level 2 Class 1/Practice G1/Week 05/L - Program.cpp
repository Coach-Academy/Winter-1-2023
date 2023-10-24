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
    int n, q;
    cin >> n >> q;
    vector < int > sum(n + 5), maxL(n + 5), maxR(n + 5), minL(n + 5), minR(n + 5);
    for(int i = 1; i <= n; i++){
        char c;
        cin >> c;
        sum[i] = sum[i - 1] + (c == '+' ? 1 : -1);
    }
    for(int i = 1; i <= n; i++){
        maxL[i] = max(maxL[i - 1], sum[i]);
        minL[i] = min(minL[i - 1], sum[i]);
    }
    maxR[n + 1] = minR[n + 1] = sum[n];
    for(int i = n; i >= 1; i--){
        maxR[i] = max(maxR[i + 1], sum[i]);
        minR[i] = min(minR[i + 1], sum[i]);
    }
    while(q--){
        int l, r;
        cin >> l >> r;
        int mn_left = minL[l - 1], mx_left = maxL[l - 1];
        int mn_right = minR[r + 1], mx_right = maxR[r + 1];
        int seg_sum = sum[r] - sum[l - 1];
        mn_right -= seg_sum, mx_right -= seg_sum;
        int mx = max(mx_left, mx_right);
        int mn = min(mn_left, mn_right);
        int distinct = mx - mn + 1;
        cout << distinct << "\n";
    }
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