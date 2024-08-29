#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (!mp[s]) {
            cout << "OK\n";
        } else {
            cout << s << mp[s] << '\n';
        }
        mp[s]++;
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