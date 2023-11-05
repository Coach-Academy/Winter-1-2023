#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    for (int i = 0; i < n; ++i) {
        int a, b;
        cin >> a >> b;
        int opA = 7 - a, opB = 7 - b;
        int arr[] = {a, b, opA, opB};
        if (count(arr, arr + 4, x) > 0) {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
}
