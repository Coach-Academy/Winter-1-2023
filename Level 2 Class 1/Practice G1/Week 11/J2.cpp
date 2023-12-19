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
    int n;
    cin >> n;
    vector < ll > a(n), prefix(n), idx(n), winners;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        idx[i] = i;
    }
    sort(idx.begin(), idx.end(), [&](int i, int j){
        return a[i] < a[j];
    });
    prefix[0] = a[idx[0]];
    for(int i = 1; i < n; i++)
        prefix[i] = prefix[i - 1] + a[idx[i]];
    
    winners.push_back(idx[n - 1] + 1);

    for(int i = n - 2; i >= 0; i--){
        if(prefix[i] >= a[idx[i + 1]])
            winners.push_back(idx[i] + 1);
        else
            break;
    }

    sort(all(winners));
    cout << sz(winners) << '\n';
    for(int i = 0; i < sz(winners); i++)
        cout << winners[i] << " \n"[i == sz(winners) - 1];
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