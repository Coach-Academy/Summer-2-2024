#include <bits/stdc++.h>

using namespace std;
const int N = 55;
int arr[N];

int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int ans = 0;
    for (int i = 0; i < n; i++)
        ans += (arr[i] >= arr[k - 1] && arr[i]);
    cout << ans << '\n';
    return 0;
}