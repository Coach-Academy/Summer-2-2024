#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;

    vector<int> a(n), fq(3 * 1e4), fq2(3 * 1e4);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        fq2[a[i]]++;
    }

    long long ans = 0;
    for (int i = 0; i < n; i++) {
        fq2[a[i]]--;
        if (a[i] >= d)
            ans += fq[a[i] - d] * fq2[a[i] + d];
        fq[a[i]]++;
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