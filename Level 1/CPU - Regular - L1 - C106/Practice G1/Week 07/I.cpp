#include <bits/stdc++.h>

using namespace std;
const int N = 105;
int arr[N];

int main(){
    int t;
    cin >>t;
    while(t--){
        int n,d;
        cin >>n >> d;
        for(int i =0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        cout << ((arr[0] + arr[1] <= d || arr[n-1] <=d) ? "YES" : "NO") << '\n'; // n log n
    }
    return 0;
}