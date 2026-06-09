#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int len = s.size();

    char first, last;

    first = s[0];
    last = s[len - 1];

    if(len > 10) {
        cout << first << len - 2 << last << endl;
    }
    else {
        cout << s << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}