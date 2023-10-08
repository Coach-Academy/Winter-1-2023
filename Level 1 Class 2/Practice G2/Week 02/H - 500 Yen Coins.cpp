#include <iostream>

using namespace std;

int main() {
    int yen = 500, k, x;
    cin >> k >> x;
    k *= yen;

    if (k >= x)
        cout << "Yes\n";
    
    else cout << "No\n";
}
