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
    priority_queue < int, vector < int >, greater < int > > pq;
    vector < string > operation;
    for(int i = 0; i < n; i++){
        string type;
        int x;
        cin >> type;
        if(type == "insert"){
            cin >> x;
            pq.push(x);
            operation.push_back(type + " " + to_string(x));
        }else if(type == "removeMin"){
            if(pq.empty())
                operation.push_back("insert 0"), pq.push(0);
            operation.push_back(type);
            pq.pop();
        }else {
            cin >> x;
            while(!pq.empty() && pq.top() < x)
                operation.push_back("removeMin"), pq.pop();
            if(pq.empty() || pq.top() > x){
                operation.push_back("insert " + to_string(x));
                pq.push(x);
            }
            operation.push_back(type + " " + to_string(x));
        }
    }
    cout << sz(operation) << "\n";
    for(auto& op : operation)
        cout << op << "\n";
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