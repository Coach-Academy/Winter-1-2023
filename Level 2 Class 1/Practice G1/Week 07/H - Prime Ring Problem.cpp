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

int n;
vector < int > curr, is_picked, primes;
vector < vector < int > > ans;

bool is_prime(int x){
    if(x < 2) return false;
    for(int i = 2; i <= sqrt(x); i++)
        if(x % i == 0) 
            return false;
    return true;
}

void build(){
    if(sz(curr) == n){
        if(!primes[curr.back() + 1]) return;
        ans.push_back(curr);
        return;
    }
    for(int i = 1; i <= n; i++){
        if(is_picked[i]) continue;
        if(!primes[curr.back() + i]) continue;
        is_picked[i] = 1;
        curr.push_back(i);
        build();
        curr.pop_back();
        is_picked[i] = 0;
    }
}

void Solve(const vector < int >& ns){
    for(int nn = 0; nn < sz(ns); nn++){
        n = ns[nn];
        ans.clear();
        curr.clear();
        is_picked = vector < int > (n + 5, 0);
        is_picked[1] = 1;
        curr.push_back(1);
        build();
        curr.pop_back();
        is_picked[1] = 0;
        cout << "Case " << nn + 1 << ":\n";
        for(auto &vec : ans){
            for(int i = 0; i < sz(vec); i++)
                cout << vec[i] << " \n"[i == sz(vec) - 1];
        }
        if(nn != sz(ns) - 1)
            cout << '\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    primes = vector < int > (51, 0);
    for(int i = 1; i <= 50; i++)
        primes[i] = is_prime(i);
    vector < int > v;
    while(cin >> n)
        v.push_back(n);
    Solve(v);
    return 0;
}