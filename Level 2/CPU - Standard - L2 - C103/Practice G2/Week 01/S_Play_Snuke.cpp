#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans = 2E9;
    for (int i = 0; i < n; i++) {
        int A , P , X;
        cin >> A >> P >> X;

        if(X > A){
            ans = min(ans , P);
        }
    }

    if (ans == 2E9)
        ans = -1;

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