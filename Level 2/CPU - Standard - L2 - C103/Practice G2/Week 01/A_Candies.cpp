#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    for (int k = 2; k < 31; k++) {
        int sum = 0;
        for (int i = 0; i < k; i++) {
            sum += pow(2 , i);
        }

        if (n % sum == 0) {
            cout << n / sum << '\n';
            return;
        }
    }
}

int32_t main() {

    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);
    int t = 1;

    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}