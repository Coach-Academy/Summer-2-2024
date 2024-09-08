#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int q;
    cin >> q;

    map<int, int> fq, fq2;

    while (q--) {
        int t;
        cin >> t;
        if (t == 1) {
            int x;
            cin >> x;
            fq2[fq[x]]--;
            fq[x]++;
            fq2[fq[x]]++;
        } else if (t == 2) {
            int y;
            cin >> y;
            if (fq[y]) {
                fq2[fq[y]]--;
                fq[y]--;
                fq2[fq[y]]++;
            }
        } else {
            int z;
            cin >> z;
            if (fq2[z])
                cout << "1\n";
            else
                cout << "0\n";
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