#include <bits/stdc++.h>

#define db(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int q;
    cin >> q;

    stack<int> st;
    while (q--) {
        int op;
        cin >> op;

        if (op == 1) {
            int x;
            cin >> x;
            st.push(x);
        } else if (op == 2) {
            if (st.size())
                st.pop();
        } else {
            if (st.size()) {
                cout << st.top() << '\n';
            } else {
                cout << "Empty!\n";
            }
        }
    }
}

int32_t main() {

    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    int t = 1;

    // cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}