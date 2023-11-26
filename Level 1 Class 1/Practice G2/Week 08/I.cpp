#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> v1(n), v2(n + 2), v3;
        for (int i = 0; i < n; ++i) {
            cin >> v1[i];
            v2[v1[i]] = i;
        }
        int r = n;
        for (int i = n; i >= 0; i--) {
            if (v2[i] >= r)continue;
            for (int j = v2[i]; j < r; ++j) {
                v3.push_back(v1[j]);
            }
            r=v2[i];
        }
        for(int it:v3)cout<<it<<" ";
        cout<<"\n";
    }

    return 0;
}