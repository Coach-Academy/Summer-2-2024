#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n , m;
int arr[101];
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>n>>m;
    for(int i = 0;i < n;i++)cin>>arr[i] , arr[i] = (arr[i] > 0 ? 0 : arr[i]);
    sort(arr , arr + n);
    cout<<-accumulate(arr , arr + m , 0);
}
