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

int n, m;
vector < vector < int > > grid;

bool is_upper_left(int i, int j){
    bool is_valid = (grid[i][j] == 1);
    is_valid &= (j + 1 < m && grid[i][j + 1] == 1);
    is_valid &= (i + 1 < n && grid[i + 1][j] == 1);
    is_valid &= (i + 1 < n && j + 1 < m && grid[i + 1][j + 1] == 1);
    return is_valid;
}

bool is_upper_right(int i, int j){
    bool is_valid = (grid[i][j] == 1);
    is_valid &= (j - 1 >= 0 && grid[i][j - 1] == 1);
    is_valid &= (i + 1 < n && grid[i + 1][j] == 1);
    is_valid &= (i + 1 < n && j - 1 >= 0 && grid[i + 1][j - 1] == 1);
    return is_valid;
}

bool is_lower_left(int i, int j){
    bool is_valid = (grid[i][j] == 1);
    is_valid &= (j + 1 < m && grid[i][j + 1] == 1);
    is_valid &= (i - 1 >= 0 && grid[i - 1][j] == 1);
    is_valid &= (i - 1 >= 0 && j + 1 < m && grid[i - 1][j + 1] == 1);
    return is_valid;
}

bool is_lower_right(int i, int j){
    bool is_valid = (grid[i][j] == 1);
    is_valid &= (j - 1 >= 0 && grid[i][j - 1] == 1);
    is_valid &= (i - 1 >= 0 && grid[i - 1][j] == 1);
    is_valid &= (i - 1 >= 0 && j - 1 >= 0 && grid[i - 1][j - 1] == 1);
    return is_valid;
}

void Solve(){
    cin >> n >> m;
    grid = vector < vector < int > > (n, vector < int > (m));
    cin >> grid;
    vector < pair < int, int > > operations;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            if(grid[i][j] == 0) continue;
            if(!is_upper_left(i, j) && !is_upper_right(i, j) && !is_lower_left(i, j) && !is_lower_right(i, j))
                return cout << -1 << '\n', void();
            if(is_upper_left(i, j))
                operations.push_back({i, j});
        }
    cout << sz(operations) << '\n';
    for(auto& [x, y] : operations)
        cout << x + 1 << ' ' << y + 1 << '\n';
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