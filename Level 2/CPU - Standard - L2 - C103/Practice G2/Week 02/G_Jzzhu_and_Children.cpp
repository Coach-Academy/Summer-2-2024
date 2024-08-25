#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    // queue<int> q;
    // for (int i = 1; i <= n; i++)
    //     q.push(i);

    // while (q.size() > 1) {
    //     int idx = q.front();
    //     q.pop();

    //     a[idx] -= m;
    //     if (a[idx] > 0)
    //         q.push(idx);
    // }

    // cout << q.front() << '\n';

    int ans = 1;

    int mx = 0;
    for (int i = 1; i <= n; i++) {
        int cnt = (a[i] + m - 1) / m;
        // cnt = ceil(double(a[i]) / m);
        if (mx <= cnt) {
            mx = cnt;
            ans = i;
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