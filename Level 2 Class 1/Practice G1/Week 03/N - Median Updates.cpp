// Problem url: https://vjudge.net/contest/585428#problem/N

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

template < typename T = int > struct Median_Picker {
    int size;
    multiset < T > left, right;
    Median_Picker() : size(0) {}

    void insert(T x){
        if(size & 1){
            if(x >= *right.begin()){
                left.insert(*right.begin());
                right.erase(right.begin());
                right.insert(x);
            }else {
                left.insert(x);
            }
        }else {
            if(size == 0) right.insert(x);
            else if(x <= *left.rbegin()){
                right.insert(*left.rbegin());
                left.erase(left.find(*left.rbegin()));
                left.insert(x);
            }else {
                right.insert(x);
            }
        }
        size++;
    }

    bool erase(T x){
        if(!left.count(x) && !right.count(x)) return false;
        if(size & 1){
            if(x >= *right.begin())
                right.erase(right.find(x));
            else {
                left.erase(left.find(x));
                left.insert(*right.begin());
                right.erase(right.begin());
            }
        }else {
            if(x <= *left.rbegin())
                left.erase(left.find(x));
            else {
                right.erase(right.find(x));
                right.insert(*left.rbegin());
                left.erase(left.find(*left.rbegin()));
            }
        }
        size--;
        return true;
    }

    string get_median(){
        if(size == 0) return "Wrong!";
        if(size & 1) return to_string(*right.begin());
        else {
            T sum = *left.rbegin() + *right.begin();
            bool is_half = (sum & 1);
            bool is_neg = (sum < 0);
            return (is_neg ? "-" : "") + to_string(abs(sum) / 2) + (is_half ? ".5" : "");
        }
    }
};

void Solve(){
    int q;
    cin >> q;
    Median_Picker < ll > mp;
    while(q--){
        char type;
        ll x;
        cin >> type >> x;
        if(type == 'a')
            mp.insert(x);
        if(type == 'r'){
            if(!mp.erase(x)){
                cout << "Wrong!\n";
                continue;
            }
        }
        cout << mp.get_median() << "\n";
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