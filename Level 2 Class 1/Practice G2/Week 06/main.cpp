#include <bits/stdc++.h>

using namespace std;

int main() {
    // lower_bound(vec.begin(), vec.end(), x)-->returns an iterator that points at the first element in vec
                                                // greater than or equal to x
    // upper_bound(vec.begin(), vec.end(), x)-->returns an iterator that points at the first element in vec
                                                // greater than x
    int n, x; cin >> n >> x;
    vector <int> a(n);
    for (auto &i : a) cin >> i;
    int st = 0, en = n-1;
    while(st <= en) {
        int mi = (st+en)/2;
        if (a[mi] >= x) en = mi-1;
        else st = mi+1;
    }
    int idx = en+1;
    cout << idx << '\n';
    return 0;
}
