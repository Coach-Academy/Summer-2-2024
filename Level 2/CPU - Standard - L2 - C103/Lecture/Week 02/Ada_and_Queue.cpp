#include <bits/stdc++.h>

#define db(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int q;
    cin >> q;

    deque<int> dq;

    bool f = 0;

    while (q--) {
        string s;
        cin >> s;

        if (f == false) {
            if (s == "front") {
                if (dq.size()) {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                } else {
                    cout << "No job for Ada?\n";
                }
            } else if (s == "back") {
                if (dq.size()) {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                } else {
                    cout << "No job for Ada?\n";
                }
            } else if (s == "reverse") {
                f = !f;
            } else if (s == "push_back") {
                int x;
                cin >> x;
                dq.push_back(x);
            } else {
                int x;
                cin >> x;
                dq.push_front(x);
            }
        } else {
            if (s == "back") {
                if (dq.size()) {
                    cout << dq.front() << '\n';
                    dq.pop_front();
                } else {
                    cout << "No job for Ada?\n";
                }
            } else if (s == "front") {
                if (dq.size()) {
                    cout << dq.back() << '\n';
                    dq.pop_back();
                } else {
                    cout << "No job for Ada?\n";
                }
            } else if (s == "reverse") {
                f = !f;
            } else if (s == "toFront") {
                int x;
                cin >> x;
                dq.push_back(x);
            } else {
                int x;
                cin >> x;
                dq.push_front(x);
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