#include "iostream"

using namespace std;

int main(){
    double l,p,q;
    cin >> l >> p >> q;
    double res = l * (p/(p+q));
    cout << res << '\n';
    return 0;
}