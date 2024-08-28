#include "iostream"

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        cout << (x > 24 ? "Yes" : "No") << '\n';
    }
    return 0;
}