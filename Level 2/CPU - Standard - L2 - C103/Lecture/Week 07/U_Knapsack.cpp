#include <bits/stdc++.h>

using namespace std;
vector<int> lucky;
int n;

void rec(int cur) {
    if (cur > n)
        return;
    lucky.push_back(cur);
    rec(cur * 10 + 4);
    rec(cur * 10 + 7);
}

void solve() {
    rec(0);
    sort(lucky.begin(), lucky.end());
    for (int i = 0; i < lucky.size(); i++) {
        if(lucky[i] == n){
            cout << i +1 << '\n';

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