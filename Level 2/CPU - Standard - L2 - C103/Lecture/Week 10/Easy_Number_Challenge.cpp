#include <bits/stdc++.h>

using namespace std;

void fileIO(void) {

#ifndef ONLINE_JUDGE

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif

}

void fastIO(void) {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}


const int N = 1e6;
int no_of_divs[N + 1];

void gen() {
    for (int i = 1; i <= N; ++i) {
        for (int j = i; j <= N; j += i) {
            no_of_divs[j]++;
        }
    }
}

const int mod = 1<<30;
int main() {
    fastIO(); fileIO();

    gen();

    int a, b, c; cin >> a >> b >> c;

    int ans = 0;

    for (int i = 1; i <= a; ++i) {
        for (int j = 1; j <= b; ++j) {
            for (int k = 1; k <= c; ++k) {
                int num = i * j * k;
                ans += no_of_divs[num];
                ans %= mod;
            }
        }
    }

    cout << ans << "\n";

    return 0;
}
