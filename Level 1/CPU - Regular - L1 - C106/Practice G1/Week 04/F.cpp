#include <bits/stdc++.h>

using namespace std;
const int N = 150000;
int arr[N];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mn = arr[n - 1], bad = 0;
        for (int i = n - 2; i >= 0; i--) {
            bad += (arr[i] > mn);
            if (arr[i] < mn)
                mn = arr[i];
        }
        cout << bad << '\n';
    }
    return 0;
}