#include <bits/stdc++.h>

using namespace std;

int main() {
    vector <int> vec{1, 1, 2, 3, 3, 3, 4, 4, 1, 1, 1};

/*    set <int> st(vec.begin(), vec.end());
    vec = vector <int> (st.begin(), st.end());*/

//    sort(vec.begin(), vec.end());
    vec.resize(unique(vec.begin(), vec.end())-vec.begin());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    for (auto &i : vec) cout << i << ' ';
    return 0;
}
