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
    string s;
    cin >> n >> s;
    if(s[0] != '?'){
        for(int i = 0; i < n; i++)
            if(s[i] == '?')
                s[i] = (s[i - 1] == 'B' ? 'R' : 'B');
        cout << s << '\n';
    }else {
        string s1 = s, s2 = s;
        int imp1 = 0, imp2 = 0;
        s1[0] = 'B', s2[0] = 'R';
        for(int i = 1; i < n; i++){
            if(s1[i] == '?'){
                s1[i] = (s1[i - 1] == 'B' ? 'R' : 'B');
                s2[i] = (s2[i - 1] == 'B' ? 'R' : 'B');
            }
            if(s1[i] == s1[i - 1]) imp1++;
            if(s2[i] == s2[i - 1]) imp2++;
        }
        cout << (imp1 < imp2 ? s1 : s2) << '\n';
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