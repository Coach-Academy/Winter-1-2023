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

struct Element {
    ll sum, l, r;
    Element(ll S = 0, ll L = 0, ll R = 0){
        sum = S, l = L, r = R;
    }
    bool operator < (const Element& rhs) const {
        return sum > rhs.sum || (sum == rhs.sum && l < rhs.l) || (sum == rhs.sum && l == rhs.l && r < rhs.r);
    }
};

void Solve(){
    int n, k;
    cin >> n >> k;
    vector < ll > a(n);
    ll Sum = 0;
    for(auto& x : a){
        cin >> x;
        Sum += x;
    }
    set < Element > st;
    st.emplace(Sum, 0, n - 1);
    while(k--){
        auto [sum, l, r] = *st.begin();
        st.erase(st.begin());
        cout << sum << " ";
        if(l != r){
            st.emplace(sum - a[l], l + 1, r);
            st.emplace(sum - a[r], l, r - 1);
        }
    }
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