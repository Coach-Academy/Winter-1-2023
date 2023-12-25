#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int n,s,d;
const int N=1e5+5;
int a[N],b[N];


int f(int i) {
    if (i == n) return 0;
    return (a[i]*b[i])+f(i+1);
}
int main() {
    TEKA
    cin >> n ;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n; ++i) cin >> b[i];
    (f(0)==0) ? cout << "Yes" : cout << "No";
    return 0;
}
