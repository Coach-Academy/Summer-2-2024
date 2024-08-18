#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;
    ans += (n / 100);
    n %= 100;
    // n: 0 -> 99
    ans += (n / 20);
    n %= 20;
    // n: 0 -> 19
    ans += (n / 10);
    n %= 10;
    // n: 0 -> 9
    ans += (n / 5);
    n %= 5;
    // n: 0 -> 4
    ans += n;
    cout << ans << '\n';
    return 0;
}