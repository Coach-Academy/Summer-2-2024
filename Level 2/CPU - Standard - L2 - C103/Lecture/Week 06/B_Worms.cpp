#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
        a[i] += a[i - 1];

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;

        int l = 0, r = n - 1, ans = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            // a[mid] >= x
            if (a[mid] >= x) {
                ans = mid;
                r = mid - 1;
            } else
                l = mid + 1;
        }
        cout << ans + 1 << '\n';
        cout << lower_bound(a.begin(), a.end(), x) - a.begin() + 1 << '\n';
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