#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {

    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<>> pq;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (sum + x >= 0) {
            sum += x;
            pq.push(x);
        } else {
            if (pq.size() && sum + x - pq.top() >= 0 && x > pq.top()) {
                sum -= pq.top();
                pq.pop();
                sum += x;
                pq.push(x);
            }
        }
    }

    cout << pq.size() << '\n';
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