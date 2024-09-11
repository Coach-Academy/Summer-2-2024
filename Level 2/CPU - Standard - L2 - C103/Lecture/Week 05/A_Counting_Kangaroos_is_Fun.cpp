#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());
    vector<int> b;
    for (int i = n / 2; i < n; i++)
        b.push_back(a[i]);
    a.resize(n / 2);

    int ans = n;
    while (a.size() && b.size()) {
        if (b.back() >= 2 * a.back()) {
            ans--;
            b.pop_back();
            a.pop_back();
        } else {
            a.pop_back();
        }
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