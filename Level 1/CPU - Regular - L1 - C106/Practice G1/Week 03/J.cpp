#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int one = 0, two = 0, thre = 0, taxi = 0;
    for (int i = 0; i < n; i++) {
        int grp;
        cin >> grp;
        switch (grp) {
            case 1: {
                one++;
                break;
            }
            case 2: {
                two++;
                break;
            }
            case 3: {
                thre++;
                break;
            }
            default:
                taxi++;
        }
    }
    taxi += thre;
    one -= thre;
    taxi += ((two + 1) / 2);
    if (two % 2 == 1)
        one -= 2;
    if (one > 0)
        taxi += ((one + 3) / 4);
    cout << taxi << '\n';
    return 0;
}