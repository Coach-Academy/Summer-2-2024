#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> temp(2e5 + 5);
    while (n--) {
        int l, r;
        cin >> l >> r;
        temp[l]++;
        temp[r + 1]--;
    }

    vector<int> pre(2e5 + 5);
    for (int i = 1; i <= 2e5; i++) {
        temp[i] += temp[i - 1];
        pre[i] = pre[i - 1] + (temp[i] >= k);
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << '\n';
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