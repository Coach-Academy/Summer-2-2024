#include "iostream"

using namespace std;

int main() {
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    cout << (d >= t * v && d <= s * v ? "No" : "Yes") << '\n';
    return 0;
}