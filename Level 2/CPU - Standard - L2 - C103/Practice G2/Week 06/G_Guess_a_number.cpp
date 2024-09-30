#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int l = -2e9, r = 2e9;

    map<string, string> neg;
    neg["<="] = ">";
    neg["<"] = ">=";
    neg[">="] = "<";
    neg[">"] = "<=";

    for (int i = 0; i < n; i++) {
        string s;
        int x;
        char c;
        cin >> s >> x >> c;

        if (c == 'N')
            s = neg[s];

        if (s == "<=") {
            r = min(r, x);
        } else if (s == "<") {
            r = min(r, x - 1);
        } else if (s == ">=") {
            l = max(l, x);
        } else {
            l = max(l, x + 1);
        }
    }
    if (l <= r) {// [l ,, ,,, r]
        cout << l << '\n';
    } else
        cout << "Impossible\n";
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