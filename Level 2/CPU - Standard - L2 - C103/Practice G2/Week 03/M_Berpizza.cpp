#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

struct comp {
    bool operator()(pair<int, int> L, pair<int, int> R) {
        if (L.first != R.first)
            return L < R;
        return L > R;
    }
};
void solve() {
    int Q;
    cin >> Q;

    vector<bool> served(Q + 1);
    int id = 1;

    queue<int> Mono;
    priority_queue<pair<int, int>, vector<pair<int, int>>, comp> Poly;
    // {    _ , _, _, _}

    while (Q--) {
        int op;
        cin >> op;

        if (op == 1) {
            int m;
            cin >> m;
            Mono.push(id);
            Poly.push({m, id});
            id++;
        } else if (op == 2) {
            while (served[Mono.front()])
                Mono.pop();
            cout << Mono.front() << ' ';
            served[Mono.front()] = 1;
            Mono.pop();
        } else {
            while (served[Poly.top().second])
                Poly.pop();
            cout << Poly.top().second << ' ';
            served[Poly.top().second] = 1;
            Poly.pop();
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