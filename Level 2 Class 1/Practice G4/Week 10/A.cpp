#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int c1 = (n/3) + (n%3 == 1);
        int c2 = (n/3) + (n%3 == 2);
        cout << c1 << " " << c2 << endl;
    }

    return 0;
}