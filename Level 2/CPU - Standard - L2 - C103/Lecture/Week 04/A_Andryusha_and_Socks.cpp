#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<bool> exist(n + 1); // bool false
    // int,float ,long long ,  0
    // string ""

    int cnt = 0, ans = 0;
    for (int i = 0; i < 2 * n; i++) {
        int x;
        cin >> x;

        if (!exist[x]) {
            exist[x] = 1;
            cnt++;
        } else {
            exist[x] = 0;
            cnt--;
        }
        // [   ]
        ans = max(ans, cnt);
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