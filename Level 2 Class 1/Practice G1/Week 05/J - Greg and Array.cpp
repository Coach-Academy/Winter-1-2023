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
    int n, m, k;
    cin >> n >> m >> k;
    vector < ll > a(n + 5), number_of_operations(m + 5), partial(n + 5);
    for(int i = 1; i <= n; i++) 
        cin >> a[i];
    vector < vector < ll > > operations(m + 5, vector < ll > (3));
    for(int i = 1; i <= m; i++)
        for(int j = 0; j < 3; j++)
            cin >> operations[i][j];
    for(int i = 1; i <= k; i++){
        int x, y;
        cin >> x >> y;
        number_of_operations[x]++;
        number_of_operations[y + 1]--;
    }
    for(int i = 1; i <= m; i++)
        number_of_operations[i] += number_of_operations[i - 1];
    for(int i = 1; i <= m; i++){
        ll l = operations[i][0], r = operations[i][1], d = operations[i][2];
        partial[l] += d * number_of_operations[i];
        partial[r + 1] -= d * number_of_operations[i];
    }
    for(int i = 1; i <= n; i++)
        partial[i] += partial[i - 1];
    for(int i = 1; i <= n; i++)
        cout << a[i] + partial[i] << " \n"[i == n];
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