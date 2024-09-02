#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {

    string s;

    set<string> st;
    while (getline(cin, s)) {
        s += '.';
        string t;
        for (auto c : s) {
            if (isalpha(c)) {
                c = tolower(c);
                t += c;
            } else {
                if (t.size()) {
                    st.insert(t);
                    t.clear();
                }
            }
        }
    }
    for (auto ss : st) {
        cout << ss << '\n';
    }

    "ab::c"
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