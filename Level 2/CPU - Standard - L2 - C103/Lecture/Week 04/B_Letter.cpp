#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    vector<int> fq1(123), fq2(123);
    for (auto i : s)
        fq1[i]++;

    for (auto i : t)
        fq2[i]++;

    for (int i = 'A'; i < 123; i++) {
        if (fq1[i] < fq2[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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