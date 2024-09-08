#include <bits/stdc++.h>

using namespace std;
const int N = 105;
int arr[N];

int main() {
    int n;
    cin >> n;
    int mx = 0, mn = N;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (mx < arr[i])
            mx = arr[i];
        if (mn > arr[i])
            mn = arr[i];
    }
    int posMx = -1, posMn = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == mx && posMx == -1)
            posMx = i;
        if (arr[i] == mn)
            posMn = i;
    }
    int ans = posMx + (n - 1 - posMn);
    ans += (posMx > posMn ? -1 : 0);
    cout << ans << '\n';
    return 0;
}