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

constexpr int N = 5e5 + 5;

struct Customer {
    int id, money;
    Customer(int ID = 0, int M = 0) : id(ID), money(M) {}
    bool operator < (const Customer& rhs) const {
        return money < rhs.money || (money == rhs.money && id > rhs.id);
    }
};

void Solve(){
    int q;
    cin >> q;
    queue < Customer > monocarp;
    priority_queue < Customer > polycarp;
    vector < bool > served(N);
    int customer_id = 1;
    while(q--){
        int type, m;
        cin >> type;
        if(type == 1){
            cin >> m;
            monocarp.push(Customer(customer_id, m));
            polycarp.push(Customer(customer_id, m));
            customer_id++;
        }
        if(type == 2){
            // remove served customers
            while(served[monocarp.front().id]) monocarp.pop();
            // serve the first customer
            Customer to_serve = monocarp.front();
            monocarp.pop();
            served[to_serve.id] = true;
            cout << to_serve.id << ' ';
        }
        if(type == 3){
            // remove served customers
            while(served[polycarp.top().id]) polycarp.pop();
            // serve the first customer
            Customer to_serve = polycarp.top();
            polycarp.pop();
            served[to_serve.id] = true;
            cout << to_serve.id << ' ';
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