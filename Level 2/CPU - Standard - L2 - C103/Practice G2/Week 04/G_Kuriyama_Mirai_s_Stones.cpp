#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector pre(2, vector<long long>(n + 1));

    vector<int> a(n + 1); // 0
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pre[0][i] = a[i] + pre[0][i - 1];
    }

    sort(a.begin() + 1, a.end());

    for (int i = 1; i <= n; i++) {
        pre[1][i] = a[i] + pre[1][i - 1];
    }

    int q;
    cin >> q;
    while (q--) {
        int t, l, r;
        cin >> t >> l >> r;
        --t;
        cout << pre[t][r] - pre[t][l - 1] << '\n';
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