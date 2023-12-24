#include <bits/stdc++.h>

using namespace std;

int numOfTrucks(int sz, int sizeOfTruck) {
    if (sz <= sizeOfTruck)
        return 1;

    int ans = numOfTrucks(sz / 2, sizeOfTruck) + numOfTrucks((sz + 1) / 2, sizeOfTruck);
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int box, szOfTruck;
    while (cin >> box >> szOfTruck) {
        cout << numOfTrucks(box, szOfTruck) << endl;
    }
}
