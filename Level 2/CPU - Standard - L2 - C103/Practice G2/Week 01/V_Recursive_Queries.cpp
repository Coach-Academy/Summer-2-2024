#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    int ret = 1;

    while (n) {
        int d = n % 10;
        if (d != 0)
            ret *= d;
        n /= 10;
    }

    return ret;
}

int cnt;

int g(int n) {

    if (n < 10)
        return n;

    cnt++;

    return g(f(n));
}

const int N = 1e6 + 5;
int arr[N];
int array_i[10][N];

void solve() {
    int q;
    cin >> q;
    
    for (int i = 1; i <= int(1e6); i++) {
        arr[i] = g(i);
    }

    for (int d = 1; d <= 9; d++) {
        for (int i = 1; i <= int(1e6); i++) {
            if (arr[i] == d)
                array_i[d][i] = 1;
            else
                array_i[d][i] = 0;
            array_i[d][i] += array_i[d][i - 1];
        }
    }

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;

        cout << array_i[k][r] - array_i[k][l - 1] << '\n';
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