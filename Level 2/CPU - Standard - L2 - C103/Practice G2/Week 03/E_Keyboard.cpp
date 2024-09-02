#include <bits/stdc++.h>

#define print(A) cerr << #A << " = " << (A) << endl;

using namespace std;

void solve() {
    string s[] = {"qwertyuiop", "asdfghjkl;", "zxcvbnm,./"};

    char op;
    cin >> op;

    string t;
    cin >> t;

    for (char c : t) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < s[i].size(); j++) {
                if (s[i][j] == c) {
                    if (op == 'R') {
                        cout << s[i][j - 1];
                    } else
                        cout << s[i][j + 1];
                }
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