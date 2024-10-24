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


int main() {
    fastIO(); fileIO();

    int n; cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; ++i) {

        int curr = i;
        int cnt = 0;
        for (int j = 2; j * j <= curr; ++j) {
            if(curr % j == 0) cnt++;
            while (curr % j == 0) {
                curr /= j;
            }
        }
        if(curr > 1) cnt++;
        if(cnt == 2) ans++;

    }

    cout << ans << "\n";
    

    return 0;
}
