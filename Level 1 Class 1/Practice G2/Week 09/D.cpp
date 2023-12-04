#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char> stk;
        for (int i = 0; i < s.size(); ++i) {
            if (stk.empty()) {
                stk.push(s[i]);
            } else if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                stk.push(s[i]);
            } else{
                if(!stk.empty() && s[i]==')' && stk.top()=='(')
                    stk.pop();
                else if(!stk.empty() && s[i]==']' && stk.top()=='[')
                    stk.pop();
                else if(!stk.empty() && s[i]=='}' && stk.top()=='{')
                    stk.pop();
                else
                    stk.push(s[i]);
            }
        }
        if(stk.empty())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
