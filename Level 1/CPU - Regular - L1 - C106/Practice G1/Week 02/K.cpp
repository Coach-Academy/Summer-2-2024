#include "iostream"

using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;
    if(k <= (n+1) / 2 )
        cout << 2*k -1 << '\n';
    else
        cout << (k - (n +1) /2 ) * 2 << '\n';
    return 0;
}