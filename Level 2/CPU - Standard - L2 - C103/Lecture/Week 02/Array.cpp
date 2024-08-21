#include <bits/stdc++.h>

#define db(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> A, B, C;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 0) {
            C.push_back(x);
        } else if (x > 0) {
            B.push_back(x);
        } else {
            A.push_back(x);
        }
    }

    // B.empty() = (B.size() == 0)
    if (B.empty()) {
        for (int i = 0; i < 2; i++) {
            B.push_back(A.back());
            A.pop_back();
        }
    }

    if (A.size() % 2 == 0) {
        C.push_back(A.back());
        A.pop_back();
    }

    //
    cout << A.size() << ' ';
    for (auto i : A)
        cout << i << ' ';
    cout << '\n';
    cout << B.size() << ' ';
    for (auto i : B)
        cout << i << ' ';
    cout << '\n';
    cout << C.size() << ' ';
    for (auto i : C)
        cout << i << ' ';
    cout << '\n';


    // 3 8 3 1 5
    
    // 5 1 3 8 3

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