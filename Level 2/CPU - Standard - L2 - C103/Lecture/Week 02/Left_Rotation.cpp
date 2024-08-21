#include <bits/stdc++.h>

#define db(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n, d;
    cin >> n >> d;

    queue<int> q;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        q.push(x);
    }

    for (int i = 0; i < d; i++) {
        q.push(q.front());
        q.pop();
    }

    for(int i = 0 ; i < n ; i ++) {
        cout << q.front() << ' ';
        q.pop();
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