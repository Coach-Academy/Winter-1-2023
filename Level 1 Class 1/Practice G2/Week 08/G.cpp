#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TEKA ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    TEKA
    int q,n;
    cin>>q;
    deque<int>d;
    string s;
    bool is_reversed=0;
    while (q--){
        cin>>s;
        if(s=="reverse")is_reversed=!is_reversed;
        else if(is_reversed==0)
        {
            if (s == "push_back") {
                cin >> n;
                d.push_back(n);
            } else if (s == "toFront") {
                cin >> n;
                d.push_front(n);
            } else {
                if (d.empty())
                    cout << "No job for Ada?\n";
                else if (s == "back") {
                    cout << d.back() << "\n";
                    d.pop_back();
                } else if (s == "front") {
                    cout << d.front() << "\n";
                    d.pop_front();
                }
            }
        } else{
            if (s == "push_back") {
                cin >> n;
                d.push_front(n);
            } else if (s == "toFront") {
                cin >> n;
                d.push_back(n);
            } else {
                if (d.empty())
                    cout << "No job for Ada?\n";
                else if (s == "front") {
                    cout << d.back() << "\n";
                    d.pop_back();
                } else if (s == "back") {
                    cout << d.front() << "\n";
                    d.pop_front();
                }
            }
        }
    }
    return 0;
}
