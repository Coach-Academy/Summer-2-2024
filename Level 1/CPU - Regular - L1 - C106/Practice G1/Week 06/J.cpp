#include <bits/stdc++.h>

using namespace std;
const int N = 10;
int arr[N],p[N],q[N];

bool isEq(int a[],int b[],int n){
    for(int i =0 ;i <n;i++){
        if(a[i] != b[i])
            return false;
    }
    return true;
}

int main(){
    int n;
    cin >>n;
    for(int i =0;i <n;i++){
        cin >> p[i];
        arr[i] = i+1;
    }
    for(int i =0;i <n; i++)
        cin >> q[i];
    int a,b, ord = 1;
    do {
        if(isEq(p,arr,n))
            a = ord;
        if(isEq(q,arr,n))
            b = ord;
        ord++;
    } while(next_permutation(arr,arr+n));
    cout << abs(a - b) << '\n';
    return 0;
}