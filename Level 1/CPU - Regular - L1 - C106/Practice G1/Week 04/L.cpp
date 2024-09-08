#include <bits/stdc++.h>

using namespace std;
const int N = 55;
int arr[N];

int main() {
    int n;
    int set = 1;
    while (cin >> n && n) {
        cout << "Set #" << set++ << '\n';
        int avg = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            avg += arr[i];
        }
        avg /= n;
        int ans = 0;
        for (int i = 0; i < n; i++)
            if (arr[i] > avg)
                ans += (arr[i] - avg);
        cout << "The minimum number of moves is " << ans << "." << '\n' << '\n';
    }
    return 0;
}