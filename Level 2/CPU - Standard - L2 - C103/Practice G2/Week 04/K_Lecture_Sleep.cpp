#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n + 1), p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long sa7i = 0;
    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;
        if (t == 1) {
            sa7i += a[i];
        } else {
            p[i] = a[i];
        }
        p[i] += p[i - 1];
    }

    int mx = 0;
    for (int i = 1; i + k - 1 <= n; i++) {
        // [i , i + k - 1]
        int l = i, r = i + k - 1;
        mx = max(mx, p[r] - p[l - 1]);
    }

    cout << mx + sa7i << '\n';
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