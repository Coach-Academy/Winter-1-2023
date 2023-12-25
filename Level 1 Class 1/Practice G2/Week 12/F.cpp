#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,s,d;
const int N=101;
int x[N],y[N];


bool f(int i) {
    if (i == n) return 0;
    if (x[i] < s && y[i] > d)return 1;
    return f(i + 1);
}
int main() {
    TEKA
    cin >> n >> s >> d;
    for (int i = 0; i < n; ++i) cin >> x[i] >> y[i];
    (f(0)) ? cout << "Yes" : cout << "No";
    return 0;
}
