#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.size();
    vector<int> a(n), pre(n);
    for (int i = 0; i + 1 < n; i++) {
        a[i] = s[i] == s[i + 1];

        pre[i] = (i ? pre[i - 1] : 0) + a[i];
    }

    int q;
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        --l, --r;

        cout << pre[r - 1] - (l ? pre[l - 1] : 0) << '\n';
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