#include <bits/stdc++.h>
using namespace std;
#define TEKA ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);

string s;


void f (int i){
    if (i == s.size()) return;
    if (s[i]=='.') return;
    cout<<s[i];
    f(i+1);
}

int main()
{
    TEKA
    cin>>s;
    f(0);

    return 0;
}
