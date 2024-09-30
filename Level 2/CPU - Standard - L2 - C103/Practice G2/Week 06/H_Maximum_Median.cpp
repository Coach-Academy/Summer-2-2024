#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    auto can = [&](int med) -> bool {
        long long op = 0;
        for (int i = n / 2; i < n; i++) {
            if (a[i] < med)
                op += med - a[i];
        }
        return op <= k;
    };

    int l = a[n / 2], r = 2e9, ans;
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (can(m)) {
            ans = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }

    cout << ans << '\n';
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