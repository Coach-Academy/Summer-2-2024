#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    auto can = [&](int len) -> bool {
        int cnt = 0, last = -1e9 - 5;
        for (int i = 0; i < n; i++) {
            if (a[i] - last + 1 > len) {
                cnt++;
                last = a[i];
            }
        }
        return cnt <= k;
    };

    int l = 1,
        r = a[n - 1] - a[0] + 1, ans;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (can(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
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