#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;
    while (n--) { // loop N times until n reaches 0
        int x;
        cin >> x;
        sum += x;
    }
    cout << sum << '\n';
    return 0;
}