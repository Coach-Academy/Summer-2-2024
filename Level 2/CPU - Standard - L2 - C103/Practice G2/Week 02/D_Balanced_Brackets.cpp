#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    string s;
    cin >> s;

    stack<char> st;

    for (auto c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            if (st.size() && c - st.top() <= 2) {
                st.pop();
            } else {
                cout << "NO\n";
                return;
            }
        }
    }

    if (st.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int32_t main() {

    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    int t = 1;

    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}