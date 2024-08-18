#include <bits/stdc++.h>

using namespace std;

int cap;
int cnt(int x) {
    if (x <= cap)
        return 1;
    if (x % 2 == 0) {
        return cnt(x / 2) * 2;
    } else {
        return cnt(x / 2) + cnt(x / 2 + 1);
    }
}

void solve() {
    int x;
    while (cin >> x >> cap) {
        cout << cnt(x) << '\n';
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