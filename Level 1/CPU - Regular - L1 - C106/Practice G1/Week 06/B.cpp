#include <bits/stdc++.h>

using namespace std;
const int N = 1005;
int arr[N];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr,arr+n);
    cout << (arr[0] == 1 ? -1 : 1) << '\n';
    return 0;
}