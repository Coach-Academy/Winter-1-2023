#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    stack<char> s;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); ++i) {
        if (s.empty())
            s.push(str[i]);
        else if (str[i] == '+' && s.top() == '+')
            s.pop();
        else if (str[i] == '-' && s.top() == '-')
            s.pop();
        else
            s.push(str[i]);
    }
    if (!s.empty())
        cout << "No";
    else
        cout << "Yes\n";
    return 0;
}
