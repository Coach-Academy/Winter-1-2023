#include <iostream>

using namespace std;

int main() {
    long long n, x, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> x;
    long long ans = (x / sum) * n;
    x -= (x / sum) * sum;
    for (int i = 0; i < n and x >= 0; ++i) {
        x -= arr[i];
        ans++;
    }
    cout << ans << endl;
}
