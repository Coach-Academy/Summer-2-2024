#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);

    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pos[a[i]] = i;
    }

    int ptr = n - 1;

    for (int x = n; x >= 1; x--) {
        if (pos[x] <= ptr) {
            for (int i = pos[x]; i <= ptr; i++)
                cout << a[i] << ' ';
            ptr = pos[x] - 1;
        }
    }
    cout << '\n';
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