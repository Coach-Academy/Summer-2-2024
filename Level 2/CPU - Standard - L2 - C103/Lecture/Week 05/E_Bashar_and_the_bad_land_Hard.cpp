#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = 0, ans = -1, sum = 0;
    while (l < n) {
        while (r < n && sum < x) {
            sum += a[r];
            r++;
        }
        
        while (sum - a[l] >= x)
            sum -= a[l], l++;

        if (sum >= x) {
            if (ans == -1)
                ans = r - l;
            else
                ans = min(ans, r - l);
        } else {
            break;
        }
        sum -= a[l++];
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