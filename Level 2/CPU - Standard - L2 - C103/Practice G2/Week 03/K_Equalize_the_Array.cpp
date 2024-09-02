#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    map<int, int> C;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        C[a[i]]++;
    }

    map<int, int> fq;
    int cnt_right = C.size();
    for (auto [x, C_i] : C) {
        fq[C_i]++;
    }

    int sum_left = 0, sum_right = n;

    int ans = n;
    for (auto [C_i, f] : fq) {
        ans = min(ans, sum_left + sum_right - cnt_right * C_i);
        sum_left += C_i * f;
        sum_right -= C_i * f;
        cnt_right -= f;
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