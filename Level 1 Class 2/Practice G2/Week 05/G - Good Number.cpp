#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        string x;
        cin >> x;
        for (char j = '0'; j <= char(k + '0'); ++j) {
            if (x.find(j) == -1) {
                ans--;
                break;
            }
        }
        ans++;
    }
    cout << ans << endl;
}
