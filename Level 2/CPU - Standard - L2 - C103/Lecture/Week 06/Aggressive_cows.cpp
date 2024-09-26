#include <bits/stdc++.h>

using namespace std;

int n, c;

bool can(vector<int> &a, int dist) {
    int cnt = c, last = -1e9 - 5;
    for (int i = 0; i < n; i++) {
        if (a[i] - last >= dist) {
            cnt--;
            last = a[i];
        }
        if (cnt == 0)
            return true;
    }
    return false;
}

void solve() {
    cin >> n >> c;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    int l = 1, r = a[n - 1] - a[0], ans = 1;
    
    while (l <= r) {
        int mid = (l + r) / 2;
        bool ret = can(a, mid);
        if (ret) {
            ans = mid;
            l = mid + 1;
        } else {
            r = mid - 1;
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