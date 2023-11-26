#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    vector<int> ans;
    for (int i = 1; i < n; ++i) {
        if (arr[i] <= arr[i - 1]) {
            ans.push_back(arr[i - 1]);
        }
    }
    ans.push_back(arr[n - 1]);
    cout << ans.size() << "\n";
    for (int it: ans)cout << it << " ";

    return 0;
}

