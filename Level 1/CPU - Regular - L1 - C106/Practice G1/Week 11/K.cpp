#include <bits/stdc++.h>

using namespace std;

#define endl '\n'

int calc(int n) {
    return (n * (n + 1) / 2);
}

int solve(int i, int n) {
    if (calc(i) >= n)
        return i;
    return solve(i + 1, n);
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
//    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << solve(0, n) << endl;
    }
    return 0;
}