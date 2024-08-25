#include "iostream"

using namespace std;

int main() {
    char a, b, c;
    cin >> a >> b >> c;
    if (a == 'R' && b == 'R' && c == 'R')
        cout << 3 << '\n';
    else if ((a == 'R' && b == 'R') || (b == 'R' && c == 'R'))
        cout << 2 << '\n';
    else if (a == 'R' or b == 'R' or c == 'R')
        cout << 1 << '\n';
    else
        cout << 0 << '\n';


    return 0;
}