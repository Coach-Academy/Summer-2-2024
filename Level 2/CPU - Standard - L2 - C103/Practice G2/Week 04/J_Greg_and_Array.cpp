#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    vector<array<int, 3>> op(m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 3; j++)
            cin >> op[i][j];
    }

    vector<int> cnt(m + 1);
    while (k--) {
        int l, r;
        cin >> l >> r;
        --l, --r;
        cnt[l]++, cnt[r + 1]--;
    }

    for (int i = 1; i < m; i++)
        cnt[i] += cnt[i - 1];

    vector<long long> pre(n + 2);
    for (int i = 0; i < m; i++) {
        auto [l, r, v] = op[i];
        pre[l] += 1LL * v * cnt[i];
        pre[r + 1] -= 1LL * v * cnt[i];
    }

    for (int i = 1; i <= n; i++) {
        pre[i] += pre[i - 1];
        cout << a[i] + pre[i] << ' ';
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