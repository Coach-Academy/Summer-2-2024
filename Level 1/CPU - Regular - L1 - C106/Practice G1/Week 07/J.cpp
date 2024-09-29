#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 +5;
int arr[N];
int main(){
    int n;
    cin >>n;
    long long sum = 0,x;
    for(int i =0;i<n;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    cin >> x;
    long long rep = x/sum;
    sum *= rep;
    long long idx = rep * n;
    for(int i =0;i<n;i++){
        if(sum > x)
            break;
        sum += arr[i];
        idx++;
    }
    cout << idx << '\n'; // o(n) n = size array 1e5 < 2x1e8
    return 0;
}