#include <bits/stdc++.h>

using namespace std;
vector<int> lucky;
int n;

void rec(int cur) {
    if (cur > n)
        return;
    lucky.push_back(cur);
    if (1LL * cur * 10 > n)
        return;
    rec(cur * 10 + 4);
    rec(cur * 10 + 7);
}

void solve() {
    cin >> n;
    rec(0);
    sort(lucky.begin(), lucky.end());
    for (int i = 0; i < lucky.size(); i++) {
        if (lucky[i] == n) {
            cout << i << '\n';
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