#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;
    s = '0' + s;

    vector<int> premx(n + 1), premi(n + 1), pre(n + 1), sufmx(n + 2), sufmi(n + 2);
    for (int i = 1; i <= n; i++) {
        int d = s[i] == '+' ? 1 : -1;
        pre[i] = pre[i - 1] + d;
        premx[i] = max(premx[i - 1], pre[i]);
        premi[i] = min(premi[i - 1], pre[i]);
    }

    for (int i = n; i >= 1; i--) {
        int d = s[i] == '+' ? 1 : -1;
        sufmx[i] = max(0, sufmx[i + 1] + d);
        sufmi[i] = min(0, sufmi[i + 1] + d);
    }

    while (m--) {
        int l, r;
        cin >> l >> r;
        --l, ++r;
        int mx = premx[l], mi = premi[l];
        mx = max(mx, pre[l] + sufmx[r]);
        mi = min(mi, pre[l] + sufmi[r]);
        cout << mx - mi + 1 << '\n';
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