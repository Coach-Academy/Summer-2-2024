#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int q;
    cin >> q;

    priority_queue<int, vector<int>, greater<>> pq;

    vector<pair<string, int>> out;
    while (q--) {
        string s;
        cin >> s;
        if (s == "insert") {
            int x;
            cin >> x;
            pq.push(x);
            out.push_back({s, x});
        } else if (s == "removeMin") {
            if (pq.size()) {
                out.push_back({s, -1});
                pq.pop();
            } else {
                out.push_back({"insert", 0});
                out.push_back({s, -1});
            }
        } else {
            int x;
            cin >> x;
            while (pq.size() && pq.top() < x) {
                out.push_back({"removeMin", -1});
                pq.pop();
            }

            if (!pq.size() || pq.top() > x) {
                out.push_back({"insert", x});
                pq.push(x);
            }
            out.push_back({s, x});
        }
    }

    cout << out.size() << '\n';
    for (auto [s, x] : out) {
        cout << s << ' ';
        if (s != "removeMin")
            cout << x;
        cout << '\n';
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