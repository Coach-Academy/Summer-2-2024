#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long ans = 0 , pre = a[0];
    for (int i = 1; i < n; i++) {
        long long l = 0, r = 1e12, get;
        while (l <= r) {
            long long m = (l + r) / 2;
            if (1LL * a[i] * 100 <= (pre + m) * k) {
                get = m;
                r = m - 1;
            } else
                l = m + 1;
        }
        ans = max(ans, get);
        pre += a[i];
    }
    cout << ans << '\n';
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