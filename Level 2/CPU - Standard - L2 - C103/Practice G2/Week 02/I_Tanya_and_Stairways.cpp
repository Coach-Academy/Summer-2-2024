#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> ans;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        if (a[i] == 1 && i) {
            ans.push_back(a[i - 1]);
        }
    }

    ans.push_back(a.back());

    cout << ans.size() << '\n';
    for (auto i : ans)
        cout << i << ' ';
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