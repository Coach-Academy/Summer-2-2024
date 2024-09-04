#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;

    // sum[l, r] -> sum[0 , r] - sum[0 , l- 1]
    vector<long long> pre(n);
    // a_i <= 2^31
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pre[i] = (i ? pre[i - 1] : 0) + x;
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        if (l > r)
            swap(l, r);
            
        cout << pre[r] - (l ? pre[l - 1] : 0) << '\n';
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