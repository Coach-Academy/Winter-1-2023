#include <bits/stdc++.h>
using namespace std;
#define TEKA  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ll long

int main() {
    TEKA
    string s,t;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    (s==t)?cout<<"YES\n":cout<<"NO\n";
    return 0;
}