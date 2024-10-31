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

typedef long long ll;

ll gcd(ll a, ll b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b) {
    return a/gcd(a,b)*b;
}

int main() {
    fastIO(); fileIO();

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        int mn = *min_element(arr.begin(), arr.end());
        int g = 0;

        for (int i = 0; i < n; ++i) {
            g = gcd(g, arr[i] - mn);
        }

        if(g) cout << g << "\n";
        else cout << "-1\n";
    }

    return 0;
}