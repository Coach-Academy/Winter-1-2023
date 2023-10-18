// Problem URL: https://vjudge.net/problem/AtCoder-abc198_b

#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    int test_cases = 1;
    // cin >> test_cases;
    while(test_cases--){
        string s;
        cin >> s;
        while(!s.empty() && s.back() == '0')
            s.pop_back();
        int l = 0, r = s.size() - 1;
        bool is_palindrome = true;
        while(l < r)
            if(s[l++] != s[r--])
                is_palindrome = false;
        cout << (is_palindrome ? "Yes" : "No") << '\n';
    }
    return 0;
}