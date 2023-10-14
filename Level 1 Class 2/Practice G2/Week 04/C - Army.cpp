#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n - 1; ++i) {
        cin >> arr[i];
    }
    int a, b;
    cin >> a >> b;
    int years = 0;
    for (int i = a; i < b; ++i) {
        years += arr[i];
    }
    cout << years << endl;
}
