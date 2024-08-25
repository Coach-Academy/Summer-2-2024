#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int q;
    cin >> q;

    string s;
    stack<pair<int, string>> st;

    while (q--) {
        int op;
        cin >> op;

        if (op == 1) {
            string w;
            cin >> w;
            s += w;
            st.push({op, w});
        } else if (op == 2) {
            int k;
            cin >> k;

            string t;
            while (k--)
                t += s.back(), s.pop_back();
            reverse(t.begin(), t.end());
            st.push({op, t});
        } else if (op == 3) { 
            int k;
            cin >> k;
            cout << s[k - 1] << '\n';
        } else {
            if (st.size()) {
                pair<int, string> x = st.top();
                st.pop();
                if (x.first == 1) {
                    int sz = x.second.size();
                    while (sz--) {
                        s.pop_back();
                    }
                } else {
                    s += x.second;
                }
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