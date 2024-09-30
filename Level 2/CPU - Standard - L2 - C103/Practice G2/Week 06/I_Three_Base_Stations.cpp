#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p.begin(), p.end());
    vector<int> pos;
    auto can = [&](int len) -> bool {
        pos.clear();
        int last = -1e9 - 4;
        for (int i = 0; i < n; i++) {
            if (p[i] - last > len) {
                pos.push_back(p[i]);
                last = p[i];
            }
        }
        if (pos.size() <= 3)
            return true;
        return false;
    };

    int l = 0, r = p[n - 1] - p[0], ans;
    while (l <= r) {
        int m = (l + r) / 2;
        if (can(m)) {
            ans = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    cout << fixed << setprecision(6);
    can(ans);
    cout << ans / 2.0 << '\n';
    while (pos.size() < 3)
        pos.push_back(pos.back());
    for (int i = 0; i < 3; i++)
        cout << pos[i] + ans / 2.0 << ' ';
    cout << '\n';
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