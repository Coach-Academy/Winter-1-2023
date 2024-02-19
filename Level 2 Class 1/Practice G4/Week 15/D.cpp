#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    string a , b;
    cin >> a >> b;
    while (a.size() && b.size())
    {
        if ( a.back() == b.back())
            a.pop_back() , b.pop_back();
        else
            break;
    }
    cout << a.size()+b.size() << endl;

    return 0;
}