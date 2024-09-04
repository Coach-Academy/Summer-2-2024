#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr(n + 2);
    vector<int> base(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> base[i];
    int q;
    cin >> q;
    while (q--) {
        int l, r, val;
        cin >> l >> r >> val;
        // [l , r]
        arr[l] += val;     // [l , n] += val
        arr[r + 1] -= val; // [r + 1 , n] -= val
    }

    for (int i = 1; i <= n; i++)
        arr[i] += arr[i - 1];

    for (int i = 1; i <= n; i++) {
        cout << base[i] + arr[i] << ' ';
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