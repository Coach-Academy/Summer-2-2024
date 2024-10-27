#include <bits/stdc++.h>

using namespace std;
const int N = 35;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[N], b[N];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        while (k--) {
            int mnA = N, posA, mxB = 0, posB;
            for (int i = 0; i < n; i++) {
                if (mnA > a[i]) {
                    mnA = a[i];
                    posA = i;
                }
            }
            for (int i = 0; i < n; i++) {
                if (mxB < b[i]) {
                    mxB = b[i];
                    posB = i;
                }
            }
            if (mxB > mnA) {
                a[posA] = mxB;
                b[posB] = mnA;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << '\n';
    }
    return 0;
}