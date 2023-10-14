#include <iostream>

using namespace std;

int main() {
    int n;
    int test = 1;
    while (cin >> n and n > 0) {
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
            sum += arr[i];
        }
        int ans = 0, avg = sum / n;
        for (int i = 0; i < n; ++i) {
            if (arr[i] > avg)
                ans += (arr[i] - avg);
        }
        cout << "Set #" << test++ << endl;
        cout << "The minimum number of moves is " << ans << '.' << endl;
        cout << endl;
    }
}
