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

int k, n;
vector < int > a, curr;
set < vector < int >, greater < vector < int > > > ans;

void build(int idx, int remain){
    if(idx == n){
        if(remain == 0)
            ans.insert(curr);
        return;
    }
    // skip -> (leave)
    build(idx + 1, remain);

    // pick -> (take)
    curr.push_back(a[idx]);
    build(idx + 1, remain - a[idx]);
    curr.pop_back();
}

string vtos(const vector < int >& v){
    string ret = to_string(v[0]);
    for(int i = 1; i < sz(v); i++)
        ret += "+" + to_string(v[i]);
    return ret;
}

void Solve(){
    ans.clear();
    cout << "Sums of " << k << ":\n";
    a = vector < int > (n);
    cin >> a;
    sort(rall(a));
    build(0, k);
    if(ans.empty())
        cout << "NONE\n";
    for(auto& vec : ans)
        cout << vtos(vec) << "\n";
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    while(cin >> k >> n && k && n)
        Solve();
    return 0;
}