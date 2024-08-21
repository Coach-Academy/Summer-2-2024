#include "iostream"

using namespace std;

int main() {
    char c;
    cin >> c;
    if (c == 'i' || c == 'e' || c == 'o' || c == 'a' || c == 'u')
        cout << "vowel" << '\n';
    else
        cout << "consonant" << '\n';
//    cout << ((c == 'i' || c == 'e' || c == 'o' || c == 'a' || c == 'u') ? "vowel" : "consonant") << '\n';
    return 0;
}