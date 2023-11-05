#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.size();
    for (int i = n/2; i < n-1; ++i) {
        cout<<s[i]<< "+";
    }
    cout<<s[n-1];

    return 0;
}
/*
 1+1+3+1+3
 012345678
 ++++11133
 */
