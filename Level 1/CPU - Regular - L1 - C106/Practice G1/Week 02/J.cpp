#include "iostream"

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (c == 1)
        cout << (b > a ? "Aoki" : "Takahashi") << '\n';
    else
        cout << (a > b ? "Takahashi" : "Aoki") << '\n';
    return 0;
}