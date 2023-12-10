#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    string s;
    getline(cin,s);
    set<char>mySet;
    for (int i = 1; i < s.size(); i+=3) {
        mySet.insert(s[i]);
    }
    if (s.size()==2)cout<<0;
    else
    cout<<mySet.size();

    return 0;
}