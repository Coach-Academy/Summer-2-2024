#include "iostream"

using namespace std;

int main() {
    int x;
    cin >> x;
    if (x >= 0 and x < 40)
        cout << 40 - x << '\n';
    else if (x >= 40 and x < 70)
        cout << 70 - x << '\n';
    else if (x >= 70 and x < 90)
        cout << 90 - x << '\n';
    else
        cout << "expert" << '\n';
    return 0;
}