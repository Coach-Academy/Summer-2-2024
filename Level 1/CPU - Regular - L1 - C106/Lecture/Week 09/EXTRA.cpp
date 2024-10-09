#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (auto &i: a) cin >> i;
        int mx = *max_element(a.begin(), a.end());
        vector<int> res;

        for (int i = 0; i < m; i++) {
            char op;
            int l, r;
            cin >> op >> l >> r;
            if (l <= mx && mx <= r) {
                if (op == '+')
                    mx++;
                else if (op == '-')
                    mx--;
            }
            res.push_back(mx);
        }
        for (auto &i: res)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}