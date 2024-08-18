#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int c = 7 - a, d = 7 - b;

        if (x == a || x == b || x == c || x == d) {
            cout << "NO\n";
            return;
        }
        
    }
    cout << "YES\n";
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