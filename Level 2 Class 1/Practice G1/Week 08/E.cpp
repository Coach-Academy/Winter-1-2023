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

ll get_minimum_lucky(int number_of_digits){
    number_of_digits = (number_of_digits + 1) / 2;
    ll super_lucky = 0;
    for(int i = 0; i < number_of_digits; i++)
        super_lucky = super_lucky * 10 + 4;
    for(int i = 0; i < number_of_digits; i++)
        super_lucky = super_lucky * 10 + 7;
    return super_lucky;
}

void Solve(){
    string num;
    cin >> num;
    int digits = sz(num);
    if(digits & 1)
        return cout << get_minimum_lucky(digits) << '\n', void();
    ll super_lucky = LINF;
    for(int mask = 0; mask < (1 << digits); mask++){
        ll curr_lucky = 0, diff_cnt = 0;
        for(int i = 0; i < digits; i++)
            if((mask >> i) & 1)
                curr_lucky = curr_lucky * 10 + 7, diff_cnt++;
            else
                curr_lucky = curr_lucky * 10 + 4, diff_cnt--;
        if(!diff_cnt && curr_lucky >= stoll(num))
            super_lucky = min(super_lucky, curr_lucky);
    }
    if(super_lucky == LINF)
        super_lucky = get_minimum_lucky(digits + 2);
    cout << super_lucky << '\n';
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