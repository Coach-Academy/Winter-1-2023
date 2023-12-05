#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int cnt =0;
    for (int i = 1; i <= n; ++i) {

        set<int> st;
        int x = i;
        for (int j = 2; j*j <= x ; ++j) {
            while (x%j == 0)
            {
                x/=j;
                st.insert(j);
            }
        }
        if ( x >  1)
            st.insert(x);
        if ( st.size() == 2)
            cnt++;

    }
    cout << cnt ;

    return 0;
}
