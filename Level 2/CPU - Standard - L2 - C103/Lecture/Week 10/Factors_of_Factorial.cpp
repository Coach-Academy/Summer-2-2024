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

const int mod = 1e9 + 7;
int main() {
    fastIO(); fileIO();

    int n; cin >> n;

    vector<int> freq(n + 1);
    for (int i = 1; i <= n; ++i) {
        int curr = i;
        for (int j = 2; j * j <= curr; ++j) {
            while (curr % j == 0) {
                freq[j]++;
                curr /= j;
            }
        }
        if(curr > 1) freq[curr]++;
    }

    long long ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans *= (freq[i] + 1) % mod;
        ans %= mod;
    }

    cout << ans << "\n";


    return 0;
}
