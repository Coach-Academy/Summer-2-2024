#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int solve(int i, vector<int> &a, vector<int> &b) {
    if (i == a.size())
        return 0;
    int sum = a[i] * b[i];
    sum += solve(i + 1, a, b);
    return sum;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &i: a) cin >> i;
        for (auto &i: b) cin >> i;
        cout << ((solve(0, a, b) == 0) ? "Yes" : "No") << endl;
    }
    return 0;
}