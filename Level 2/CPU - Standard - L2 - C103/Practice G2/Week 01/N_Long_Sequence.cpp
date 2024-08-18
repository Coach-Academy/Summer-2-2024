#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    long long sum = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i], sum += a[i];

    long long x;// 1e18
    cin >> x;

    long long cntA = x / sum;

    x -= 1LL * cntA * sum;
    
    long long y = 0;
    // x = q
    //
    for (int i = 0; i < n; i++) {
        y += a[i];
        if (y > x) {
            cout << 1LL * i + 1 + 1LL * cntA * n << '\n';
            return;
            //
        }
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