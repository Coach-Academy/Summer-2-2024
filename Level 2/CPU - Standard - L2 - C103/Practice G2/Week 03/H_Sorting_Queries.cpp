#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int Q;
    cin >> Q;

    priority_queue<int, vector<int>, greater<>> pq;
    queue<int> q;

    while (Q--) {
        int op;
        cin >> op;

        if (op == 1) {
            int x;
            cin >> x;
            q.push(x);
        } else if (op == 2) {
            if (pq.size()) {
                cout << pq.top() << '\n';
                pq.pop();
            } else {
                cout << q.front() << '\n';
                q.pop();
            }
        } else {
            while (q.size()) {
                pq.push(q.front());
                q.pop();
            }
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