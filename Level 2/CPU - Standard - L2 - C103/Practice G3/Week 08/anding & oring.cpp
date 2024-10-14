#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 10000;
int p[30][N];
int arr[N];
int query(int l , int r , int i) {
    return p[i][r] - (l == 0 ? 0 : p[i][l - 1]);
}
int oring(int l , int  r) {
    int res = 0;
    for(int i = 0;i < 30;i++) {
        if(query(l , r , i) > 0)res |= (1<<i);
    }
    return res;
}
int anding(int l , int r) {
    int res = 0;
    for(int i = 0;i < 30;i++) {
        if(query(l , r , i) == r - l + 1)res |= (1<<i);
    }
    return res;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    for(int i = 0;i < N;i++) {
        for(int j = 0;j < 30;j++) {
            p[j][i] = (arr[i] & (1<<j)) > 0;
            if(i > 0)p[j][i] += p[j][i - 1];
        }
    }
    
}