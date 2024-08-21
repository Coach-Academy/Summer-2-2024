#include "iostream"

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum = a + b, sub = a - b, mul = a * b;
    if (sum >= sub && sum >= mul)
        cout << sum << '\n';
    else if (sub >= sum && sub >= mul)
        cout << sub << '\n';
    else cout << mul << '\n';
    return 0;
}