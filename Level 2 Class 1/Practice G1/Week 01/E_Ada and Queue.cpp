// Problem Link: https://vjudge.net/contest/582907#problem/E

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
    bool is_reversed = false;
    deque < int > dq;
    auto push_front = [&](int x){
        if(is_reversed) dq.push_back(x);
        else dq.push_front(x);
    };
    auto push_back = [&](int x){
        if(is_reversed) dq.push_front(x);
        else dq.push_back(x);
    };
    auto back = [&](){
        if(dq.empty()) cout << "No job for Ada?\n";
        else if(is_reversed) cout << dq.front() << '\n', dq.pop_front();
        else cout << dq.back() << '\n', dq.pop_back();
    };
    auto front = [&](){
        if(dq.empty()) cout << "No job for Ada?\n";
        else if(is_reversed) cout << dq.back() << '\n', dq.pop_back();
        else cout << dq.front() << '\n', dq.pop_front();
    };
    auto reverse = [&](){
        is_reversed = !is_reversed;
    };
    while(n--){
        string type;
        int x;
        cin >> type;
        if(type == "back") back();
        if(type == "front") front();
        if(type == "reverse") reverse();
        if(type == "push_back") {
            cin >> x;
            push_back(x);
        }
        if(type == "toFront"){
            cin >> x;
            push_front(x);
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
